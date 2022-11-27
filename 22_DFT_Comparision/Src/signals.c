#ifndef __SIGNALS_H__
#define __SIGNALS_H__
#include "arm_math.h"

#include "signals.h"

float32_t lpf_70hz_impulse_responce[LPF_70HZ_IMP_RESP_LEN]=
{
-0.0003602,-0.00041027,-0.00046833,-0.00053622,-0.00061507,-0.00070524,-0.00080619,-0.00091636,-0.0010331,-0.0011528,-0.0012706,-0.0013806,-0.001476,-0.001549,-0.001591,-0.0015928,-0.0015449,-0.0014374,-0.0012604,-0.0010045,-0.0006605,-0.0002201,0.000324,0.00097787,0.0017461,0.0026317,0.0036356,0.004757,0.0059928,0.0073379,0.008785,0.010325,0.011945,0.013633,0.015372,0.017147,0.018939,0.020728,0.022494,0.024217,0.025875,0.027449,0.028919,0.030266,0.031472,0.032521,0.033399,0.034096,0.0346,0.034905,0.035007,0.034905,0.0346,0.034096,0.033399,0.032521,0.031472,0.030266,0.028919,0.027449,0.025875,0.024217,0.022494,0.020728,0.018939,0.017147,0.015372,0.013633,0.011945,0.010325,0.008785,0.0073379,0.0059928,0.004757,0.0036356,0.0026317,0.0017461,0.00097787,0.000324,-0.0002201,-0.0006605,-0.0010045,-0.0012604,-0.0014374,-0.0015449,-0.0015928,-0.001591,-0.001549,-0.001476,-0.0013806,-0.0012706,-0.0011528,-0.0010331,-0.00091636,-0.00080619,-0.00070524,-0.00061507,-0.00053622,-0.00046833,-0.00041027,-0.0003602


};

float32_t hpf_400hz_impulse_responce[HPF_400HZ_IMP_RESP_LEN]=
{
1.1241e-18,0.00030898,0.00052751,0.00056786,0.00038423,6.2083e-19,-0.00047762,-0.00087158,-0.00098691,-0.00069196,-5.2354e-18,0.00089037,0.0016308,0.0018421,0.0012828,1.7122e-17,-0.0016155,-0.0029213,-0.0032562,-0.0022375,-4.2409e-17,0.0027463,0.0049073,0.0054091,0.0036786,-7.5878e-18,-0.0044356,-0.0078677,-0.0086182,-0.0058313,-2.1277e-17,0.0069862,0.012378,0.013565,0.0091983,8.6382e-17,-0.011137,-0.019911,-0.022086,-0.015216,-2.845e-17,0.019303,0.035694,0.041361,0.030181,3.0488e-17,-0.046106,-0.1001,-0.15084,-0.18696,0.80013,-0.18696,-0.15084,-0.1001,-0.046106,3.0488e-17,0.030181,0.041361,0.035694,0.019303,-2.845e-17,-0.015216,-0.022086,-0.019911,-0.011137,8.6382e-17,0.0091983,0.013565,0.012378,0.0069862,-2.1277e-17,-0.0058313,-0.0086182,-0.0078677,-0.0044356,-7.5878e-18,0.0036786,0.0054091,0.0049073,0.0027463,-4.2409e-17,-0.0022375,-0.0032562,-0.0029213,-0.0016155,1.7122e-17,0.0012828,0.0018421,0.0016308,0.00089037,-5.2354e-18,-0.00069196,-0.00098691,-0.00087158,-0.00047762,6.2083e-19,0.00038423,0.00056786,0.00052751,0.00030898,1.1241e-18

};

float32_t _10Hz_100Hz_500Hz_signal[_10HZ_100HZ_500HZ_SIG_LEN]=
{
 0,1.3404,0.65058,-0.096875,1.0764,2.1564,1.1384,0.02716,0.83648,1.588,0.30902,-0.97028,-0.21966,0.58813,-0.52528,-1.546,-0.4693,0.70002,-0.051958,-0.74693,0.58779,1.9219,1.2252,0.47033,1.6356,2.7071,1.68,0.55913,1.3583,2.0992,0.80902,-0.48194,0.25654,1.0517,-0.07475,-1.109,-0.046229,1.1087,0.34199,-0.36814,0.95106,2.2693,1.5564,0.78493,1.9333,2.9877,1.9432,0.80458,1.5858,2.3085,1,-0.30951,0.41024,1.1865,0.041058,-1.0123,0.031231,1.1669,0.3808,-0.34872,0.95106,2.2499,1.5176,0.72677,1.8559,2.891,1.8274,0.66976,1.4321,2.1361,0.80902,-0.51886,0.18273,0.94109,-0.22209,-1.2929,-0.26651,0.85229,0.049639,-0.69611,0.58779,1.8711,1.1236,0.31806,1.4328,2.454,1.3768,0.20616,0.95591,1.6478,0.30902,-1.03,-0.3391,0.40913,-0.76368,-1.8436,-0.82572,0.28509,-0.52499,-1.2776,-1.1999e-16,1.2776,0.52499,-0.28509,0.82572,1.8436,0.76368,-0.40913,0.3391,1.03,-0.30902,-1.6478,-0.95591,-0.20616,-1.3768,-2.454,-1.4328,-0.31806,-1.1236,-1.8711,-0.58779,0.69611,-0.049639,-0.85229,0.26651,1.2929,0.22209,-0.94109,-0.18273,0.51886,-0.80902,-2.1361,-1.4321,-0.66976,-1.8274,-2.891,-1.8559,-0.72677,-1.5176,-2.2499,-0.95106,0.34872,-0.3808,-1.1669,-0.031231,1.0123,-0.041058,-1.1865,-0.41024,0.30951,-1,-2.3085,-1.5858,-0.80458,-1.9432,-2.9877,-1.9333,-0.78493,-1.5564,-2.2693,-0.95106,0.36814,-0.34199,-1.1087,0.046229,1.109,0.07475,-1.0517,-0.25654,0.48194,-0.80902,-2.0992,-1.3583,-0.55913,-1.68,-2.7071,-1.6356,-0.47033,-1.2252,-1.9219,-0.58779,0.74693,0.051958,-0.70002,0.4693,1.546,0.52528,-0.58813,0.21966,0.97028,-0.30902,-1.588,-0.83648,-0.02716,-1.1384,-2.1564,-1.0764,0.096875,-0.65058,-1.3404,-7.2984e-16,1.3404,0.65058,-0.096875,1.0764,2.1564,1.1384,0.02716,0.83648,1.588,0.30902,-0.97028,-0.21966,0.58813,-0.52528,-1.546,-0.4693,0.70002,-0.051958,-0.74693,0.58779,1.9219,1.2252,0.47033,1.6356,2.7071,1.68,0.55913,1.3583,2.0992,0.80902,-0.48194,0.25654,1.0517,-0.07475,-1.109,-0.046229,1.1087,0.34199,-0.36814,0.95106,2.2693,1.5564,0.78493,1.9333,2.9877,1.9432,0.80458,1.5858,2.3085,1,-0.30951,0.41024,1.1865,0.041058,-1.0123,0.031231,1.1669,0.3808,-0.34872,0.95106,2.2499,1.5176,0.72677,1.8559,2.891,1.8274,0.66976,1.4321,2.1361,0.80902,-0.51886,0.18273,0.94109,-0.22209,-1.2929,-0.26651,0.85229,0.049639,-0.69611,0.58779,1.8711,1.1236,0.31806,1.4328,2.454,1.3768,0.20616,0.95591,1.6478,0.30902,-1.03,-0.3391,0.40913,-0.76368,-1.8436,-0.82572,0.28509,-0.52499,-1.2776,-3.5887e-14,1.2776,0.52499,-0.28509,0.82572,1.8436,0.76368,-0.40913,0.3391,1.03,-0.30902,-1.6478,-0.95591,-0.20616,-1.3768,-2.454,-1.4328,-0.31806,-1.1236,-1.8711,-0.58779,0.69611,-0.049639,-0.85229,0.26651,1.2929,0.22209,-0.94109,-0.18273,0.51886,-0.80902,-2.1361,-1.4321,-0.66976,-1.8274,-2.891,-1.8559,-0.72677,-1.5176,-2.2499,-0.95106,0.34872,-0.3808,-1.1669,-0.031231,1.0123,-0.041058,-1.1865,-0.41024,0.30951,-1,-2.3085,-1.5858,-0.80458,-1.9432,-2.9877,-1.9333,-0.78493,-1.5564,-2.2693,-0.95106,0.36814,-0.34199,-1.1087,0.046229,1.109,0.07475,-1.0517,-0.25654,0.48194,-0.80902,-2.0992,-1.3583,-0.55913,-1.68,-2.7071,-1.6356,-0.47033,-1.2252,-1.9219,-0.58779,0.74693,0.051958,-0.70002,0.4693,1.546,0.52528,-0.58813,0.21966,0.97028,-0.30902,-1.588,-0.83648,-0.02716,-1.1384,-2.1564,-1.0764,0.096875,-0.65058,-1.3404,-1.4597e-15,1.3404,0.65058,-0.096875,1.0764,2.1564,1.1384,0.02716,0.83648,1.588,0.30902,-0.97028,-0.21966,0.58813,-0.52528,-1.546,-0.4693,0.70002,-0.051958,-0.74693,0.58779,1.9219,1.2252,0.47033,1.6356,2.7071,1.68,0.55913,1.3583,2.0992,0.80902,-0.48194,0.25654,1.0517,-0.07475,-1.109,-0.046229,1.1087,0.34199,-0.36814,0.95106,2.2693,1.5564,0.78493,1.9333,2.9877,1.9432,0.80458,1.5858,2.3085,1,-0.30951,0.41024,1.1865,0.041058,-1.0123,0.031231,1.1669,0.3808,-0.34872,0.95106,2.2499,1.5176,0.72677,1.8559,2.891,1.8274,0.66976,1.4321,2.1361,0.80902,-0.51886,0.18273,0.94109,-0.22209,-1.2929,-0.26651,0.85229,0.049639,-0.69611,0.58779,1.8711,1.1236,0.31806,1.4328,2.454,1.3768,0.20616,0.95591,1.6478,0.30902,-1.03,-0.3391,0.40913,-0.76368,-1.8436,-0.82572,0.28509,-0.52499,-1.2776,-7.876e-14,1.2776,0.52499,-0.28509,0.82572,1.8436,0.76368,-0.40913,0.3391,1.03,-0.30902,-1.6478,-0.95591,-0.20616,-1.3768,-2.454,-1.4328,-0.31806,-1.1236,-1.8711,-0.58779,0.69611,-0.049639,-0.85229,0.26651,1.2929,0.22209,-0.94109,-0.18273,0.51886,-0.80902,-2.1361,-1.4321,-0.66976,-1.8274,-2.891,-1.8559,-0.72677,-1.5176,-2.2499,-0.95106,0.34872,-0.3808,-1.1669,-0.031231,1.0123,-0.041058,-1.1865,-0.41024,0.30951,-1,-2.3085,-1.5858,-0.80458,-1.9432,-2.9877,-1.9333,-0.78493,-1.5564,-2.2693,-0.95106,0.36814,-0.34199,-1.1087,0.046229,1.109,0.07475,-1.0517,-0.25654,0.48194,-0.80902,-2.0992,-1.3583,-0.55913,-1.68,-2.7071,-1.6356,-0.47033,-1.2252,-1.9219,-0.58779,0.74693,0.051958,-0.70002,0.4693,1.546,0.52528,-0.58813,0.21966,0.97028,-0.30902,-1.588,-0.83648,-0.02716,-1.1384,-2.1564,-1.0764,0.096875,-0.65058,-1.3404,-7.3244e-14,1.3404,0.65058,-0.096875,1.0764,2.1564,1.1384,0.02716,0.83648,1.588,0.30902,-0.97028,-0.21966,0.58813,-0.52528,-1.546,-0.4693,0.70002,-0.051958,-0.74693,0.58779,1.9219,1.2252,0.47033,1.6356,2.7071,1.68,0.55913,1.3583,2.0992,0.80902,-0.48194,0.25654,1.0517,-0.07475,-1.109,-0.046229,1.1087,0.34199,-0.36814,0.95106,2.2693,1.5564,0.78493,1.9333,2.9877,1.9432,0.80458,1.5858,2.3085,1,-0.30951,0.41024,1.1865,0.041058,-1.0123,0.031231,1.1669,0.3808,-0.34872,0.95106,2.2499,1.5176,0.72677,1.8559,2.891,1.8274,0.66976,1.4321,2.1361,0.80902,-0.51886,0.18273,0.94109,-0.22209,-1.2929,-0.26651,0.85229,0.049639,-0.69611,0.58779,1.8711,1.1236,0.31806,1.4328,2.454,1.3768,0.20616,0.95591,1.6478,0.30902,-1.03,-0.3391,0.40913,-0.76368,-1.8436,-0.82572,0.28509,-0.52499,-1.2776,-1.5005e-13,1.2776,0.52499,-0.28509,0.82572,1.8436,0.76368,-0.40913,0.3391,1.03,-0.30902,-1.6478,-0.95591,-0.20616,-1.3768,-2.454,-1.4328,-0.31806,-1.1236,-1.8711,-0.58779,0.69611,-0.049639,-0.85229,0.26651,1.2929,0.22209,-0.94109,-0.18273,0.51886,-0.80902,-2.1361,-1.4321,-0.66976,-1.8274,-2.891,-1.8559,-0.72677,-1.5176,-2.2499,-0.95106,0.34872,-0.3808,-1.1669,-0.031231,1.0123,-0.041058,-1.1865,-0.41024,0.30951,-1,-2.3085,-1.5858,-0.80458,-1.9432,-2.9877,-1.9333,-0.78493,-1.5564,-2.2693,-0.95106,0.36814,-0.34199,-1.1087,0.046229,1.109,0.07475,-1.0517,-0.25654,0.48194,-0.80902,-2.0992,-1.3583,-0.55913,-1.68,-2.7071,-1.6356,-0.47033,-1.2252,-1.9219,-0.58779,0.74693,0.051958,-0.70002,0.4693,1.546,0.52528,-0.58813,0.21966,0.97028,-0.30902,-1.588,-0.83648,-0.02716,-1.1384,-2.1564,-1.0764,0.096875,-0.65058,-1.3404,-2.9193e-15,1.3404,0.65058,-0.096875,1.0764,2.1564,1.1384,0.02716,0.83648,1.588,0.30902,-0.97028,-0.21966,0.58813,-0.52528,-1.546,-0.4693,0.70002,-0.051958,-0.74693,0.58779,1.9219,1.2252,0.47033,1.6356,2.7071,1.68,0.55913,1.3583,2.0992,0.80902,-0.48194,0.25654,1.0517,-0.07475,-1.109,-0.046229,1.1087,0.34199,-0.36814,0.95106,2.2693,1.5564,0.78493,1.9333,2.9877,1.9432,0.80458,1.5858,2.3085,1,-0.30951,0.41024,1.1865,0.041058,-1.0123,0.031231,1.1669,0.3808,-0.34872,0.95106,2.2499,1.5176,0.72677,1.8559,2.891,1.8274,0.66976,1.4321,2.1361,0.80902,-0.51886,0.18273,0.94109,-0.22209,-1.2929,-0.26651,0.85229,0.049639,-0.69611,0.58779,1.8711,1.1236,0.31806,1.4328,2.454,1.3768,0.20616,0.95591,1.6478,0.30902,-1.03,-0.3391,0.40913,-0.76368,-1.8436,-0.82572,0.28509,-0.52499,-1.2776,-7.924e-14,1.2776,0.52499,-0.28509,0.82572,1.8436,0.76368,-0.40913,0.3391,1.03,-0.30902,-1.6478,-0.95591,-0.20616,-1.3768,-2.454,-1.4328,-0.31806,-1.1236,-1.8711,-0.58779,0.69611,-0.049639,-0.85229,0.26651,1.2929,0.22209,-0.94109,-0.18273,0.51886,-0.80902,-2.1361,-1.4321,-0.66976,-1.8274,-2.891,-1.8559,-0.72677,-1.5176,-2.2499,-0.95106,0.34872,-0.3808,-1.1669,-0.031231,1.0123,-0.041058,-1.1865,-0.41024,0.30951,-1,-2.3085,-1.5858,-0.80458,-1.9432,-2.9877,-1.9333,-0.78493,-1.5564,-2.2693,-0.95106,0.36814,-0.34199,-1.1087,0.046229,1.109,0.07475,-1.0517,-0.25654,0.48194,-0.80902,-2.0992,-1.3583,-0.55913,-1.68,-2.7071,-1.6356,-0.47033,-1.2252,-1.9219,-0.58779,0.74693,0.051958,-0.70002,0.4693,1.546,0.52528,-0.58813,0.21966,0.97028,-0.30902,-1.588,-0.83648,-0.02716,-1.1384,-2.1564,-1.0764,0.096875,-0.65058,-1.3404,-1.5997e-13

};




float32_t _640_points_ecg_[ECG_SIG_LENGHT]=
{0,0.0010593,0.0021186,0.003178,0.0042373,0.0052966,0.0063559,0.0074153,0.0084746,0.045198,
0.081921,0.11864,0.15537,0.19209,0.22881,0.26554,0.30226,0.33898,0.30226,0.26554,0.22881,
0.19209,0.15537,0.11864,0.081921,0.045198,0.0084746,0.0077684,0.0070621,0.0063559,0.0056497,
0.0049435,0.0042373,0.0035311,0.0028249,0.0021186,0.0014124,0.00070621,0,-0.096045,-0.19209,
-0.28814,-0.073446,0.14124,0.35593,0.57062,0.78531,1,0.73729,0.47458,0.21186,-0.050847,-0.31356,
-0.57627,-0.83898,-0.55932,-0.27966,0,0.00073692,0.0014738,0.0022108,0.0029477,0.0036846,0.0044215,
0.0051584,0.0058954,0.0066323,0.0073692,0.0081061,0.008843,0.00958,0.010317,0.011054,0.011791,0.012528,
0.013265,0.014001,0.014738,0.015475,0.016212,0.016949,0.03484,0.052731,0.070621,0.088512,0.1064,0.12429,
0.14218,0.16008,0.17797,0.16186,0.14576,0.12966,0.11356,0.097458,0.081356,0.065254,0.049153,0.033051,0.016949,
0.013559,0.010169,0.0067797,0.0033898,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0.0010593,0.0021186,
0.003178,0.0042373,0.0052966,0.0063559,0.0074153,0.0084746,0.045198,0.081921,0.11864,0.15537,0.19209,0.22881,
0.26554,0.30226,0.33898,0.30226,0.26554,0.22881,0.19209,0.15537,0.11864,0.081921,0.045198,0.0084746,0.0077684,
0.0070621,0.0063559,0.0056497,0.0049435,0.0042373,0.0035311,0.0028249,0.0021186,0.0014124,0.00070621,0,-0.096045,
-0.19209,-0.28814,-0.073446,0.14124,0.35593,0.57062,0.78531,1,0.73729,0.47458,0.21186,-0.050847,-0.31356,-0.57627,
-0.83898,-0.55932,-0.27966,0,0.00073692,0.0014738,0.0022108,0.0029477,0.0036846,0.0044215,0.0051584,0.0058954,
0.0066323,0.0073692,0.0081061,0.008843,0.00958,0.010317,0.011054,0.011791,0.012528,0.013265,0.014001,0.014738,
0.015475,0.016212,0.016949,0.03484,0.052731,0.070621,0.088512,0.1064,0.12429,0.14218,0.16008,0.17797,0.16186,
0.14576,0.12966,0.11356,0.097458,0.081356,0.065254,0.049153,0.033051,0.016949,0.013559,0.010169,0.0067797,
0.0033898,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0.0010593,0.0021186,0.003178,0.0042373,0.0052966,
0.0063559,0.0074153,0.0084746,0.045198,0.081921,0.11864,0.15537,0.19209,0.22881,0.26554,0.30226,0.33898,
0.30226,0.26554,0.22881,0.19209,0.15537,0.11864,0.081921,0.045198,0.0084746,0.0077684,0.0070621,0.0063559,
0.0056497,0.0049435,0.0042373,0.0035311,0.0028249,0.0021186,0.0014124,0.00070621,0,-0.096045,-0.19209,
-0.28814,-0.073446,0.14124,0.35593,0.57062,0.78531,1,0.73729,0.47458,0.21186,-0.050847,-0.31356,
-0.57627,-0.83898,-0.55932,-0.27966,0,0.00073692,0.0014738,0.0022108,0.0029477,0.0036846,
0.0044215,0.0051584,0.0058954,0.0066323,0.0073692,0.0081061,0.008843,0.00958,0.010317,
0.011054,0.011791,0.012528,0.013265,0.014001,0.014738,0.015475,0.016212,0.016949,0.03484,
0.052731,0.070621,0.088512,0.1064,0.12429,0.14218,0.16008,0.17797,0.16186,0.14576,0.12966,
0.11356,0.097458,0.081356,0.065254,0.049153,0.033051,0.016949,0.013559,0.010169,0.0067797,
0.0033898,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0.0010593,0.0021186,0.003178,
0.0042373,0.0052966,0.0063559,0.0074153,0.0084746,0.045198,0.081921,0.11864,0.15537,0.19209,
0.22881,0.26554,0.30226,0.33898,0.30226,0.26554,0.22881,0.19209,0.15537,0.11864,0.081921,
0.045198,0.0084746,0.0077684,0.0070621,0.0063559,0.0056497,0.0049435,0.0042373,0.0035311,
0.0028249,0.0021186,0.0014124,0.00070621,0,-0.096045,-0.19209,-0.28814,-0.073446,0.14124,
0.35593,0.57062,0.78531,1,0.73729,0.47458,0.21186,-0.050847,-0.31356,-0.57627,-0.83898,-0.55932,
-0.27966,0,0.00073692,0.0014738,0.0022108,0.0029477,0.0036846,0.0044215,0.0051584,0.0058954,
0.0066323,0.0073692,0.0081061,0.008843,0.00958,0.010317,0.011054,0.011791,0.012528,0.013265,
0.014001,0.014738,0.015475,0.016212,0.016949,0.03484,0.052731,0.070621,0.088512,0.1064,0.12429,
0.14218,0.16008,0.17797,0.16186,0.14576,0.12966,0.11356,0.097458,0.081356,0.065254,0.049153,0.033051,
0.016949,0.013559,0.010169,0.0067797,0.0033898,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0.0010593,
0.0021186,0.003178,0.0042373,0.0052966,0.0063559,0.0074153,0.0084746,0.045198,0.081921,0.11864,0.15537,0.19209,
0.22881,0.26554,0.30226,0.33898,0.30226,0.26554,0.22881,0.19209,0.15537,0.11864,0.081921,0.045198,0.0084746,
0.0077684,0.0070621,0.0063559,0.0056497,0.0049435,0.0042373,0.0035311,0.0028249,0.0021186,0.0014124,0.00070621,
0,-0.096045,-0.19209,-0.28814,-0.073446,0.14124,0.35593,0.57062,0.78531,1,0.73729,0.47458,0.21186,-0.050847,
-0.31356,-0.57627,-0.83898,-0.55932,-0.27966,0,0.00073692,0.0014738,0.0022108,0.0029477,0.0036846,0.0044215,
0.0051584,0.0058954,0.0066323,0.0073692,0.0081061,0.008843,0.00958,0.010317,0.011054,0.011791,0.012528,0.013265,
0.014001,0.014738,0.015475,0.016212,0.016949,0.03484,0.052731,0.070621,0.088512,0.1064,0.12429,0.14218,0.16008,
0.17797,0.16186,0.14576,0.12966,0.11356,0.097458,0.081356,0.065254,0.049153,0.033051,0.016949,0.013559,0.010169,
0.0067797,0.0033898,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};


/*Kernal lowpass filter with cutoff frequency of 6KH*/
float32_t  impulse_response[IMP_RSP_LENGTH] = {
  -0.0018225230f, -0.0015879294f, +0.0000000000f, +0.0036977508f, +0.0080754303f, +0.0085302217f, -0.0000000000f, -0.0173976984f,
  -0.0341458607f, -0.0333591565f, +0.0000000000f, +0.0676308395f, +0.1522061835f, +0.2229246956f, +0.2504960933f, +0.2229246956f,
  +0.1522061835f, +0.0676308395f, +0.0000000000f, -0.0333591565f, -0.0341458607f, -0.0173976984f, -0.0000000000f, +0.0085302217f,
  +0.0080754303f, +0.0036977508f, +0.0000000000f, -0.0015879294f, -0.0018225230f
};

float _5hz_signal[HZ_5_SIG_LEN]=
{
	0,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,1.2246e-16,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,-2.4493e-16,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,3.6739e-16,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,-4.8986e-16,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,6.1232e-16,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,-7.3479e-16,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,-2.6955e-15,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,-9.7972e-16,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,1.1022e-15,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,-1.2246e-15,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,-2.2056e-15,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,-1.4696e-15,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,-1.9607e-15,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,5.3909e-15,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,5.3897e-15,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,-9.0649e-15,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,5.6346e-15,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,-2.2044e-15,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,5.8795e-15,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,-2.4493e-15,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,-9.8096e-16,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,4.4112e-15,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,6.3694e-15,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,-2.9392e-15,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,-4.911e-16,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,3.9213e-15,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,-7.3516e-15,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,-3.429e-15,0.30902,0.58779,0.80902,0.95106,1,0.95106,0.80902,0.58779,0.30902,-1.238e-18,-0.30902,-0.58779,-0.80902,-0.95106,-1,-0.95106,-0.80902,-0.58779,-0.30902,-1.0779e-14

};
float32_t input_signal_f32_1kHz_15kHz[KHZ1_15_SIG_LEN] =
{
+0.0000000000f, +0.5924659585f, -0.0947343455f, +0.1913417162f, +1.0000000000f, +0.4174197128f, +0.3535533906f, +1.2552931065f,
+0.8660254038f, +0.4619397663f, +1.3194792169f, +1.1827865776f, +0.5000000000f, +1.1827865776f, +1.3194792169f, +0.4619397663f,
+0.8660254038f, +1.2552931065f, +0.3535533906f, +0.4174197128f, +1.0000000000f, +0.1913417162f, -0.0947343455f, +0.5924659585f,
-0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f, -1.2552931065f,
-0.8660254038f, -0.4619397663f, -1.3194792169f, -1.1827865776f, -0.5000000000f, -1.1827865776f, -1.3194792169f, -0.4619397663f,
-0.8660254038f, -1.2552931065f, -0.3535533906f, -0.4174197128f, -1.0000000000f, -0.1913417162f, +0.0947343455f, -0.5924659585f,
+0.0000000000f, +0.5924659585f, -0.0947343455f, +0.1913417162f, +1.0000000000f, +0.4174197128f, +0.3535533906f, +1.2552931065f,
+0.8660254038f, +0.4619397663f, +1.3194792169f, +1.1827865776f, +0.5000000000f, +1.1827865776f, +1.3194792169f, +0.4619397663f,
+0.8660254038f, +1.2552931065f, +0.3535533906f, +0.4174197128f, +1.0000000000f, +0.1913417162f, -0.0947343455f, +0.5924659585f,
+0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f, -1.2552931065f,
-0.8660254038f, -0.4619397663f, -1.3194792169f, -1.1827865776f, -0.5000000000f, -1.1827865776f, -1.3194792169f, -0.4619397663f,
-0.8660254038f, -1.2552931065f, -0.3535533906f, -0.4174197128f, -1.0000000000f, -0.1913417162f, +0.0947343455f, -0.5924659585f,
+0.0000000000f, +0.5924659585f, -0.0947343455f, +0.1913417162f, +1.0000000000f, +0.4174197128f, +0.3535533906f, +1.2552931065f,
+0.8660254038f, +0.4619397663f, +1.3194792169f, +1.1827865776f, +0.5000000000f, +1.1827865776f, +1.3194792169f, +0.4619397663f,
+0.8660254038f, +1.2552931065f, +0.3535533906f, +0.4174197128f, +1.0000000000f, +0.1913417162f, -0.0947343455f, +0.5924659585f,
+0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f, -1.2552931065f,
-0.8660254038f, -0.4619397663f, -1.3194792169f, -1.1827865776f, -0.5000000000f, -1.1827865776f, -1.3194792169f, -0.4619397663f,
-0.8660254038f, -1.2552931065f, -0.3535533906f, -0.4174197128f, -1.0000000000f, -0.1913417162f, +0.0947343455f, -0.5924659585f,
-0.0000000000f, +0.5924659585f, -0.0947343455f, +0.1913417162f, +1.0000000000f, +0.4174197128f, +0.3535533906f, +1.2552931065f,
+0.8660254038f, +0.4619397663f, +1.3194792169f, +1.1827865776f, +0.5000000000f, +1.1827865776f, +1.3194792169f, +0.4619397663f,
+0.8660254038f, +1.2552931065f, +0.3535533906f, +0.4174197128f, +1.0000000000f, +0.1913417162f, -0.0947343455f, +0.5924659585f,
-0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f, -1.2552931065f,
-0.8660254038f, -0.4619397663f, -1.3194792169f, -1.1827865776f, -0.5000000000f, -1.1827865776f, -1.3194792169f, -0.4619397663f,
-0.8660254038f, -1.2552931065f, -0.3535533906f, -0.4174197128f, -1.0000000000f, -0.1913417162f, +0.0947343455f, -0.5924659585f,
+0.0000000000f, +0.5924659585f, -0.0947343455f, +0.1913417162f, +1.0000000000f, +0.4174197128f, +0.3535533906f, +1.2552931065f,
+0.8660254038f, +0.4619397663f, +1.3194792169f, +1.1827865776f, +0.5000000000f, +1.1827865776f, +1.3194792169f, +0.4619397663f,
+0.8660254038f, +1.2552931065f, +0.3535533906f, +0.4174197128f, +1.0000000000f, +0.1913417162f, -0.0947343455f, +0.5924659585f,
+0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f, -1.2552931065f,
-0.8660254038f, -0.4619397663f, -1.3194792169f, -1.1827865776f, -0.5000000000f, -1.1827865776f, -1.3194792169f, -0.4619397663f,
-0.8660254038f, -1.2552931065f, -0.3535533906f, -0.4174197128f, -1.0000000000f, -0.1913417162f, +0.0947343455f, -0.5924659585f,
-0.0000000000f, +0.5924659585f, -0.0947343455f, +0.1913417162f, +1.0000000000f, +0.4174197128f, +0.3535533906f, +1.2552931065f,
+0.8660254038f, +0.4619397663f, +1.3194792169f, +1.1827865776f, +0.5000000000f, +1.1827865776f, +1.3194792169f, +0.4619397663f,
+0.8660254038f, +1.2552931065f, +0.3535533906f, +0.4174197128f, +1.0000000000f, +0.1913417162f, -0.0947343455f, +0.5924659585f,
+0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f, -1.2552931065f,
-0.8660254038f, -0.4619397663f, -1.3194792169f, -1.1827865776f, -0.5000000000f, -1.1827865776f, -1.3194792169f, -0.4619397663f,
-0.8660254038f, -1.2552931065f, -0.3535533906f, -0.4174197128f, -1.0000000000f, -0.1913417162f, +0.0947343455f, -0.5924659585f,
-0.0000000000f, +0.5924659585f, -0.0947343455f, +0.1913417162f, +1.0000000000f, +0.4174197128f, +0.3535533906f, +1.2552931065f,
+0.8660254038f, +0.4619397663f, +1.3194792169f, +1.1827865776f, +0.5000000000f, +1.1827865776f, +1.3194792169f, +0.4619397663f,
+0.8660254038f, +1.2552931065f, +0.3535533906f, +0.4174197128f, +1.0000000000f, +0.1913417162f, -0.0947343455f, +0.5924659585f,
+0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f//, -1.2552931065f,
};

#endif
