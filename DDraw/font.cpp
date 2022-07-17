#include "font.h"
#pragma warning(disable:4309)


char ThinFont[2048] = {
0, 
0, 0, 0, 0, 0, 0, 0, 126, 129, 165, 129, 189, 153, 129, 126, 126, 255, 219, 255, 195, 
231, 255, 126, 108, 254, 254, 254, 124, 56, 16, 0, 16, 56, 124, 254, 124, 56, 16, 0, 56, 
124, 56, 254, 254, 124, 56, 124, 16, 16, 56, 124, 254, 124, 56, 124, 0, 0, 24, 60, 60, 
24, 0, 0, 255, 255, 231, 195, 195, 231, 255, 255, 0, 60, 102, 66, 66, 102, 60, 0, 255, 
195, 153, 189, 189, 153, 195, 255, 15, 7, 15, 125, 204, 204, 204, 120, 60, 102, 102, 102, 60, 
24, 126, 24, 63, 51, 63, 48, 48, 112, 240, 224, 127, 99, 127, 99, 99, 103, 230, 192, 153, 
90, 60, 231, 231, 60, 90, 153, 128, 224, 248, 254, 248, 224, 128, 0, 2, 14, 62, 254, 62, 
14, 2, 0, 24, 60, 126, 24, 24, 126, 60, 24, 102, 102, 102, 102, 102, 0, 102, 0, 127, 
219, 219, 123, 27, 27, 27, 0, 62, 99, 56, 108, 108, 56, 204, 120, 0, 0, 0, 0, 126, 
126, 126, 0, 24, 60, 126, 24, 126, 60, 24, 255, 24, 60, 126, 24, 24, 24, 24, 0, 16, 
16, 16, 16, 124, 56, 16, 0, 0, 24, 12, 254, 12, 24, 0, 0, 0, 32, 96, 254, 96, 
32, 0, 0, 0, 0, 192, 192, 192, 254, 0, 0, 0, 36, 102, 255, 102, 36, 0, 0, 0, 
24, 60, 126, 255, 255, 0, 0, 0, 255, 255, 126, 60, 24, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 32, 32, 32, 32, 32, 0, 32, 0, 72, 72, 72, 0, 0, 0, 0, 0, 108, 
108, 254, 108, 254, 108, 108, 0, 56, 84, 144, 120, 20, 212, 56, 16, 0, 196, 200, 16, 32, 
70, 134, 0, 56, 68, 40, 114, 148, 136, 118, 0, 64, 64, 128, 0, 0, 0, 0, 0, 8, 
16, 32, 32, 32, 16, 8, 0, 64, 32, 16, 16, 16, 32, 64, 0, 0, 68, 40, 254, 40, 
68, 0, 0, 0, 16, 16, 124, 16, 16, 0, 0, 0, 0, 0, 0, 0, 32, 32, 64, 0, 
0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 48, 0, 2, 4, 8, 16, 32, 
64, 128, 0, 124, 134, 138, 146, 162, 194, 124, 0, 16, 48, 16, 16, 16, 16, 56, 0, 120, 
196, 4, 120, 128, 128, 252, 0, 120, 132, 4, 24, 4, 132, 120, 0, 24, 56, 72, 136, 252, 
8, 8, 0, 252, 128, 128, 120, 4, 132, 120, 0, 120, 128, 128, 248, 132, 132, 120, 0, 124, 
4, 4, 8, 16, 32, 32, 0, 120, 132, 132, 120, 132, 132, 120, 0, 120, 132, 132, 124, 4, 
8, 16, 0, 0, 48, 48, 0, 0, 48, 48, 0, 0, 48, 48, 0, 0, 48, 48, 96, 24, 
48, 96, 192, 96, 48, 24, 0, 0, 0, 252, 0, 0, 252, 0, 0, 96, 48, 24, 12, 24, 
48, 96, 0, 120, 204, 12, 24, 48, 0, 48, 0, 120, 132, 156, 164, 188, 128, 124, 0, 120, 
132, 132, 252, 132, 132, 132, 0, 248, 132, 132, 248, 132, 132, 248, 0, 120, 132, 128, 128, 128, 
132, 120, 0, 248, 132, 132, 132, 132, 132, 248, 0, 252, 128, 128, 248, 128, 128, 252, 0, 252, 
128, 128, 240, 128, 128, 128, 0, 120, 132, 128, 128, 140, 132, 124, 0, 132, 132, 132, 252, 132, 
132, 132, 0, 112, 32, 32, 32, 32, 32, 112, 0, 8, 8, 8, 8, 136, 136, 112, 0, 132, 
136, 144, 224, 144, 136, 132, 0, 128, 128, 128, 128, 128, 128, 252, 0, 132, 204, 180, 132, 132, 
132, 132, 0, 132, 196, 164, 148, 140, 132, 132, 0, 120, 132, 132, 132, 132, 132, 120, 0, 248, 
132, 132, 248, 128, 128, 128, 0, 120, 132, 132, 132, 148, 140, 120, 4, 248, 132, 132, 248, 144, 
136, 132, 0, 120, 132, 128, 120, 4, 132, 120, 0, 248, 32, 32, 32, 32, 32, 32, 0, 132, 
132, 132, 132, 132, 132, 120, 0, 130, 130, 130, 130, 68, 40, 16, 0, 132, 132, 132, 132, 180, 
204, 132, 0, 130, 68, 40, 16, 40, 68, 130, 0, 130, 130, 130, 68, 56, 16, 16, 0, 254, 
4, 8, 16, 32, 64, 254, 0, 120, 64, 64, 64, 64, 64, 120, 0, 128, 64, 32, 16, 8, 
4, 2, 0, 120, 8, 8, 8, 8, 8, 120, 0, 16, 40, 68, 130, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 255, 48, 48, 24, 0, 0, 0, 0, 0, 0, 0, 120, 4, 124, 
132, 124, 0, 128, 128, 248, 132, 132, 132, 248, 0, 0, 0, 120, 132, 128, 132, 120, 0, 4, 
4, 124, 132, 132, 132, 124, 0, 0, 0, 120, 132, 252, 128, 120, 0, 48, 72, 64, 240, 64, 
64, 64, 0, 0, 0, 124, 132, 132, 124, 4, 120, 128, 128, 248, 132, 132, 132, 132, 0, 32, 
0, 32, 32, 32, 32, 32, 0, 8, 0, 8, 8, 8, 136, 136, 112, 192, 192, 132, 136, 240, 
136, 132, 0, 32, 32, 32, 32, 32, 32, 32, 0, 0, 0, 198, 170, 146, 130, 130, 0, 0, 
0, 248, 132, 132, 132, 132, 0, 0, 0, 120, 132, 132, 132, 120, 0, 0, 0, 248, 132, 132, 
248, 128, 128, 0, 0, 124, 132, 132, 124, 4, 4, 0, 0, 184, 196, 128, 128, 128, 0, 0, 
0, 124, 128, 124, 2, 252, 0, 64, 64, 240, 64, 64, 68, 56, 0, 0, 0, 132, 132, 132, 
132, 124, 0, 0, 0, 132, 132, 132, 72, 48, 0, 0, 0, 130, 130, 146, 170, 198, 0, 0, 
0, 132, 72, 48, 72, 132, 0, 0, 0, 132, 132, 132, 124, 4, 120, 0, 0, 124, 8, 16, 
32, 124, 0, 28, 48, 48, 224, 48, 48, 28, 0, 24, 24, 24, 0, 24, 24, 24, 0, 224, 
48, 48, 28, 48, 48, 224, 0, 118, 220, 0, 0, 0, 0, 0, 0, 0, 16, 56, 108, 198, 
198, 254, 0, 120, 204, 192, 204, 120, 24, 12, 120, 0, 198, 0, 198, 198, 198, 126, 0, 28, 
0, 120, 204, 252, 192, 120, 0, 124, 130, 124, 6, 126, 198, 126, 0, 108, 0, 120, 4, 124, 
132, 124, 0, 224, 0, 124, 6, 126, 198, 126, 0, 56, 40, 120, 4, 124, 132, 124, 0, 0, 
0, 120, 192, 192, 120, 12, 56, 126, 195, 60, 102, 126, 96, 60, 0, 204, 0, 120, 204, 252, 
192, 120, 0, 224, 0, 120, 204, 252, 192, 120, 0, 204, 0, 120, 48, 48, 48, 120, 0, 124, 
198, 56, 24, 24, 24, 60, 0, 224, 0, 112, 48, 48, 48, 120, 0, 204, 120, 132, 132, 252, 
132, 132, 0, 56, 40, 124, 130, 254, 130, 130, 0, 28, 0, 252, 192, 248, 192, 252, 0, 0, 
0, 127, 12, 127, 204, 127, 0, 126, 204, 204, 254, 204, 204, 206, 0, 120, 204, 0, 120, 204, 
204, 120, 0, 0, 108, 0, 120, 132, 132, 120, 0, 0, 224, 0, 124, 198, 198, 124, 0, 124, 
198, 0, 198, 198, 198, 126, 0, 0, 224, 0, 198, 198, 198, 126, 0, 0, 198, 0, 198, 198, 
126, 6, 252, 204, 120, 132, 132, 132, 132, 120, 0, 198, 0, 198, 198, 198, 198, 124, 0, 24, 
24, 126, 192, 192, 126, 24, 24, 56, 108, 100, 240, 96, 102, 252, 0, 204, 204, 120, 252, 48, 
252, 48, 48, 248, 204, 204, 250, 198, 207, 198, 199, 14, 27, 24, 60, 24, 24, 216, 112, 28, 
0, 124, 6, 126, 198, 126, 0, 56, 0, 120, 48, 48, 48, 120, 0, 0, 28, 0, 124, 198, 
198, 124, 0, 0, 28, 0, 198, 198, 198, 126, 0, 0, 248, 0, 252, 198, 198, 198, 0, 252, 
0, 204, 236, 252, 220, 204, 0, 60, 108, 108, 62, 0, 126, 0, 0, 56, 108, 108, 56, 0, 
124, 0, 0, 48, 0, 48, 96, 192, 204, 120, 0, 0, 0, 0, 252, 192, 192, 0, 0, 0, 
0, 0, 252, 12, 12, 0, 0, 195, 198, 204, 222, 51, 102, 204, 15, 195, 198, 204, 219, 55, 
111, 207, 3, 24, 24, 0, 24, 24, 24, 24, 0, 0, 51, 102, 204, 102, 51, 0, 0, 0, 
204, 102, 51, 102, 204, 0, 0, 34, 136, 34, 136, 34, 136, 34, 136, 85, 170, 85, 170, 85, 
170, 85, 170, 219, 119, 219, 238, 219, 119, 219, 238, 24, 24, 24, 24, 24, 24, 24, 24, 24, 
24, 24, 24, 248, 24, 24, 24, 24, 24, 248, 24, 248, 24, 24, 24, 54, 54, 54, 54, 246, 
54, 54, 54, 0, 0, 0, 0, 254, 54, 54, 54, 0, 0, 248, 24, 248, 24, 24, 24, 54, 
54, 246, 6, 246, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 0, 0, 254, 6, 246, 
54, 54, 54, 54, 54, 246, 6, 254, 0, 0, 0, 54, 54, 54, 54, 254, 0, 0, 0, 24, 
24, 248, 24, 248, 0, 0, 0, 0, 0, 0, 0, 248, 24, 24, 24, 24, 24, 24, 24, 31, 
0, 0, 0, 24, 24, 24, 24, 255, 0, 0, 0, 0, 0, 0, 0, 255, 24, 24, 24, 24, 
24, 24, 24, 31, 24, 24, 24, 0, 0, 0, 0, 255, 0, 0, 0, 24, 24, 24, 24, 255, 
24, 24, 24, 24, 24, 31, 24, 31, 24, 24, 24, 54, 54, 54, 54, 55, 54, 54, 54, 54, 
54, 55, 48, 63, 0, 0, 0, 0, 0, 63, 48, 55, 54, 54, 54, 54, 54, 247, 0, 255, 
0, 0, 0, 0, 0, 255, 0, 247, 54, 54, 54, 54, 54, 55, 48, 55, 54, 54, 54, 0, 
0, 255, 0, 255, 0, 0, 0, 54, 54, 247, 0, 247, 54, 54, 54, 24, 24, 255, 0, 255, 
0, 0, 0, 54, 54, 54, 54, 255, 0, 0, 0, 0, 0, 255, 0, 255, 24, 24, 24, 0,
0, 0, 0, 255, 54, 54, 54, 54, 54, 54, 54, 63, 0, 0, 0, 24, 24, 31, 24, 31,
0, 0, 0, 0, 0, 31, 24, 31, 24, 24, 24, 0, 0, 0, 0, 63, 54, 54, 54, 54,
54, 54, 54, 255, 54, 54, 54, 24, 24, 255, 24, 255, 24, 24, 24, 24, 24, 24, 24, 248,
0, 0, 0, 0, 0, 0, 0, 31, 24, 24, 24, 255, 255, 255, 255, 255, 255, 255, 255, 0,
0, 0, 0, 255, 255, 255, 255, 240, 240, 240, 240, 240, 240, 240, 240, 15, 15, 15, 15, 15,
15, 15, 15, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 118, 220, 200, 220, 118, 0, 0,
120, 204, 248, 204, 248, 192, 192, 0, 252, 204, 192, 192, 192, 192, 0, 0, 254, 108, 108, 108,
108, 108, 0, 252, 204, 96, 48, 96, 204, 252, 0, 0, 0, 126, 216, 216, 216, 112, 0, 0,
102, 102, 102, 102, 124, 96, 192, 0, 118, 220, 24, 24, 24, 24, 0, 252, 48, 120, 204, 204,
120, 48, 252, 56, 108, 198, 254, 198, 108, 56, 0, 56, 108, 198, 198, 108, 108, 238, 0, 28,
48, 24, 124, 204, 204, 120, 0, 0, 0, 126, 219, 219, 126, 0, 0, 6, 12, 126, 219, 219,
126, 96, 192, 56, 96, 192, 248, 192, 96, 56, 0, 120, 204, 204, 204, 204, 204, 204, 0, 0,
252, 0, 252, 0, 252, 0, 0, 48, 48, 252, 48, 48, 0, 252, 0, 96, 48, 24, 48, 96,
0, 252, 0, 24, 48, 96, 48, 24, 0, 252, 0, 14, 27, 27, 24, 24, 24, 24, 24, 24,
24, 24, 24, 24, 216, 216, 112, 48, 48, 0, 252, 0, 48, 48, 0, 0, 118, 220, 0, 118,
220, 0, 0, 56, 108, 108, 56, 0, 0, 0, 0, 0, 0, 0, 24, 24, 0, 0, 0, 0,
0, 0, 0, 24, 0, 0, 0, 15, 12, 12, 12, 236, 108, 60, 28, 120, 108, 108, 108, 108,
0, 0, 0, 112, 24, 48, 96, 120, 0, 0, 0, 0, 0, 60, 60, 60, 60, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0
};

int FontOffsetUC[58][2] = {
{5, 0},
{7, 5},
{13, 12},
{7, 25},
{9, 32},
{8, 41},
{5, 49},
{5, 54},
{5, 59},
{9, 64},
{7, 73},
{4, 80},
{6, 84},
{5, 90},
{7, 95},
{8, 102},
{6, 110},
{8, 116},
{7, 124},
{9, 131},
{8, 140},
{7, 148},
{7, 155},
{7, 162},
{8, 169},
{5, 177},
{5, 182},
{8, 187},
{8, 195},
{8, 203},
{7, 211},
{14, 218},
{8, 232},
{7, 240},
{8, 247},
{8, 255},
{7, 263},
{7, 270},
{8, 277},
{7, 285},
{5, 292},
{7, 297},
{8, 304},
{6, 312},
{11, 318},
{8, 329},
{8, 337},
{7, 345},
{8, 352},
{7, 360},
{8, 367},
{8, 375},
{8, 383},
{8, 391},
{11, 399},
{9, 410},
{9, 419},
{8, 428}
};


int FontOffsetLC[26][2] = {
{7, 0},
{7, 7},
{7, 14},
{7, 21},
{7, 28},
{7, 35},
{7, 42},
{7, 49},
{5, 56},
{6, 61},
{8, 67},
{5, 75},
{10, 80},
{8, 90},
{7, 98},
{7, 105},
{7, 112},
{8, 119},
{7, 127},
{7, 134},
{7, 141},
{8, 148},
{11, 156},
{8, 167},
{8, 175},
{7, 183}
};


int SmallFontOffsetUC[58][2] = {
{4, 0},
{5, 4},
{11, 9},
{5, 20},
{9, 25},
{6, 34},
{4, 40},
{5, 44},
{5, 49},
{7, 54},
{5, 61},
{4, 66},
{5, 70},
{3, 75},
{6, 78},
{6, 84},
{5, 90},
{6, 95},
{6, 101},
{7, 107},
{6, 114},
{6, 120},
{6, 126},
{5, 132},
{5, 137},
{3, 142},
{3, 145},
{7, 148},
{5, 155},
{7, 160},
{6, 167},
{11, 173},
{7, 184},
{6, 191},
{6, 197},
{6, 203},
{5, 209},
{5, 214},
{6, 219},
{6, 225},
{3, 231},
{5, 234},
{6, 239},
{5, 245},
{7, 250},
{7, 257},
{6, 264},
{6, 270},
{6, 276},
{6, 282},
{6, 288},
{6, 294},
{6, 300},
{7, 306},
{8, 313},
{6, 321},
{6, 327},
{5, 333},
};


int SmallFontOffsetLC[26][2] = {
{6, 0},
{6, 6},
{6, 12},
{6, 18},
{6, 24},
{5, 30},
{6, 35},
{6, 41},
{4, 47},
{4, 51},
{6, 55},
{3, 61},
{8, 64},
{6, 72},
{6, 78},
{6, 84},
{6, 90},
{6, 96},
{6, 102},
{5, 108},
{6, 113},
{6, 119},
{8, 125},
{5, 133},
{6, 138},
{6, 144}
};
