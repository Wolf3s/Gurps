#include <map>
#include <string>

std::string damage_thr(int st)
{
    std::map<int, std::string> damage_thr;
    damage_thr[1] = "1d-6";
    damage_thr[2] = "1d-6";
    damage_thr[3] = "1d-5";
    damage_thr[4] = "1d-5";
    damage_thr[5] = "1d-4";
    damage_thr[6] = "1d-4";
    damage_thr[7] = "1d-3";
    damage_thr[8] = "1d-3";
    damage_thr[9] = "1d-2";
    damage_thr[10] = "1d-2";
    damage_thr[11] = " 1d-1";
    damage_thr[12] = " 1d-1";
    damage_thr[13] = "1d";
    damage_thr[14] = "1d";
    damage_thr[15] = "1d+1";
    damage_thr[16] = "1d+1";
    damage_thr[17] = "1d+2";
    damage_thr[18] = "1d+2";
    damage_thr[19] = "2d-1";
    damage_thr[20] = "2d-1";
    damage_thr[21] = "2d";
    damage_thr[22] = "2d";
    damage_thr[23] = "2d+1";
    damage_thr[24] = "2d+1";
    damage_thr[25] = "2d+2";
    damage_thr[26] = "2d+2";
    damage_thr[27] = "3d-1";
    damage_thr[28] = "3d-1";

    return damage_thr.at(st);
}

std::string damage_sw(int st)
{
    std::map<int, std::string> damage_sw;
    damage_sw[1] = "1d-5";
    damage_sw[2] = "1d-5";
    damage_sw[3] = "1d-4";
    damage_sw[4] = "1d-4";
    damage_sw[5] = "1d-3";
    damage_sw[6] = "1d-3";
    damage_sw[7] = "1d-2";
    damage_sw[8] = "1d-2";
    damage_sw[9] = "1d-1";
    damage_sw[10] = "1d";
    damage_sw[11] = "1d+1";
    damage_sw[12] = "1d+2";
    damage_sw[13] = "2d-1";
    damage_sw[14] = "2d";
    damage_sw[15] = "2d+1";
    damage_sw[16] = "2d+2";
    damage_sw[17] = "3d-1";
    damage_sw[18] = "3d";
    damage_sw[19] = "3d+1";
    damage_sw[20] = "3d+2";
    damage_sw[21] = "4d-1";
    damage_sw[22] = "4d";
    damage_sw[23] = "4d+1";
    damage_sw[24] = "4d+2";
    damage_sw[25] = "5d-1";
    damage_sw[26] = "5d";
    damage_sw[27] = "5d+1";
    damage_sw[28] = "5d+1";
    damage_sw[29] = "5d+2";
    damage_sw[30] = "5d+2";

    return damage_sw.at(st);
}