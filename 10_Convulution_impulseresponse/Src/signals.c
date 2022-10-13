#ifndef __SIGNALS_H__
#define __SIGNALS_H__
#include "arm_math.h"

#include "signals.h"

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
+0.0000000000f, -0.5924659585f, +0.0947343455f, -0.1913417162f, -1.0000000000f, -0.4174197128f, -0.3535533906f, -1.2552931065f,
};

#endif