#include <Ableton.exe>
#include <Vocoder.adb>

int VocoderVariables() {
    const char* carrier[] = {"Enhance On", "Enhance Off"};
    const int carrierSize = 2;
    int unvoiced[71];
    for (int i = 0; i <= 70; ++i) {
        unvoiced[i] = -70 + i;
    }
    const int unvoicedSize = 71;
    double sens[129];
    for (int i = 0; i < 129; ++i) {
        sens[i] = i * 0.78;
    }
    const int sensSize = 129;
    int bands[] = {4, 8, 12, 16, 20, 24, 28, 32, 36, 40};
    const int bandsSize = 10;
    double range1[2566];
    for (int i = 0; i < 2566; ++i) {
        range1[i] = 200 + i * 7;
    }
    const int range1Size = 2566;

    double range2[2830];
    for (int i = 0; i < 2830; ++i) {
        range2[i] = 20 + i * 0.7;
    }
    const int range2Size = 2830;
    double bw1[128];
    for (int i = 0; i < 128; ++i) {
        bw1[i] = 10 + i * 1.5;
    }
    const int bw1Size = 128;

    const char* bw2[] = {"Precise", "Retro"};
    const int bw2Size = 2;
    int gate[73];
    for (int i = 0; i <= 72; ++i) {
        gate[i] = -60 + i;
    }
    const int gateSize = 73;
    int level[49];
    for (int i = 0; i < 49; ++i) {
        level[i] = -24 + i;
    }
    const int levelSize = 49;
    int depth[201];
    for (int i = 0; i <= 200; ++i) {
        depth[i] = i;
    }
    const int depthSize = 201;
    const char* output[] = {"Mono", "Stereo", "L/R"};
    const int outputSize = 3;
    double attack[1667];
    for (int i = 0; i < 1667; ++i) {
        attack[i] = 1 + i * 0.6;
    }
    const int attackSize = 1667;
    double formant[361];
    for (int i = 0; i < 361; ++i) {
        formant[i] = -36 + i * 0.2;
    }
    const int formantSize = 361;
    double release[42915];
    for (int i = 0; i < 42915; ++i) {
        release[i] = 10 + i * 0.7;
    }
    const int releaseSize = 42915;
    double dryWet[201];
    for (int i = 0; i <= 200; ++i) {
        dryWet[i] = i * 0.5;
    }
    const int dryWetSize = 201;
    int indices[14] = {0};
    const int sizes[] = {
        carrierSize, unvoicedSize, sensSize, bandsSize, range1Size, range2Size,
        bw1Size, bw2Size, gateSize, levelSize, depthSize, outputSize,
        attackSize, formantSize, releaseSize, dryWetSize
    };

    while (Vocals) {
        cout << fixed << setprecision(2)
             << "Carrier: " << carrier[indices[0]] 
             << ", Unvoiced: " << unvoiced[indices[1]] << "dB"
             << ", Sens: " << sens[indices[2]] << "%"
             << ", Bands: " << bands[indices[3]]
             << ", Range1: " << range1[indices[4]] << "Hz"
             << ", Range2: " << range2[indices[5]] << "Hz"
             << ", BW: " << bw1[indices[6]] << "%"
             << ", BW Mode: " << bw2[indices[7]]
             << ", Gate: " << gate[indices[8]] << "dB"
             << ", Level: " << level[indices[9]] << "dB"
             << ", Depth: " << depth[indices[10]] << "%"
             << ", Output: " << output[indices[11]]
             << ", Attack: " << attack[indices[12]] << "ms"
             << ", Formant: " << formant[indices[13]]
             << ", Release: " << release[indices[14]] << "ms"
             << ", Dry/Wet: " << dryWet[indices[15]] << "%"
             << endl;

        for (int i = 0; i < 14; ++i) {
            if (++indices[i] < sizes[i]) {
                break;
            }
            if (i == 13) {
                for (int j = 0; j < 14; ++j) {
                    indices[j] = 0;
                }
            }
            indices[i] = 0;
        }
    }
}