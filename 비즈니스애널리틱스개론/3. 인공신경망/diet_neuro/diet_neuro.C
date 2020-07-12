/* Insert this code into your C program to fire the C:\Users\ÃÖ±¤»ï\Desktop\diet_neuro\diet_neuro network */
/* This code is designed to be simple and fast for porting to any machine */
/* Therefore all code and weights are inline without looping or data storage */
/*   which might be harder to port between compilers. */
 
#include <math.h>
 
void Fire_diet_neuro(double *inarray, double *outarray)
{
 double netsum;
 double feature2[26];
 
/* inarray[0] is age */
/* inarray[1] is weight */
/* inarray[2] is want_diet */
/* inarray[3] is waist */
/* inarray[4] is bmi */
/* inarray[5] is recent */
/* inarray[6] is otherregion */
/* inarray[7] is company */
/* inarray[8] is worker */
/* inarray[9] is etcwork */
/* inarray[10] is married */
/* inarray[11] is loss_up */
/* outarray[0] is PG01 */
 
if (inarray[0]<0) inarray[0] = 0;
if (inarray[0]>1) inarray[0] = 1;
inarray[0] =  2 * inarray[0] -1;
 
if (inarray[1]<0) inarray[1] = 0;
if (inarray[1]>1) inarray[1] = 1;
inarray[1] =  2 * inarray[1] -1;
 
if (inarray[2]<0) inarray[2] = 0;
if (inarray[2]>1) inarray[2] = 1;
inarray[2] =  2 * inarray[2] -1;
 
if (inarray[3]<0) inarray[3] = 0;
if (inarray[3]>1) inarray[3] = 1;
inarray[3] =  2 * inarray[3] -1;
 
if (inarray[4]<0) inarray[4] = 0;
if (inarray[4]>1) inarray[4] = 1;
inarray[4] =  2 * inarray[4] -1;
 
if (inarray[5]<0) inarray[5] = 0;
if (inarray[5]>1) inarray[5] = 1;
inarray[5] =  2 * inarray[5] -1;
 
if (inarray[6]<0) inarray[6] = 0;
if (inarray[6]>1) inarray[6] = 1;
inarray[6] =  2 * inarray[6] -1;
 
if (inarray[7]<0) inarray[7] = 0;
if (inarray[7]>1) inarray[7] = 1;
inarray[7] =  2 * inarray[7] -1;
 
if (inarray[8]<0) inarray[8] = 0;
if (inarray[8]>1) inarray[8] = 1;
inarray[8] =  2 * inarray[8] -1;
 
if (inarray[9]<0) inarray[9] = 0;
if (inarray[9]>1) inarray[9] = 1;
inarray[9] =  2 * inarray[9] -1;
 
if (inarray[10]<0) inarray[10] = 0;
if (inarray[10]>1) inarray[10] = 1;
inarray[10] =  2 * inarray[10] -1;
 
if (inarray[11]<0) inarray[11] = 0;
if (inarray[11]>1) inarray[11] = 1;
inarray[11] =  2 * inarray[11] -1;
 
netsum = 0.8324342;
netsum += inarray[0] * -1.009404;
netsum += inarray[1] * 8.799966E-02;
netsum += inarray[2] * 0.5036277;
netsum += inarray[3] * -0.5942656;
netsum += inarray[4] * 1.854447;
netsum += inarray[5] * 0.0270042;
netsum += inarray[6] * -0.889159;
netsum += inarray[7] * 0.1235366;
netsum += inarray[8] * -0.9918333;
netsum += inarray[9] * 0.3138816;
netsum += inarray[10] * -1.383764;
netsum += inarray[11] * -0.2634165;
feature2[0] = 1 / (1 + exp(-netsum));
 
netsum = 0.4849023;
netsum += inarray[0] * 0.5333992;
netsum += inarray[1] * 0.6506463;
netsum += inarray[2] * -0.2561222;
netsum += inarray[3] * -0.3378005;
netsum += inarray[4] * -0.4980838;
netsum += inarray[5] * 0.4514987;
netsum += inarray[6] * -0.5573189;
netsum += inarray[7] * 0.2144111;
netsum += inarray[8] * -0.3449552;
netsum += inarray[9] * 0.2047686;
netsum += inarray[10] * -0.3850221;
netsum += inarray[11] * -0.8287823;
feature2[1] = 1 / (1 + exp(-netsum));
 
netsum = -0.2234271;
netsum += inarray[0] * -0.1390942;
netsum += inarray[1] * 0.7828778;
netsum += inarray[2] * -8.312932E-02;
netsum += inarray[3] * 0.1153264;
netsum += inarray[4] * -1.095473;
netsum += inarray[5] * 4.919062E-03;
netsum += inarray[6] * 0.5546731;
netsum += inarray[7] * -0.839888;
netsum += inarray[8] * 0.1531019;
netsum += inarray[9] * 0.7516379;
netsum += inarray[10] * 0.1411174;
netsum += inarray[11] * 0.2492486;
feature2[2] = 1 / (1 + exp(-netsum));
 
netsum = 0.5727242;
netsum += inarray[0] * -5.715838E-02;
netsum += inarray[1] * 0.5346195;
netsum += inarray[2] * -1.06464;
netsum += inarray[3] * 0.4138955;
netsum += inarray[4] * -0.4141825;
netsum += inarray[5] * -0.5839589;
netsum += inarray[6] * 0.9198521;
netsum += inarray[7] * 0.3310749;
netsum += inarray[8] * -0.7664384;
netsum += inarray[9] * -0.192076;
netsum += inarray[10] * -0.8611677;
netsum += inarray[11] * 2.276793E-02;
feature2[3] = 1 / (1 + exp(-netsum));
 
netsum = 0.4905791;
netsum += inarray[0] * -0.5305395;
netsum += inarray[1] * 0.1391639;
netsum += inarray[2] * 7.743853E-02;
netsum += inarray[3] * 0.8037063;
netsum += inarray[4] * -3.929911E-02;
netsum += inarray[5] * -0.4622524;
netsum += inarray[6] * -0.2111205;
netsum += inarray[7] * -0.4191473;
netsum += inarray[8] * -0.5603592;
netsum += inarray[9] * 0.4870619;
netsum += inarray[10] * 0.4682886;
netsum += inarray[11] * -0.5968947;
feature2[4] = 1 / (1 + exp(-netsum));
 
netsum = -0.14504;
netsum += inarray[0] * 0.3290345;
netsum += inarray[1] * -1.130337;
netsum += inarray[2] * 0.773141;
netsum += inarray[3] * -0.8583223;
netsum += inarray[4] * -0.1737937;
netsum += inarray[5] * -0.5142117;
netsum += inarray[6] * -0.8974462;
netsum += inarray[7] * 0.2485329;
netsum += inarray[8] * 0.2836421;
netsum += inarray[9] * 0.1088973;
netsum += inarray[10] * 0.5100356;
netsum += inarray[11] * -0.0700234;
feature2[5] = 1 / (1 + exp(-netsum));
 
netsum = 0.4014792;
netsum += inarray[0] * -3.214488E-04;
netsum += inarray[1] * -0.3209868;
netsum += inarray[2] * 0.3774504;
netsum += inarray[3] * -0.5361587;
netsum += inarray[4] * 0.897836;
netsum += inarray[5] * 0.2097916;
netsum += inarray[6] * 0.1892741;
netsum += inarray[7] * -0.1031997;
netsum += inarray[8] * -0.5654744;
netsum += inarray[9] * -0.1485947;
netsum += inarray[10] * -0.2449291;
netsum += inarray[11] * -0.5070183;
feature2[6] = 1 / (1 + exp(-netsum));
 
netsum = 0.6120967;
netsum += inarray[0] * 0.7227162;
netsum += inarray[1] * -1.792789;
netsum += inarray[2] * -0.6169202;
netsum += inarray[3] * -0.3221763;
netsum += inarray[4] * 1.675468;
netsum += inarray[5] * -0.6463695;
netsum += inarray[6] * -0.9010657;
netsum += inarray[7] * 1.644499;
netsum += inarray[8] * -0.8643335;
netsum += inarray[9] * -0.6715951;
netsum += inarray[10] * 2.100054E-02;
netsum += inarray[11] * -1.269114;
feature2[7] = 1 / (1 + exp(-netsum));
 
netsum = 0.1917884;
netsum += inarray[0] * -9.855594E-02;
netsum += inarray[1] * 0.4144386;
netsum += inarray[2] * -1.798076;
netsum += inarray[3] * 0.3405814;
netsum += inarray[4] * -1.400771;
netsum += inarray[5] * -1.120993;
netsum += inarray[6] * -0.6953164;
netsum += inarray[7] * 0.8762048;
netsum += inarray[8] * 4.305815E-02;
netsum += inarray[9] * -1.242265;
netsum += inarray[10] * -0.8967844;
netsum += inarray[11] * 0.4806531;
feature2[8] = 1 / (1 + exp(-netsum));
 
netsum = 0.6534801;
netsum += inarray[0] * 9.572156E-02;
netsum += inarray[1] * -0.9381526;
netsum += inarray[2] * -0.5185987;
netsum += inarray[3] * -0.3688881;
netsum += inarray[4] * 9.120544E-02;
netsum += inarray[5] * -0.2451064;
netsum += inarray[6] * 3.656542E-02;
netsum += inarray[7] * 0.2078328;
netsum += inarray[8] * -0.2360475;
netsum += inarray[9] * -0.3547889;
netsum += inarray[10] * 0.3024404;
netsum += inarray[11] * -0.7145273;
feature2[9] = 1 / (1 + exp(-netsum));
 
netsum = -2.420769E-02;
netsum += inarray[0] * 1.365065;
netsum += inarray[1] * 1.541498;
netsum += inarray[2] * -2.885085;
netsum += inarray[3] * -0.2214469;
netsum += inarray[4] * -0.5453129;
netsum += inarray[5] * 2.71401;
netsum += inarray[6] * -0.3110048;
netsum += inarray[7] * 0.1049586;
netsum += inarray[8] * -0.9434364;
netsum += inarray[9] * 3.463347E-02;
netsum += inarray[10] * 1.593642E-02;
netsum += inarray[11] * -0.9843396;
feature2[10] = 1 / (1 + exp(-netsum));
 
netsum = 0.527099;
netsum += inarray[0] * 0.3246855;
netsum += inarray[1] * 0.1572891;
netsum += inarray[2] * -0.2083255;
netsum += inarray[3] * 0.151337;
netsum += inarray[4] * -0.2822335;
netsum += inarray[5] * -0.271508;
netsum += inarray[6] * 0.135406;
netsum += inarray[7] * 0.1410882;
netsum += inarray[8] * -0.6572818;
netsum += inarray[9] * 0.2018896;
netsum += inarray[10] * -0.7795432;
netsum += inarray[11] * -0.3825276;
feature2[11] = 1 / (1 + exp(-netsum));
 
netsum = 0.5903665;
netsum += inarray[0] * 0.2076311;
netsum += inarray[1] * -0.965389;
netsum += inarray[2] * -0.3691564;
netsum += inarray[3] * -0.1799534;
netsum += inarray[4] * 0.3315587;
netsum += inarray[5] * -0.2117538;
netsum += inarray[6] * 0.1847757;
netsum += inarray[7] * 0.4608989;
netsum += inarray[8] * -0.3534614;
netsum += inarray[9] * -0.0390228;
netsum += inarray[10] * 0.1050978;
netsum += inarray[11] * -0.8285341;
feature2[12] = 1 / (1 + exp(-netsum));
 
netsum = 0.1344881;
netsum += inarray[0] * -0.1601008;
netsum += inarray[1] * 0.5971546;
netsum += inarray[2] * 0.1504849;
netsum += inarray[3] * 0.2482371;
netsum += inarray[4] * -0.3369412;
netsum += inarray[5] * -6.436785E-02;
netsum += inarray[6] * -0.2145924;
netsum += inarray[7] * -0.4145341;
netsum += inarray[8] * -8.335336E-02;
netsum += inarray[9] * 0.3662711;
netsum += inarray[10] * -0.182315;
netsum += inarray[11] * -3.553776E-02;
feature2[13] = 1 / (1 + exp(-netsum));
 
netsum = 0.2076916;
netsum += inarray[0] * 0.19953;
netsum += inarray[1] * -0.1908853;
netsum += inarray[2] * -0.1726804;
netsum += inarray[3] * -0.2001367;
netsum += inarray[4] * -0.2643026;
netsum += inarray[5] * -4.083323E-02;
netsum += inarray[6] * -7.755315E-02;
netsum += inarray[7] * 0.1984065;
netsum += inarray[8] * -0.2868846;
netsum += inarray[9] * -0.1563479;
netsum += inarray[10] * -0.2193668;
netsum += inarray[11] * -0.5171931;
feature2[14] = 1 / (1 + exp(-netsum));
 
netsum = -3.886807E-02;
netsum += inarray[0] * 0.1563634;
netsum += inarray[1] * -0.3006245;
netsum += inarray[2] * -3.427394E-03;
netsum += inarray[3] * -0.1526299;
netsum += inarray[4] * -3.778153E-02;
netsum += inarray[5] * 0.1109331;
netsum += inarray[6] * -0.3885013;
netsum += inarray[7] * -0.1534872;
netsum += inarray[8] * -0.3036089;
netsum += inarray[9] * -0.1141069;
netsum += inarray[10] * 0.1069974;
netsum += inarray[11] * -0.2405679;
feature2[15] = 1 / (1 + exp(-netsum));
 
netsum = 7.858755E-02;
netsum += inarray[0] * 0.2799198;
netsum += inarray[1] * -0.2822836;
netsum += inarray[2] * 0.1261555;
netsum += inarray[3] * -0.1042713;
netsum += inarray[4] * 1.069868;
netsum += inarray[5] * -0.1448635;
netsum += inarray[6] * -3.187494E-02;
netsum += inarray[7] * 0.1601031;
netsum += inarray[8] * -0.3909382;
netsum += inarray[9] * -0.5122446;
netsum += inarray[10] * -0.8024101;
netsum += inarray[11] * -0.2227132;
feature2[16] = 1 / (1 + exp(-netsum));
 
netsum = 0.2611769;
netsum += inarray[0] * 0.2513898;
netsum += inarray[1] * 0.192657;
netsum += inarray[2] * 4.398692E-03;
netsum += inarray[3] * -7.913022E-02;
netsum += inarray[4] * -0.2365197;
netsum += inarray[5] * -0.1428106;
netsum += inarray[6] * -0.3280011;
netsum += inarray[7] * 6.429266E-02;
netsum += inarray[8] * -0.6301655;
netsum += inarray[9] * -0.1209942;
netsum += inarray[10] * -5.428226E-02;
netsum += inarray[11] * -0.3318071;
feature2[17] = 1 / (1 + exp(-netsum));
 
netsum = 0.1297862;
netsum += inarray[0] * -6.81124E-03;
netsum += inarray[1] * 1.030368E-02;
netsum += inarray[2] * 5.093158E-03;
netsum += inarray[3] * -0.2980518;
netsum += inarray[4] * 0.2045972;
netsum += inarray[5] * -0.3254778;
netsum += inarray[6] * -0.1252403;
netsum += inarray[7] * -0.1464316;
netsum += inarray[8] * -0.1691576;
netsum += inarray[9] * 0.1496561;
netsum += inarray[10] * -0.1653157;
netsum += inarray[11] * -0.2160503;
feature2[18] = 1 / (1 + exp(-netsum));
 
netsum = 0.0902269;
netsum += inarray[0] * -0.1984581;
netsum += inarray[1] * 0.3987583;
netsum += inarray[2] * -0.2961904;
netsum += inarray[3] * 0.23888;
netsum += inarray[4] * -5.782365E-02;
netsum += inarray[5] * -0.1687429;
netsum += inarray[6] * -0.2130049;
netsum += inarray[7] * -0.1841524;
netsum += inarray[8] * -0.2869512;
netsum += inarray[9] * 0.2608287;
netsum += inarray[10] * -0.1883301;
netsum += inarray[11] * -0.3253576;
feature2[19] = 1 / (1 + exp(-netsum));
 
netsum = 0.6474316;
netsum += inarray[0] * -7.894548E-02;
netsum += inarray[1] * -9.539741E-02;
netsum += inarray[2] * 0.1974181;
netsum += inarray[3] * -1.492105E-02;
netsum += inarray[4] * -5.598769E-02;
netsum += inarray[5] * 5.294666E-02;
netsum += inarray[6] * -0.119231;
netsum += inarray[7] * 4.824624E-02;
netsum += inarray[8] * -0.2782066;
netsum += inarray[9] * 5.176775E-02;
netsum += inarray[10] * -0.4815352;
netsum += inarray[11] * -0.460862;
feature2[20] = 1 / (1 + exp(-netsum));
 
netsum = 0.3565248;
netsum += inarray[0] * -0.2422504;
netsum += inarray[1] * -0.5816256;
netsum += inarray[2] * 3.228551E-02;
netsum += inarray[3] * -0.1261766;
netsum += inarray[4] * 0.3214397;
netsum += inarray[5] * 0.1249602;
netsum += inarray[6] * -8.941265E-02;
netsum += inarray[7] * 5.320761E-02;
netsum += inarray[8] * -0.2258381;
netsum += inarray[9] * -7.036582E-02;
netsum += inarray[10] * -0.3458121;
netsum += inarray[11] * -0.2148289;
feature2[21] = 1 / (1 + exp(-netsum));
 
netsum = 0.2308322;
netsum += inarray[0] * -0.1049895;
netsum += inarray[1] * 0.8421545;
netsum += inarray[2] * -0.8162465;
netsum += inarray[3] * 0.6611323;
netsum += inarray[4] * -0.1352762;
netsum += inarray[5] * -6.514258E-02;
netsum += inarray[6] * 0.5051051;
netsum += inarray[7] * -4.608627E-02;
netsum += inarray[8] * -0.4645218;
netsum += inarray[9] * 0.1502979;
netsum += inarray[10] * -0.3476329;
netsum += inarray[11] * -0.4053115;
feature2[22] = 1 / (1 + exp(-netsum));
 
netsum = 0.2196469;
netsum += inarray[0] * -0.6880457;
netsum += inarray[1] * -0.4766956;
netsum += inarray[2] * 0.3935314;
netsum += inarray[3] * -0.369472;
netsum += inarray[4] * 0.2484043;
netsum += inarray[5] * 0.2731576;
netsum += inarray[6] * -0.2080854;
netsum += inarray[7] * -0.1443658;
netsum += inarray[8] * -0.6488575;
netsum += inarray[9] * -7.509696E-02;
netsum += inarray[10] * -0.7618769;
netsum += inarray[11] * -0.4757225;
feature2[23] = 1 / (1 + exp(-netsum));
 
netsum = -2.097254E-02;
netsum += inarray[0] * 0.1919984;
netsum += inarray[1] * 2.790313E-02;
netsum += inarray[2] * -0.3006918;
netsum += inarray[3] * -0.2228446;
netsum += inarray[4] * -1.392037E-02;
netsum += inarray[5] * -0.3496368;
netsum += inarray[6] * -0.1307742;
netsum += inarray[7] * 6.666344E-02;
netsum += inarray[8] * -0.2486103;
netsum += inarray[9] * -8.076184E-03;
netsum += inarray[10] * 8.630705E-02;
netsum += inarray[11] * -8.209713E-03;
feature2[24] = 1 / (1 + exp(-netsum));
 
netsum = 0.425753;
netsum += inarray[0] * 0.3018224;
netsum += inarray[1] * -0.1246663;
netsum += inarray[2] * 1.2392;
netsum += inarray[3] * -0.4717711;
netsum += inarray[4] * 1.228852;
netsum += inarray[5] * 0.5026451;
netsum += inarray[6] * 0.8155102;
netsum += inarray[7] * -0.6944387;
netsum += inarray[8] * -0.1111507;
netsum += inarray[9] * 0.6087634;
netsum += inarray[10] * 0.5001101;
netsum += inarray[11] * -0.4904746;
feature2[25] = 1 / (1 + exp(-netsum));
 
netsum = 0.1442987;
netsum += feature2[0] * -1.796453;
netsum += feature2[1] * 0.7581317;
netsum += feature2[2] * 0.9438611;
netsum += feature2[3] * 1.160583;
netsum += feature2[4] * 1.012153;
netsum += feature2[5] * -0.950834;
netsum += feature2[6] * -0.4675803;
netsum += feature2[7] * -2.55208;
netsum += feature2[8] * 1.841948;
netsum += feature2[9] * -0.8615507;
netsum += feature2[10] * 2.747546;
netsum += feature2[11] * 0.5440722;
netsum += feature2[12] * -0.787976;
netsum += feature2[13] * 0.4287277;
netsum += feature2[14] * -5.252603E-02;
netsum += feature2[15] * -9.509154E-02;
netsum += feature2[16] * -0.5382935;
netsum += feature2[17] * 0.2429713;
netsum += feature2[18] * 7.037476E-02;
netsum += feature2[19] * 0.2937031;
netsum += feature2[20] * -3.157638E-02;
netsum += feature2[21] * -0.3222044;
netsum += feature2[22] * 0.7372624;
netsum += feature2[23] * -0.6344143;
netsum += feature2[24] * 5.070869E-02;
netsum += feature2[25] * -1.006118;
outarray[0] = 1 / (1 + exp(-netsum));
 
 
outarray[0] =  (outarray[0] - .1) / .8 ;
if (outarray[0]<0) outarray[0] = 0;
if (outarray[0]>1) outarray[0] = 1;
 
               
}
