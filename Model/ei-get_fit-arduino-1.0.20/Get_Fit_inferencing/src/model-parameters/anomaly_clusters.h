/* Generated by Edge Impulse
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
#define _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_

#include "edge-impulse-sdk/anomaly/anomaly.h"

// (before - mean) / scale
const float ei_classifier_anom_scale[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 0.9543948480431104, 0.5462969861501945, 1.4337735326293317, 0.4813325152068544 };
const float ei_classifier_anom_mean[EI_CLASSIFIER_ANOM_AXIS_SIZE] = { 0.659739994743098, 0.30831186791006343, 2.023307342954477, 0.28464224978976477 };

const ei_classifier_anom_cluster_t ei_classifier_anom_clusters[EI_CLASSIFIER_ANOM_CLUSTER_COUNT] = { { { -0.6434054374694824, -0.4739324748516083, -0.20032252371311188, 0.999393105506897 }, 0.40593050010676046 }
, { { 0.5921079516410828, -0.2757945656776428, 1.387320876121521, -0.49180400371551514 }, 0.7302893613814612 }
, { { -0.6588097810745239, -0.528421938419342, -0.9585311412811279, -0.5336644649505615 }, 0.2513303762877851 }
, { { 0.5356592535972595, -0.24746288359165192, 1.3129037618637085, -0.060099855065345764 }, 0.4462904789685799 }
, { { -0.48510146141052246, -0.49713215231895447, 0.9344081282615662, 1.8497214317321777 }, 0.4594289951437887 }
, { { -0.6074143052101135, -0.23530864715576172, -0.17874526977539062, 3.421851873397827 }, 0.5307651124307697 }
, { { -0.6902048587799072, -0.5630578398704529, -1.370384931564331, -0.5903311967849731 }, 0.1594946857458405 }
, { { -0.6221382021903992, -0.4911861717700958, 0.655677855014801, 1.2396827936172485 }, 0.5856938144268704 }
, { { -0.47538232803344727, -0.4703257381916046, 0.2036849558353424, -0.4074222147464752 }, 0.34495712831234226 }
, { { -0.6620712280273438, -0.4340985119342804, -0.13678690791130066, 2.5298852920532227 }, 0.28586506731655875 }
, { { 3.861682653427124, 1.1510554552078247, 0.6193184852600098, -0.3061462640762329 }, 0.5444118831853646 }
, { { 1.3079570531845093, 2.7052550315856934, 0.04131363332271576, -0.3498746156692505 }, 0.7203695166861608 }
, { { -0.6833567023277283, -0.4236116111278534, 0.24684375524520874, 1.9028698205947876 }, 0.38127574625514843 }
, { { -0.6437938213348389, -0.5269694924354553, 0.4547499418258667, 0.586311936378479 }, 0.3145120294506142 }
, { { 1.8965330123901367, 0.048551276326179504, 1.486617922782898, -0.5445411205291748 }, 0.3924033900179492 }
, { { -0.633344292640686, -0.4108162820339203, -0.09807152301073074, 0.2160748988389969 }, 0.6036570627378459 }
, { { -0.596386194229126, -0.44813501834869385, -0.3246912360191345, -0.3577527701854706 }, 0.4503707512494833 }
, { { 2.554908275604248, 1.8395721912384033, -0.07288725674152374, -0.4510278105735779 }, 0.6154820406975912 }
, { { -0.03771502524614334, -0.370560884475708, 1.5290133953094482, -0.38721922039985657 }, 0.5423824579669192 }
, { { -0.02089340053498745, -0.24238377809524536, 0.7167653441429138, -0.4798165261745453 }, 0.5524278498022509 }
, { { 1.4247852563858032, 1.9259037971496582, -0.17850084602832794, -0.3635171353816986 }, 0.4966302546815375 }
, { { 4.26953125, 2.4963977336883545, -0.1314537525177002, -0.33856531977653503 }, 0.39808416979441424 }
, { { -0.21551966667175293, 0.6357595920562744, 0.017086343839764595, -0.2477487027645111 }, 0.787182922443617 }
, { { 1.1830304861068726, -0.1693798303604126, 1.3572123050689697, -0.4210805296897888 }, 0.3717817234127416 }
, { { 0.856599748134613, 0.9212915897369385, 0.6438019871711731, -0.4457312822341919 }, 0.5677813859854028 }
, { { 0.7014275789260864, 1.3459177017211914, -0.37927529215812683, -0.1962069720029831 }, 0.584356021839041 }
, { { 2.2401556968688965, 1.1093097925186157, 0.2646264135837555, -0.45335710048675537 }, 0.6746965788161278 }
, { { 1.090753436088562, 3.7155914306640625, 0.6079589128494263, -0.49448758363723755 }, 0.6145569092158252 }
, { { -0.6113649010658264, -0.4011646807193756, 1.149612307548523, 2.755040407180786 }, 0.5316592606299889 }
, { { 4.403398513793945, 0.5068044066429138, -0.32161179184913635, -0.419260710477829 }, 0 }
, { { 2.063830614089966, 3.650771379470825, 0.22732791304588318, -0.24881482124328613 }, 0.4561055658506402 }
, { { -0.6278497576713562, -0.4133801758289337, 0.75931316614151, 3.745422124862671 }, 0.4281019292125008 }
};

#endif // _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_