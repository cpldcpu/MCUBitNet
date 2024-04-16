// Automatically generated header file
// Date: 2024-04-16 02:53:55.035021
// Quantized model exported from a11_Opt12k_cos_s00n_Aug_BitMnist_PerTensor_4bitlog_RMS_width64_64_64_lr0.001_decay0.1_stepsize10_bs128_epochs60.pth
// Generated by exportquant.py

#include <stdint.h>

// Layer: L1
// Quantization type: 4bitlog
uint32_t L1_bitperweight = 20;
uint32_t L1_incoming_weights = 256;
uint32_t L1_outgoing_weights = 64;
uint32_t L1_weights[] = {0x8a41455c, 0xdec42432, 0x2124555e, 0xff866349, 0x3444566f, 0xff576431, 0x3304367f, 0xfe765bdc, 0x4320b67f, 0xf574dddc, 0x431bc37e, 0xf76deddc, 0x4843b46d, 0xe53ddca3, 0xa3a38b5c, 0xc48ca444, 0x3cb3913b, 0x3b12444a, 0x3ab0ab13, 0x9c234b13, 0x3a82b330, 0xb8bc2ba3, 0x2ac3284c, 0x293428a3, 0x82a3abab, 0xb02b24aa, 0x42cbacb4, 0xc2c3434, 0x2b1a02c2, 0xcc2dab04, 0x3bb039aa, 0xbc9b33a4, 0xcbccdddc, 0xccb2c008, 0xbbcddcc3, 0x2bbb42bc, 0xbcccca85, 0x6556554c, 0xcccc9566, 0x7676654b, 0xcb25665, 0x66666544, 0xa04554de, 0xedb44442, 0xbb04bccd, 0xeedc233b, 0xcdcdca0c, 0xddeb0ccd, 0xddddddda, 0x4ddddddc, 0xddcddc85, 0x53cddeed, 0xcdc0b42b, 0xb3cb9cac, 0xbcb33439, 0xc334153b, 0xc3441354, 0x2142454b, 0x82c81c24, 0xb248b243, 0xcbb1dc11, 0x2ba30abb, 0xcdcb0bdb, 0xbbbbac9b, 0xccccdbd2, 0x44343ccd, 0xddddcddd, 0xb95554cd, 0xdcddeddd, 0x4054444c, 0xccdccccb, 0x30653353, 0xddc4ac1b, 0x3c455564, 0xdcb5abac, 0xbdd66665, 0xbc3543bc, 0xbf46666, 0xd265b3cc, 0x5efc6565, 0x95404b4, 0x6ff56655, 0xc29d91a5, 0x4fe76545, 0xa8ccc433, 0xde5656a4, 0x9d1dc3ba, 0xc4534bc8, 0xc031c0cc, 0x441b1b2b, 0xcdc4bcc4, 0xababb331, 0xbc933cb1, 0x5a9b44ac, 0xccc4ba83, 0xb3c2448b, 0x3432310a, 0xabdd1444, 0x453a9cc9, 0xcdedda34, 0x4a2cbbcc, 0xcdc35645, 0x233ba434, 0x56676665, 0x3c2b4345, 0x64cc5543, 0x428dbdde, 0xffffffec, 0x43c3bc25, 0x664defed, 0x2bba8aa3, 0x566652db, 0x425abbbb, 0xcd9424c3, 0x443a8ba2, 0x3353b833, 0x8bba433a, 0x444b9433, 0xb3a4b334, 0x83cd4c33, 0x244a3a43, 0x433c4c43, 0x5424233c, 0x9b9bb245, 0x4423b438, 0x330d0344, 0x4323a3c3, 0x41443344, 0xddc14554, 0x9ccbdcdc, 0xdb957653, 0xc3ccddd, 0xcc666633, 0xccccdccd, 0x256765dc, 0x8cdadebd, 0x466674e2, 0x3acbaccd, 0x36676eeb, 0x9cbb92cc, 0x56675ff4, 0x50eddddb, 0x56674fe5, 0x5cec9dcd, 0x56665dda, 0x4ccccbdc, 0x4655531c, 0x3cbddadd, 0xb553c30c, 0xccc343ac, 0xb533423b, 0x3413b5cc, 0xc31b3aac, 0xc532b4dc, 0xd3454c19, 0xcda25bcc, 0xddc04312, 0xb9453ddc, 0xcdddc9c9, 0xacd29ddd, 0x435438ab, 0xcdbb4444, 0x4443cccb, 0x3c8a3331, 0x483ba834, 0x23dedcb4, 0x143d023a, 0x9cccc455, 0x4acaaa42, 0x56777756, 0x49accc2c, 0xcdeeed8c, 0x2accbc1b, 0xeffffffd, 0xbcbb935, 0x50ceeeee, 0x34498b85, 0x556662cd, 0x140b83a9, 0x34232342, 0x3b32380c, 0xb4354444, 0x22b3222b, 0x8c230445, 0x3a20a444, 0x543bc845, 0x444aa924, 0xa1c9cb35, 0x542ba134, 0xca08a235, 0x44430311, 0x30323444, 0xddcddddd, 0xdddddddd, 0xdddcddcc, 0xdddddddd, 0xddddccc9, 0x352adddd, 0xddddc3bb, 0xc333bcbc, 0xddaa3b29, 0xb92348cd, 0xcc48233c, 0xcb2812cd, 0xd832cbbd, 0xc3cbcbcc, 0xc9c9c10c, 0xbbb83c38, 0xdcc1924e, 0xdada4288, 0xcbc3344d, 0xdc1309c1, 0xc528444b, 0x9adbdb8b, 0x96644c0c, 0xdbdcd348, 0x46664cde, 0xded0b554, 0x25666664, 0x4133665b, 0xd2566677, 0x7777664d, 0xcc445666, 0x676651dd, 0x44234bdd, 0xdcb34042, 0x34453efe, 0xc4493544, 0x4555affe, 0x54512644, 0x3556cffd, 0x64344555, 0x3546bff8, 0x65c239a0, 0x34462ffa, 0x65dcdeec, 0x44b54fe5, 0x6acdcdea, 0x84a54dc5, 0x4a1453db, 0x3cb04a21, 0xaccc42bb, 0x246520b, 0xccab3548, 0xbb543b42, 0xa0042044, 0xa354a242, 0x24440225, 0x2cab83b3, 0x24244434, 0xa3bababc, 0x9ab45543, 0x44ab1b43, 0x8b344334, 0x293b892d, 0x33083320, 0xddcddc00, 0x32addddd, 0xccddb565, 0x19bddddd, 0xddcca441, 0x230cdcdd, 0xcdb3553d, 0xbddcddcd, 0xdc83562c, 0xcada0acd, 0x892365cd, 0x9dc4bbcc, 0x159a67df, 0x8b8c9403, 0x251467df, 0xc14b4b13, 0x566677be, 0xcbbcad33, 0x366666dc, 0x1cb0cda2, 0x855445a4, 0xcc0bba4c, 0x944b8453, 0xcb3d982c, 0xc24a2342, 0xc08c31bd, 0xdb4114b2, 0xa4c33ccc, 0xcc9431b3, 0x1cd29acc, 0xcdc2cb83, 0x430b3cdc, 0x4a48444a, 0xa240a834, 0xbb4555, 0x48434883, 0x3acbc834, 0x31b233c1, 0x40cdeeed, 0xbbcb9cc0, 0x4ccaeede, 0xcc43b1aa, 0x45666777, 0x655422cb, 0x46677754, 0xda08cb9, 0x4baddfff, 0xddbbbb30, 0xaeefffd5, 0xbb4924c3, 0xceec5665, 0x33435331, 0x9c54541b, 0x444bb493, 0x345342dc, 0xbbaca015, 0x44543c34, 0x323cbc14, 0x44a44444, 0x33cc0aa3, 0x4142cc0b, 0x3ccbcc34, 0x448b32b0, 0xcdbcba14, 0x30ba2a0c, 0xc438b3, 0x23022998, 0xc4404334, 0x3253a2c8, 0x82333352, 0xa35aba44, 0x33aca544, 0x334341bc, 0xbbdc8343, 0x4444bad3, 0x8bb24488, 0x45542534, 0x3d15baad, 0x45666665, 0xc04a9cba, 0xc35564ef, 0xd89ab493, 0xddeefffe, 0x32345431, 0xefffffb6, 0x55494244, 0xeefed565, 0x3033b455, 0xdee25553, 0x80bbba43, 0xbb966642, 0x2489c245, 0x33435553, 0xa422a333, 0x39444535, 0x1488341a, 0x42249544, 0x2bcb3544, 0x24123445, 0x55a32354, 0x49b22555, 0x54a55445, 0x3ccd2344, 0x4b122524, 0x4dedcb45, 0x9cb82234, 0xeed4555, 0x6444b034, 0x3deffec6, 0x654a4955, 0xadeffffb, 0x65443448, 0x4554efff, 0xa089a33c, 0x367675de, 0xecbbcdcb, 0xb3256664, 0x2caac0bd, 0xbdecbcda, 0xc0232331, 0xadddab41, 0x992bb444, 0x3ca95893, 0xcc9bc104, 0x2b42dba, 0xbbb2b344, 0x4443cd8c, 0xadbb0424, 0x66555666, 0x55545455, 0x55565544, 0x54334455, 0x65244c34, 0xb4833445, 0x53139329, 0x2382344, 0x55bbcb13, 0x3414b324, 0x5889b454, 0x44a91c3b, 0x53252b33, 0xcdbc334, 0x5504ac48, 0xc1cb8535, 0x523331c4, 0xba544444, 0x50134195, 0x58440284, 0x63433545, 0x56544bdc, 0x5bc24453, 0xbeeeefed, 0xdeeeeff, 0xffffffec, 0x4beeefff, 0xffeeddc4, 0x543cdddd, 0xc3423555, 0x55550544, 0x45555555, 0xb9a0b302, 0xc233a32c, 0xb0ab8a35, 0x140bcbbb, 0x99cab844, 0x854dddc1, 0xb3221a3c, 0xb54912cc, 0x33888cac, 0x43ab2320, 0x832a3cc8, 0xdc553333, 0x44283c45, 0xdf671344, 0x4443cc46, 0xef563aac, 0x3333a936, 0xef663bdc, 0x43a45255, 0xfc65cccd, 0x431ccc2d, 0xe55bccb1, 0x3b4beda3, 0x32b1b243, 0x23bdd254, 0x2db13423, 0xbaccb2a1, 0xcdcb2443, 0xb1bd4425, 0x5ddb3443, 0xbbca3443, 0x2dcb11b4, 0x44534ac2, 0x13444455, 0x22454143, 0x82343233, 0x54554501, 0x31b90844, 0x445283a4, 0x40bb3444, 0x55330313, 0x45424545, 0x34c24444, 0x55543b82, 0x38b95545, 0x5442bddc, 0x32a54390, 0x5adddeac, 0x335344b3, 0x5dceedca, 0x34b9db36, 0x4deed2a8, 0xbb0ccc57, 0xeeeec34a, 0x255acb55, 0xffeedd90, 0x5553b552, 0xffeccbbb, 0x22b44535, 0xefddc914, 0x42a3345b, 0xdeedb234, 0x32a4b455, 0xded2b344, 0xcbbc1b43, 0x444440bc, 0xddc3ba44, 0x55555429, 0xdacbd934, 0x24445459, 0x9c8bc243, 0x30445440, 0xbb44c332, 0x32533533, 0x84244554, 0x33cb234c, 0xb5455655, 0x55b456bc, 0xa5665555, 0x566663dd, 0x95544195, 0x5554cddc, 0x9ac43446, 0x54cdeedb, 0xddc43554, 0xccedddcd, 0xddcdddde, 0xedd8cbcd, 0xcccaddee, 0xdc4a0bcd, 0xcc9cbdcc, 0xcc243bdc, 0xbcb0dcbc, 0xbdc8bdcd, 0xddc3bbad, 0xaabccccc, 0xccb1bb14, 0x32baa3cb, 0x1bcc4b4, 0xb343221, 0xc842dc40, 0x3c54432c, 0xabb9a9, 0x902acdcb, 0xbccc2b3a, 0xc94cc8bc, 0xcabdbc3b, 0xcc0ccddc, 0xb9a21ddd, 0xeedcdedc, 0xa2555445, 0x65444554, 0x24566666, 0x67666665, 0x3ca4a356, 0x66667765, 0xbdddefee, 0xdc453665, 0xceeeddde, 0xeeedc663, 0xcedd3439, 0xdeeea553, 0xcdc440cc, 0xdcde25a0, 0xabb3acdd, 0x339baba9, 0xbbb4b3ba, 0x33bccc2c, 0x443448b9, 0x824a4143, 0x33340acc, 0xbb43cba3, 0x34044bdc, 0xa441eecc, 0x34444bda, 0xb2ddeec4, 0xa9354acb, 0xcbd24666, 0x843444bb, 0xc5677776, 0xca2c341b, 0xcdcc4566, 0x32a93cb5, 0x3dffffed, 0x20a1bcc4, 0x554efffd, 0xb99345ad, 0x36666eed, 0xb32c443c, 0xd35553dc, 0x3cbd2b32, 0x285554cc, 0xbbbac14, 0x44243303, 0x4ba4c358, 0x14133444, 0x424ddbdb, 0x35934488, 0x443424a4, 0x30120144, 0x44334304, 0x34255455, 0x43344424, 0x4a556654, 0x21a44424, 0x666659d3, 0x43213445, 0xb4dfffed, 0x4b334cce, 0xeefffffe, 0x3a4c2dcd, 0xbeeedddd, 0x222bab25, 0x55777666, 0xba8cab45, 0x45556666, 0x9ccbcbc8, 0x40b35346, 0x3a92001a, 0xba9bcdb4, 0x831b044c, 0xbbbcddd0, 0x340ab433, 0x42acdddc, 0xbba0aa91, 0xcc20deda, 0xbcba443, 0x1bacdd84, 0x4429bbca, 0xacc00444, 0x42321349, 0xdd94a435, 0x2454554b, 0xeedcb444, 0x2456554b, 0xeeeec444, 0x55555456, 0xbeffd454, 0x56554555, 0x5dffd453, 0x55331366, 0x6effb655, 0x650bcc46, 0x7ffe6555, 0x553cdda6, 0x6ef56344, 0x4bbcdab5, 0x5eb65a23, 0x43b84104, 0x9d46bb09, 0x384382b1, 0x4b442c84, 0x3138b4a1, 0x42c20ab1, 0x4ab492a1, 0x33bbc0c3, 0x1a30408c, 0xc10bbaca, 0x32433b3b, 0xba43ccbb, 0x40432b81, 0xaccda38, 0x44434322, 0x32cbc013, 0xdddcdddd, 0xdddbdddd, 0xdddedddc, 0x80c8ddcd, 0xddddca54, 0x34abacac, 0xdddddcac, 0x3323aa1c, 0xdd8dcccd, 0xcacbcdcc, 0xccccb3dd, 0xeeebbcdd, 0xda9bd18b, 0xcc3538ab, 0xd843c466, 0x5454a032, 0xc2555565, 0x3254c343, 0xc4565532, 0xd8443653, 0xb454c29a, 0xe45b5653, 0xd9353443, 0xc565655a, 0xc3556466, 0x5555564b, 0xc1546665, 0x565555cd, 0xddc03459, 0xb3c182dd, 0xdccddddd, 0xdddcccdd, 0x43555666, 0x66458344, 0x45466666, 0x6455bba4, 0x44455655, 0x9c939b04, 0x44444bc2, 0xdd4b4433, 0x34422cba, 0xb444343a, 0xbabcda0, 0x354c4302, 0x4cca02cd, 0x45522544, 0xab3ba9c, 0x24124435, 0x34355554, 0xbccca453, 0x5544466c, 0x4cb9ac35, 0x566544cc, 0x335bbaca, 0x55649bb8, 0x15554cdc, 0x2b38ca45, 0xbca2deee, 0x3ceeeeff, 0xefffeeed, 0xaadfffff, 0xeeeeeed2, 0x34bddedd, 0xdcdbcd14, 0x44542bbb, 0x24554455, 0x54838c82, 0x66664444, 0x4139ccc5, 0x6565dda4, 0x434ac8d9, 0x5654dedc, 0x5255b294, 0x65cbefec, 0x4324cbc6, 0x63defeed, 0x4bddd455, 0xcedeede8, 0x4246554d, 0xdc0c254a, 0x445665ad, 0xdb243454, 0x5434bbd2, 0x33543554, 0x432ecbdc, 0xb9334344, 0x554dc0da, 0x244254a3, 0x55664c55, 0x31454cc8, 0x5456645d, 0x318deedb, 0x52bca8cd, 0xceefedc4, 0x534acdbd, 0xdeedcaa2, 0xc08a21a, 0xc8bcccbc, 0xbacb2442, 0x99ac2c31, 0xc8c8253b, 0xccb433bc, 0xb334334c, 0x2828342, 0x24424330, 0x2a31dc0b, 0x843b32a4, 0x34414c8c, 0xb5552b4c, 0x4555541c, 0x42230cbd, 0xcb36664d, 0xbcccd09d, 0xcec5665d, 0xbcccc9bb, 0xbed676ad, 0xcc0cbbd4, 0x9e4765dd, 0xbc8bc1e2, 0xc4775cce, 0xcdbb2ced, 0xd666cedd, 0xbcdccdda, 0x5761dddb, 0xc38cdc35, 0x66518bbc, 0xcba8c313, 0x4449ab1c, 0xcccb4666, 0x55551ccb, 0xabc46667, 0x666652ad, 0xcddca367, 0x7666665c, 0xddeeeefe, 0x86655558, 0xdeffffff, 0xffa34453, 0xdddcdedd, 0xeedc3a23, 0x4667655, 0x41dcab4b, 0x36654544, 0x43a0cb32, 0x952add8b, 0xc4bb3133, 0xbbb231bc, 0xcbbbb244, 0xcc490344, 0xdb014443, 0xb3432232, 0x2048928b, 0xcb91b9bc, 0xa3930dcc, 0xbcdd3b38, 0xb943bcc9, 0xcbcdc33b, 0x41a039cd, 0xddc10934, 0x443498cb, 0xa4a4a2ab, 0xba133233, 0x4242a8bc, 0xb1c29ab3, 0x31cb39c, 0x913cb942, 0x41bcc3cb, 0x1328b334, 0x1bbac9c8, 0x24b24935, 0xab8a410a, 0x3442b9a3, 0x40a383c2, 0xc45b233c, 0x43443ac3, 0xc4443813, 0x3abccb52, 0xeb53c2ba, 0xbcdcb34d, 0xe554cdcb, 0x8cc346ae, 0xf658ccdc, 0x54565df, 0xf7643cba, 0x45556cef, 0xd6665581, 0x35548fff, 0xd4466542, 0x5451efff, 0xd2666413, 0x3491eeee, 0xb4655544, 0x45534334, 0x35545445, 0x445aa43b, 0xb549b444, 0x5554ba32, 0x44bcb444, 0x555cbc98, 0x11ada43a, 0x454482cc, 0x54cc33c2, 0x543344cc, 0x65ac43d9, 0x44ad1c4e, 0x364eddc4, 0x55a0cc4e, 0xc65edccb, 0x54a4356e, 0xd66edaa3, 0x331255ae, 0x47323414, 0xa84531fe, 0x752334b4, 0x24342de5, 0x72b4cc33, 0x353ceec6, 0x65cddd33, 0x43ceed56, 0x65cc2a45, 0x3bceeb41, 0x660a8354, 0x449ca435, 0x66413244, 0x544528bc, 0xcbb94455, 0x533addde, 0xeedb8444, 0x53adeeee, 0xefeeda43, 0x59ddec44, 0x5adeed42, 0x4bec5667, 0x7659ee33, 0x40d55564, 0x5465ce34, 0x48c54cee, 0xea339cb2, 0x43b4accd, 0xbb114dda, 0x534339ab, 0xdd819dc0, 0x433abaad, 0xdec3cdc3, 0x21dbdc02, 0xcb043c93, 0x28dccd45, 0xd45549a4, 0x4432a204, 0x455ac455, 0x455034a3, 0x44a09555, 0x45401335, 0xba853554, 0x5445543a, 0x38345455, 0x454340cc, 0xab224435, 0x534bcdcb, 0x9c133335, 0x4410c122, 0x4032b134, 0x443cccab, 0x9390ac44, 0x433bbabc, 0x3cb03b92, 0x43b32bbc, 0xcb452c90, 0x4a23cb29, 0xbdcbddbb, 0x3cbc9322, 0xbdecbdc4, 0x4bdcd2a2, 0xbccda44, 0x42cbbcbc, 0xcc2bcb55, 0x6655409a, 0x94545556, 0x65666667, 0x77766656, 0x55466666, 0x56535545, 0x39bdeccd, 0xeeeddd04, 0x52deefff, 0xfffeed34, 0x452cdefe, 0xeeeecb43, 0x84255565, 0x55655343, 0x235554cd, 0x46544454, 0x84553cff, 0x56be3155, 0x428454ff, 0x66ed4444, 0xbb3456ee, 0x64e33454, 0x8b2356ee, 0x5db54334, 0x3a45465a, 0x5d44cd34, 0x45554655, 0x8a53cb54, 0x56654ab4, 0x238c5555, 0x54bc4dc4, 0x55156554, 0x4bccc233, 0x25455381, 0x2cdddeee, 0xedeeeddb, 0x2cdeeede, 0xeeeeeeec, 0x8bdddddd, 0xcdbcddd9, 0x4a9ddddd, 0xddced3c8, 0x3a2ccdcd, 0xddddd234, 0x4434439d, 0x98c34334, 0x448a3aaa, 0x8cbbb332, 0x43a34338, 0x33bbc424, 0xab341834, 0x84a4c3a2, 0x3ba2b449, 0xcbb9ab32, 0xbb1458bd, 0xcb9c4345, 0x2c456653, 0xccbbb354, 0xded5676, 0x5334a1a9, 0x2effffd6, 0x6338ac3b, 0x42effffe, 0x3a9ccccb, 0x46775dee, 0xd320bcc0, 0x44676765, 0x223a2823, 0xa82b2bbc, 0x13443a9a, 0x3cdeddb4, 0x23342233, 0xbba34a3, 0xab2a3914, 0x8442a322, 0xa18b4804, 0x4545442c, 0x84453454, 0x5444bcdd, 0xec3b4345, 0x44bccdde, 0xefedbc44, 0x424ccdce, 0xfffedd14, 0x49b465bd, 0xfffffedb, 0x54564566, 0x610deeed, 0x5564c256, 0x765b8eed, 0x55554ac9, 0xa54b32dd, 0x44343ccc, 0xb234b349, 0x54ba89d3, 0x344443b2, 0x550c3032, 0xb3435434, 0x5540333b, 0xa4504344, 0x5553232b, 0xb4411043, 0x55544534, 0x9bcbca34, 0x55543a1a, 0x2a93b845, 0x45545440, 0xb3240354, 0xbb344343, 0x9cb10ab3, 0x8ab42443, 0x331bcaa3, 0x8a02c3b2, 0x223ab034, 0x133cbca4, 0x434b3545, 0x8bccdd54, 0x334d8d35, 0xba1b1c84, 0xbb4b3b25, 0x3099bd45, 0xdb385435, 0xcddec65, 0xf43c3cc5, 0xcdee067e, 0xe5cccd35, 0xcee2770f, 0x55b12b45, 0xad3567ff, 0x64195554, 0xcd4564ed, 0x3bb34314, 0xc335548d, 0xc1b40cb3, 0xb045543d, 0xd2cacccc, 0xc1115542, 0xd1bc9138, 0xccc15343, 0xb3432322, 0xcddccccd, 0xdbddcdcd, 0xdcccdc38, 0x4bccbccc, 0xddbdccbb, 0x44b444cc, 0xccc3a150, 0xbb8bc3bc, 0xccc1454b, 0xacbc944c, 0xdaa23b83, 0x3404400c, 0xcacd3843, 0xa090ab53, 0xd1ccb948, 0xdd00cd44, 0xc4adbc23, 0x93bddd56, 0xb443cbc3, 0x25ced866, 0xd8455524, 0x4beec674, 0xddd234a4, 0xceec5662, 0xddecdeee, 0xfe567752, 0xdcdddeee, 0xa667664c, 0xcdbccdb6, 0x666655bc, 0xccc45676, 0x55553cdd, 0xbaddb456, 0x5533cbbc, 0xbcdd3566, 0x4548bccd, 0xdcdc4666, 0x54c4dddb, 0xdddd4665, 0xdeededa9, 0xccad576d, 0xeeedd15b, 0xbbd866cf, 0xd84db243, 0x1a046bff, 0x35cddcb3, 0x19c44dfb, 0x45cacdc0, 0xc8dbddd1, 0x54bacbbc, 0x80b314c4, 0x3bc4b5cb, 0x28225442, 0x83245304, 0xb24052db, 0x35425441, 0x242433a1, 0x4921b99b, 0x3c35533, 0x209cdbcd, 0xbcbcc59c, 0xb88cddb9, 0xa9ccccde, 0xddc2b8cc, 0x28342443, 0x33524324, 0x8343a348, 0x34384441, 0x34bcc238, 0xb5033454, 0x93cddbaa, 0x12a3b551, 0x2acddd03, 0x4a24a424, 0x3c3a324, 0xbcacb434, 0x345935ce, 0xdabcc934, 0x345662fd, 0x6451ad85, 0x9055aff4, 0x712bc255, 0xcccfff7, 0x65555544, 0x8cceefd6, 0x56665654, 0x12dcdddd, 0xc5665454, 0x8acbbddd, 0x8b535345, 0x1a3c0bc4, 0xbbca9944, 0x34334414, 0x9dcbda33, 0x3322213b, 0xddc1a444, 0xcaccaddc, 0xddccccc0, 0xcccdccbb, 0xddcdb53a, 0xaccddeb6, 0x4a31b24a, 0xccacdd44, 0x349c2534, 0xabdca95a, 0xd83cc422, 0xa9833556, 0x3cca22d4, 0x135464a4, 0xad12c3b2, 0x564555ee, 0x24bc438, 0x56667dfd, 0x58b2c43b, 0x46766ffd, 0x283bc1cc, 0x46666ee9, 0x3acb58bc, 0x85566642, 0xdc1cbedc, 0x3555554c, 0xc2ddcdcc, 0x35553ba1, 0xbcdbddbc, 0xca044588, 0x39aa3acd, 0xa23bac29, 0x4359cacc, 0x45434555, 0x52dcc334, 0x54442455, 0x65deed33, 0x54b9bda4, 0x66befec2, 0x44cbddc8, 0x670effb4, 0x2a23dbde, 0x674ffeb5, 0x4a358cce, 0x67dffa56, 0x33c3cbae, 0x67efc566, 0x450223bd, 0x64ec6655, 0x44138cb8, 0x6bd565a4, 0x34543319, 0xbc483430, 0x5434cac4, 0xda330c33, 0x58bac002, 0x983abc14, 0x5513b3bc, 0xc98bc032, 0x440b422c, 0x2b984c24, 0x54443828, 0xa910b231, 0x54444843, 0x4b334334, 0x545340ba, 0x8c143545, 0x53342ded, 0xdb384554, 0x5423deed, 0xc4235544, 0x44b2cedd, 0x22443554, 0x32ccdec2, 0x55432543, 0x4bddecc5, 0x42253844, 0x4deda455, 0xce33c555, 0x4cd243b4, 0xadcdd555, 0xbcd33bc5, 0x6beed455, 0x4dd443a4, 0x40cee235, 0x3c94430a, 0x55affdb3, 0xcc40ab0, 0x554efd34, 0x43ca4233, 0x556efd24, 0x542a3455, 0x564eed22, 0x55435546, 0x33addb35, 0x44553854, 0x55489354, 0xdddc88cd, 0xb8acccca, 0xbcc919dd, 0xdddbc0dd, 0xbcabccde, 0xedd03bba, 0xcb9644de, 0xebdb52bc, 0xb1b565bd, 0xeeeb53bc, 0x2aa4466d, 0xdde249cc, 0xcdddd65e, 0xedd5c104, 0xcdddb44d, 0xeec44255, 0xa3c39c2c, 0xee243055, 0xc234440e, 0xfd3c4455, 0x9d8addbe, 0xfb556654, 0xcc2ccdee, 0xc6666664, 0xccdd3aa5, 0x65666642, 0xcddd4445, 0x5565564b, 0xacdd0345, 0x554554bc, 0xbcdc3454, 0x433542cc, 0xcccb1dac, 0xdccdacbc, 0xcc0ba2c0, 0xbca942b1, 0xac234449, 0xb103c144, 0x1b354484, 0x1ab9944b, 0xb94433ac, 0xbabc0440, 0xcca1b9cb, 0xa4a9cc24, 0xbbb1addd, 0xd2cdcb33, 0xdaccdddb, 0xb0954554, 0xdccdc455, 0x55666655, 0xcbcc5666, 0x56665555, 0xa2d95454, 0x45530131, 0xabcd0b45, 0x3caddd38, 0xbcc94955, 0x91c8cccb, 0xbabb0345, 0x43ca0cdb, 0xcccba443, 0x2b24d8cd, 0xcabb03bb, 0xb1593cbb, 0x83a9bcbb, 0xcbdcb2ba, 0x3aa2abbc, 0xbccbb81a, 0x9b2c4bb1, 0xcc232431, 0x9dcbb1ca, 0xa2435583, 0xb9cddd9c, 0xbd055523, 0xcccd92bc, 0xef36664c, 0xc2b398e, 0xfd66662d, 0xcccdcdef, 0xd77655bd, 0xbdcdcddd, 0x6755cedc, 0x24345b24, 0x653cadc8, 0x45543bcc, 0x530b0952, 0xba534bcd, 0x3328444b, 0x34455042, 0x434244b0, 0x3235403c, 0xcc23abb9, 0x3a3233ca, 0x333b1bc3, 0xcb4332b9, 0x92cbcaa2, 0x391bbdcc, 0xdddcbc89, 0x2acbddd, 0xeeddcc9b, 0xa9c04cee, 0xdccdbcca, 0xbb8b2cdd, 0xcc0ddddc, 0xacc34ddc, 0xcdb3bdcc, 0xccdc30de, 0xcc04bbac, 0xddc31, 0xcddb309b, 0xcb3bad4d, 0xfeeb5553, 0xd2b243cf, 0xc5565644, 0xdddddefd, 0x7666bc0c, 0xdddbdeb7, 0x6555cd1d, 0xcaa54565, 0x66555543, 0xb2658323, 0x45446664, 0x2132c333, 0x35466665, 0x38405224, 0x65555659, 0xb4024555, 0x5555454b, 0xccdccccb, 0xb814cbac, 0xccbb5555, 0x4021ac9b, 0xbb567665, 0x5835562b, 0xc4667665, 0x55655442, 0x25665666, 0x62acdddc, 0x9465a56b, 0xeeedeeec, 0xd990b43e, 0xe32eeedc, 0xccbca43d, 0xeb0dcbba, 0xdddadccd, 0xebdc355b, 0xdcdaeddd, 0xd0c55540, 0xcd153559, 0xc8b3350b, 0xc33b39cc, 0xc9b3422b, 0xc13353bb, 0x2bcddb42, 0xb132a093, 0x3ddeedcc, 0xbb035455, 0x4a1cdcdd, 0xbbb22431, 0xdbdddccc, 0xb9204343, 0x39134b2b, 0x11a1042b, 0xcb2422ab, 0x422bcb32, 0xdc44cba9, 0x343ccb83, 0xc2144442, 0x49a3aca2, 0xc924a4c3, 0x41c334a9, 0xbdb3c2a2, 0x20adc32a, 0x4bdc2428, 0x1438c82b, 0x4c3a4149, 0x22346532, 0x6c34382a, 0x336660e3, 0x6bdcac2a, 0x5666bff6, 0x7ccbcd02, 0x4565ffe7, 0x65ccbb13, 0x44dff35, 0x56444553, 0x31cefeb4, 0x46555554, 0x3ccdeed2, 0x56405543, 0x33cbdd94, 0x4ba33242, 0x4438acc, 0xdc34bb28, 0x43432dde, 0xd453c0cb, 0xa423cded, 0xcb44cdda, 0xb38cddee, 0x394cddec, 0x4a2caddc, 0x24eddeeb, 0x433345b, 0xeefeeeda, 0x3434655c, 0xffeeddbb, 0x445ba555, 0x3534354b, 0x423b3665, 0x9355b342, 0x33a35668, 0xdb43c453, 0x2ccb5655, 0xab334c54, 0x2ddcdc54, 0x43c9cc44, 0x3adeedc8, 0x45b1db49, 0x302cdcc2, 0x393ccb2b, 0x42455443, 0x243b0b09, 0x13355553, 0x5424b41, 0xa9b3c39, 0x4b42244, 0x1aa3b3b0, 0xbc02aa21, 0x20b82232, 0x823a8444, 0x80b2cb43, 0x3ba42445, 0xba8abbb1, 0x1ac0cb33, 0x83229abb, 0xa3309b82, 0xaa3b4104, 0x3bb82333, 0x334acaab, 0xa24bd98, 0x85430bab, 0x24a8bdab, 0x33567666, 0x5c29c39b, 0xcbdc083b, 0xdcbbb192, 0xceffffff, 0xeb02083b, 0x1deefff3, 0x5538024b, 0x24a56676, 0x529a31a3, 0x35566655, 0x48343314, 0x2245404c, 0xbabc31a0, 0xb9b31c3b, 0x94342934, 0x3b3cacc3, 0x3a23881b, 0x93a2cddd, 0xa132a420, 0x355554dd, 0xddb4920a, 0x24676777, 0x6534b8bb, 0x14666595, 0x58aca8ac, 0xbedeffff, 0xfdd0b238, 0xdeffffe5, 0x54444444, 0xceea6765, 0x492a3534, 0x306653b8, 0xbba93a13, 0x4554a999, 0x9ababbb2, 0x45033338, 0xb3c1ccc4, 0x81bc2c24, 0x33321bc9, 0xbbda3aac, 0x1ab9102b, 0x34bc830b, 0xc2b13b9a, 0x33bc3bb1, 0xbb3a2393, 0xbccacbcd, 0xbcdccbcc, 0xcbcdbbcd, 0xcadccbcb, 0xbdb31b0c, 0xa3ca2cdd, 0xbdcbbcbc, 0x9b4c10bd, 0xcd9b9ec2, 0x30294400, 0xbcddbb12, 0x34443533, 0xdcca3cdc, 0xa9323433, 0xbccb49ce, 0xed5438ba, 0xb0dccc2c, 0xddeccdd8, 0x8cccb985, 0x3deddec0, 0x83584335, 0xddedcc54, 0x445442cb, 0xeddd2553, 0x55555556, 0x67766654, 0x25566667, 0x77776663, 0x3423545, 0x58535448, 0xaccbceee, 0xfeedcbbb, 0x19b434cd, 0xdc0cc8cb, 0x3335558c, 0xddbccaaa, 0xa4566665, 0x4013ac30, 0xc3567677, 0x655342ac, 0xccbbedd4, 0x65542221, 0xdeffffff, 0xed98002b, 0xdefeeec4, 0xcba4a3cc, 0xc1666655, 0x3db233b3, 0x466651c9, 0xbac83943, 0x554ac8ca, 0x3b8bba44, 0x34b3431c, 0xccb22243, 0x24c8bbb0, 0x1adccc3, 0xa403b8c, 0x4baccc3, 0x18bb9d84, 0xcc33b93, 0x3b3b1b8c, 0x29babb3c, 0x3c88b114, 0x35544380, 0x1b929cdd, 0xdb55533a, 0xbc243bde, 0xd4654548, 0xcb555bee, 0x16656653, 0xcb456aee, 0x565333b3, 0xc82466ed, 0x660cddba, 0x81467ee, 0x64cccbba, 0xc45567ff, 0x68539c43, 0xc45666ff, 0x5c5da830, 0xc35566ed, 0xcdcdc42a, 0xddbb45ad, 0xccdcd2d8, 0xddad943d, 0xdd8c35cc, 0xccccc433, 0x234b45a8, 0x11c3b325, 0x4abc343a, 0xc8cddc3b, 0xbca2448, 0xccccc404, 0x49cd23ab, 0xccbc9334, 0x33aaccc0, 0xca9ca0cc, 0xba1abc30, 0xb1bcccbc, 0xcdcc3b3b, 0x8babcdac, 0xccda3043, 0x3acb8c42, 0xc3b492cc, 0xbc908bcc, 0xdddeddbc, 0xa332accc, 0x354bbcb2, 0x3444cdde, 0xe4655552, 0x2556546f, 0xffed2341, 0x35556677, 0xeeeddddc, 0x444cb567, 0x63dddeed, 0x438ded26, 0x65c1bedc, 0x45533cdc, 0x54422bcc, 0x85545538, 0x335243ac, 0xb9083449, 0x385424a2, 0x2322aac3, 0x4a4303a3, 0xa9234054, 0x4333448b, 0x455bddda, 0x45655544, 0x442deed5, 0x65554445, 0x43cefd25, 0x64555455, 0x53dffd56, 0x644a43a4, 0x44dffb66, 0x3eeeedd1, 0x51dee465, 0xdddcddc0, 0x44ded55b, 0xd031bc80, 0x13bdb14a, 0xdcddbcbb, 0x429add0c, 0x244c4cbb, 0x49a38c44, 0x4b3c2b44, 0x34824ab4, 0x4cb25b32, 0x444bdb92, 0x42555344, 0x4343d4bb, 0xa4554354, 0x5843bb9b, 0xbbc51455, 0x455435c4, 0xb1233445, 0x5548cacb, 0xbdb31545, 0x43424856, 0x65cdb282, 0x21498c57, 0x69fed144, 0x433bde47, 0x6ffe5554, 0x454cee47, 0x5ff66655, 0x8343dea7, 0xbfc65552, 0x34958ec7, 0xdf651edd, 0x43aa5c96, 0xd36bddd0, 0x10088c43, 0xc32cba9b, 0x923402a9, 0x13cb3444, 0x134a1b33, 0x40b4b322, 0xb99c9c33, 0x2240334a, 0xaaab2b39, 0x2c3bcbc, 0xa3282b10, 0xc3a1acc0, 0xa3440032, 0xbb2bbb2, 0x4a9aab08, 0xa2193832, 0x93bc3aab, 0xc213b04a, 0x43524303, 0xb3922454, 0x4432ba08, 0x412b2434, 0xbb0b91c, 0xca9ca345, 0x4110b02a, 0xbc04b351, 0x42bc1bb2, 0x543aaa3a, 0x289c3341, 0xddcbcdc9, 0x51940dd2, 0xa44d4bb3, 0x2853cdb4, 0x53044443, 0x2cc56665, 0x4c33a331, 0xbdffec34, 0x3b4ac833, 0x1dffffff, 0xbb823bcc, 0x12deffe5, 0x5333b093, 0x35767766, 0x52254233, 0x5466543b, 0x1543a14, 0x5441a1b3, 0x5014843, 0x5444c004, 0xa3c44424, 0x412432b0, 0x2ccc2434, 0x218bcdcd, 0xddedd344, 0x43deeeee, 0xeefedab3, 0x80dfffff, 0xefeedacb, 0x22beefff, 0xffeed4b1, 0x55464dff, 0xfe130349, 0x555545dd, 0x56655455, 0x331e2356, 0x66445244, 0x53ddc81a, 0x43c8c915, 0x542541ad, 0x9cc4bcb5, 0x584a040b, 0xab09ab45, 0x34543b55, 0x55444554, 0x35454344, 0x344b5545, 0xa444443a, 0xc0314455, 0x44415542, 0x33045555, 0x54455655, 0x55656545, 0x41444a1a, 0x3222c334, 0x3248addc, 0xa3454334, 0x442bdddc, 0xc5563443, 0x23349ddc, 0xdb154333, 0x255565d, 0xb3555cc0, 0x835564ff, 0x8665adec, 0xbcdfffd, 0x7534dddc, 0xaceefd56, 0x63beddcc, 0xadd36544, 0x4acc543a, 0xa3435b80, 0xb0804633, 0x43cbbcdc, 0xda2b540a, 0x32c330a2, 0x422b4cc0, 0x44323a43, 0x32d30d94, 0x455114ab, 0xa2b2bcb3, 0x4152553a, 0xc3abdb43, 0x3312cc8b, 0x3aba3044, 0xdcaccbc2, 0x333542ab, 0xccc82846, 0x5565454a, 0x9bb05555, 0x55455532, 0xca355553, 0x45555558, 0xb4556655, 0x5c14348c, 0x35666654, 0x8554cdd, 0x45666bc5, 0x6665cefe, 0xcb033d46, 0x65deffee, 0xddd35155, 0xceffeeed, 0xdec235de, 0xeeec459b, 0xddcadeee, 0xdd94454b, 0xdcbcddca, 0xb424444b, 0xccbbbdcd, 0x80042b0c, 0xda2bb0bc, 0xccbcbaca, 0xabc3c43d, 0xc8dcddcc, 0xcc8dcccd, 0xccedcccc, 0xacccccc, 0x8caba9bc, 0x2c3b3bcd, 0xcc31abcb, 0x8bbb339d, 0xd44cc149, 0xc83c234b, 0xdbdbdb44, 0x8442433a, 0xacb29434, 0xb53844ab, 0xdcdc3344, 0x234454cb, 0xbdd42354, 0x94543dd5, 0x4d255555, 0x9dddef17, 0x5dcb1438, 0xcdeed577, 0xcebdccdc, 0xdddc2675, 0xed3c9cdb, 0xbcc43565, 0xccccc2cc, 0xb5455565, 0x4cbc94bc, 0xb24b4555, 0xa8039abb, 0xbb339555, 0x5542933a, 0xcc093554, 0x444440c9, 0x4322b0c8, 0x41289932, 0x40b9bcdc, 0x3493cda8, 0x32cbaab4, 0x5565bddd, 0xaa320534, 0x55654bec, 0x9c8555cd, 0xc5665cdd, 0x1924cede, 0xc76654dd, 0x2cccecce, 0xe67655dd, 0xb433bd, 0xfb5664dd, 0x545530dd, 0xe56653dc, 0x422b9cdd, 0xb5660dbc, 0xb8dda2a4, 0x4449cd18, 0x4cc34b3a, 0xdeddd913, 0x1354444b, 0xdb1cc344, 0x25548a2d, 0xdc4bd2b4, 0x3554483c, 0xdb034531, 0x3444333c, 0xb5443324, 0x9cccc9dc, 0xdccdcbc9, 0xaacccdad, 0xb3cdcdbc, 0xccdcdd2d, 0xccdcb0ac, 0xbcccdcbc, 0xbc34cc0b, 0xadd2cdcd, 0xdcdca3ab, 0x9decdded, 0xdcc18dcb, 0xbcecdcdd, 0xddd8dddd, 0xcdcdded, 0xeeedeeee, 0x35540dee, 0xddeeeeed, 0x56676665, 0x65555bdb, 0x56667777, 0x77666664, 0x43545556, 0x66676664, 0xbbcdeddc, 0xd0456665, 0xbccbbc1c, 0xcbd35544, 0xc2435545, 0x5554533c, 0xcb194445, 0x55453abc, 0x45355555, 0x55443542, 0x43455554, 0x3c9a3445, 0x44555345, 0x4acccc01, 0x43543444, 0x93cccab4, 0x45323553, 0x32432443, 0x42444555, 0x56556666, 0x403bc415, 0x43455665, 0x3ac8d423, 0xbbbb3234, 0x1ac49425, 0x8b5ccedd, 0x9ddbbb0b, 0x4c3beeec, 0x9cddddcb, 0x455dfedc, 0x1accddd3, 0x54affeb3, 0x2303acca, 0xa3effda2, 0x93553b31, 0x3dffeda1, 0x94240354, 0xceefeb22, 0x244044cb, 0xddeeda44, 0x555484bc, 0xdccc2444, 0x543bcdce, 0xeeeedb45, 0x43cdeefe, 0xffffdda2, 0x53deffff, 0xfeedbdb3, 0x4ceefeca, 0x355655b1, 0x3ceed566, 0x76553433, 0x4de24465, 0x4cb34545, 0x3cb5435d, 0xccc33545, 0x53242c3c, 0xcc823545, 0x5454234b, 0xcdbbbbb3, 0x45b53843, 0xadcc2dc3, 0x3432c134, 0x4c93b2a5, 0x4444109c, 0xacc03454, 0x3444bcbb, 0xca335556, 0x44443a32, 0x33b45655, 0x45455555, 0x55555654, 0x2442483b, 0xcc0b438b, 0xb442444b, 0xcdcdcc30, 0xa4453355, 0x5dddcd9c, 0x334543b3, 0x62dcded8, 0x245bcb35, 0x6538eedc, 0x311c834c, 0x3355eecc, 0x402a49dd, 0xa675ffd9, 0x840c3dec, 0x666dfecb, 0xa4912da4, 0x558fed48, 0x34bbb455, 0x41edb553, 0x44a05545, 0xcdd35552, 0x555052bb, 0x13b55412, 0x464032b4, 0x4cca4ac3, 0x45552b0a, 0xcddca9b9, 0x13554442, 0x24843c12, 0x32433543, 0x23a32302};
//first channel is topmost bit

// Layer: L2
// Quantization type: 4bitlog
uint32_t L2_bitperweight = 20;
uint32_t L2_incoming_weights = 64;
uint32_t L2_outgoing_weights = 64;
uint32_t L2_weights[] = {0x44e02d43, 0x44ddedcc, 0x455d9c1b, 0xb0e381c5, 0x34dc8c2d, 0xdf43cd4d, 0x4c5644c5, 0x9abc535e, 0x6e4e4d46, 0x8e42c242, 0x34c5392d, 0xe43ec34d, 0xbb4bd445, 0x543d5c3f, 0x3f455642, 0x5c4b5dbc, 0xcd45b4bb, 0x44cc6d55, 0xd3ad4555, 0xceda69a2, 0x2dbe5d2d, 0x4df3e304, 0xa31cb344, 0xb3d9d532, 0xc4d62613, 0x36665c6b, 0x55cc253, 0x4ba81c4e, 0x143dcdc5, 0xdfd63052, 0xd3c34b5f, 0xdcca44dc, 0xa45d4d43, 0xc95d65ce, 0xdee4a32c, 0x334563c5, 0x4c5522e5, 0xdd454b4a, 0x5acebd25, 0x485b4e03, 0x1ce2335c, 0x32c35edc, 0xb5016255, 0x3ed45c58, 0xd545db5c, 0xae5ea64, 0x50b3b86c, 0xa42dc53c, 0xec35d619, 0x84358d1b, 0xb56ebcc1, 0x43a43a54, 0xdc44df23, 0x5e452b55, 0xc2d3cd56, 0x4c0ab45e, 0xc51c5d5d, 0xc464d4b9, 0xedb5d84e, 0xb5445d22, 0xbd3c43ca, 0xea3c4da9, 0x6b4e9c34, 0xb554de50, 0x2b3c2424, 0x93dfabde, 0x45424244, 0xdcd93aeb, 0x54355c58, 0x495819dd, 0x4da038e5, 0x6e4e483e, 0xb8dc8555, 0x4ced5ee5, 0x352a565c, 0x1ffb33ed, 0x51b24c3d, 0x39cbd3dd, 0x4bdb3cee, 0x565dc2c3, 0x3d56ebeb, 0xdb354533, 0xdbe1a555, 0xd6b454e, 0xd2ecb2c4, 0x41ecedb4, 0xb46cdde2, 0x3de549cb, 0xccc9b5a4, 0x49eb6c5b, 0xe1832559, 0x9eac34ac, 0x4bde5cbc, 0xded4d3cc, 0x44c0c1dd, 0x55e2d5ee, 0x144e6e34, 0x4d54b4c5, 0x8ddc54d3, 0xda4c382d, 0x5421dacc, 0x34ec3ace, 0x9e3d2cbf, 0xd649c5d8, 0x243c8b62, 0x50dc51e5, 0xdbc344a1, 0x4fe53ce5, 0x5bc4534d, 0x5cd4d1ea, 0x4a4c42f3, 0x2942d534, 0x45c51449, 0xe63540c3, 0x2a4ddcb3, 0xe3bc4b52, 0x4b54dc42, 0x2943ddc5, 0x3dae53be, 0xe15b1b38, 0x6ddeae34, 0x484529b4, 0xc33d42e3, 0xd9ce955d, 0x4b944d15, 0x546ca3d4, 0xcc5ad6b2, 0xd45ec5da, 0xbc54cac5, 0xcb56153c, 0xe03cab84, 0xae149c63, 0xc34e4c0a, 0x1bd4dde4, 0x3b3d4acc, 0xcbd55532, 0x55ca5ccd, 0xc55ed04c, 0xd33ddec4, 0x3235c4e5, 0x5b664915, 0xd555acdc, 0xb5e54c4, 0xec43eb21, 0x54cc5512, 0x53338c5c, 0xa7cecbe0, 0xeb3445b3, 0x5cdcccca, 0xaddd0ec3, 0x4db5d6d5, 0x2eca463c, 0xba34e454, 0xd5866c5d, 0xc3c44944, 0x3d305c6e, 0xe5cde4a8, 0xcbdced6c, 0x3b552a6c, 0x5ae5a4db, 0x5b52ed15, 0x2dee55e9, 0xddad5916, 0xbd3534e4, 0x46c6bdcb, 0x4de3aadd, 0xb8ad24e4, 0x4d1ac64b, 0xcc83d95b, 0x35c0c911, 0x635545bd, 0x624ccc2c, 0x5ccd45e1, 0x5bda5cc6, 0x17e2cdbe, 0x3d305dd9, 0x3ae64645, 0x3ddd3ead, 0x346d1203, 0x2ccb8bce, 0xba555c4e, 0xb4b33622, 0x44214445, 0x585e4e3d, 0x56635cd4, 0x5eed554c, 0xebe4d1c1, 0x4435b0e5, 0x64426b44, 0xc4c5bc1b, 0xd55e43d5, 0x4cc4d453, 0xd5c3444d, 0x1596edc5, 0x352a4205, 0xabc3dd56, 0xb3e9bc4d, 0x41554ce4, 0xb5b4ed8a, 0x363bd561, 0x445c9b44, 0xbc5e164d, 0xeb35d56e, 0x5543ccec, 0x4b5cc552, 0xa5b54d13, 0x340e54a6, 0x5b54dd52, 0x5e4cddd4, 0x9843a434, 0x4c45b304, 0xd43dc53c, 0x3dd6a6d6, 0x4c0d514d, 0xeddbd58d, 0x1d5455e2, 0x5dddc5b5, 0x4c05a49d, 0x5d5b8be, 0xb4dec5b5, 0x68463ab5, 0xee36660b, 0xc4d5a59b, 0x336e8bde, 0xe55cdd4c, 0xc2e04be5, 0xccde45c2, 0x6ee44094, 0x34c58d1e, 0x355d8c45, 0x55b5aed1, 0x35d50b54, 0x284cc45c, 0xc4edec4e, 0x53283b44, 0x9ca44d55, 0xe481c203, 0x5caeb78, 0x54553479, 0x48e1e48a, 0x55ce6d8b, 0x53248cca, 0xb2cc4cab, 0xab34c64d, 0xecb6e3cb, 0x3b5464dd, 0xcb65b625, 0xcc4dbb3d, 0x4aa926cb, 0xc2c4e566, 0x5bb4e45d, 0x965cf439, 0xbe4dd34c, 0xd2cb554b, 0xe00504c4, 0x53c433c4, 0x52ddcdd3, 0xc4aa43dc, 0x3cd4ca4e, 0xd48c56b8, 0x4eb4d4bc, 0xe5332cc4, 0x5c3b4545, 0xc64c6d43, 0x9cd5c646, 0xcdb32cd1, 0x1563c443, 0xd44e43de, 0xdb451c25, 0x255dc5ed, 0x4d3d52be, 0x40cb4cc0, 0xd352b565, 0xa44dc4dd, 0xe4d95d3b, 0x4a54bdc5, 0x425c4d0b, 0xceb39bb0, 0x5cdd1c51, 0xd1bd3a2, 0xb5d55b63, 0x5455dec9, 0xdd4ccdbd, 0xc0e043c4, 0xcebdca4e, 0x2c44d1e0, 0x5d5a51d4, 0xbd513a54, 0xcd29b4f3, 0x3cebd315, 0x43dbcdd4, 0xb1a3cab4, 0xd9b44a5d, 0x5234d55e, 0xfda442c5, 0xddb5454, 0x6e3cd3c2, 0x5465d335, 0x32c54c59, 0x544dc64b, 0x5aed35d5, 0xddc45542, 0xd544e655, 0xcb5943dd, 0x3a6d5eb4, 0x5abeb5d5, 0x4dd5534d, 0xb29a41db, 0x3d4d14ae, 0x808b334d, 0x5bc4444d, 0xcbd36e45, 0x6d4be926, 0xede55538, 0x24e5b552, 0xe648a524, 0xb226c45d, 0xcdbc5c40, 0x5c5c6404, 0x4334dc08, 0xbd3be24c, 0xe6424bbb, 0x8182a5cc, 0x641c5434, 0xdad4e58a, 0xc54d0446, 0x57d3dd44, 0xca405dd4, 0xc6fe3633, 0xa1dd4e4d, 0xc66cdb01, 0x38b54b59, 0xcb05dc6d, 0xcb3dcd53, 0x45a6c344, 0x4b0e553c, 0xd3d4c69e, 0xc45acde8, 0x45a45e54, 0x3edc3dd9, 0x5515a4ea, 0x43d0c5b1, 0x92d5ddde, 0x558c3bd4, 0xd1d5acae, 0xf6ddedcd, 0x944aacc5, 0x88b2cc33, 0xd805d8ce, 0x44edd546, 0xc5d2dc5e, 0x653b5534, 0x3c515ed3, 0x34caf544, 0x5dc43ee8, 0xb543d25a, 0xcebc4439, 0xab2acab4, 0xdc4bc2b5, 0xc4c26054, 0xc4414dec, 0x455e652b, 0x4dcacc5d, 0x5e4154e4, 0x5d643343, 0x1235dcc4, 0xd0bc54de, 0xdcd54d34, 0xd446659c, 0x54cb4203, 0x4d5f3bc4, 0x3da542c5, 0xc45e5f40, 0x4ea4d423, 0x154a6e4e, 0xfad8034d, 0xcc6931eb, 0x4364d555, 0x5d4bdacc, 0xb539e444, 0xcd0edbca, 0xa5bb4240, 0xeba8bb4b, 0xd4c545a0, 0xe3034e2d, 0xd453e3b5, 0x3ddd58ec, 0x3445be35, 0xdd55ec5c, 0x546d5cc3, 0xbcda4e2c, 0xbc54ad56, 0x4914c4da, 0x13bef4d5, 0x3139dfc5, 0x30b9ebf5, 0x8584544c, 0xcc25c664, 0xd2ce8dd6, 0xcab45555, 0x4a454526, 0x5053464d, 0xc35d3ac4, 0xc54ac133, 0x54a05d13, 0xeee05433, 0x283c5456, 0x884de45e, 0x4e169545, 0xc44448c9, 0xc45dc665, 0xde3d5ad4, 0xd553bde4, 0x534dcbe3, 0x6cad41cd, 0x42d8a5ee, 0x23a584fd, 0x844dd35c, 0x9334ceb3, 0x6544de35, 0xefcd44c4, 0x143da124, 0xe53bdc54, 0x53245534, 0xc5d6354d, 0x3b23ecc6, 0x455e5cdb, 0x44c5cd4e, 0x1bc3de4d, 0x4d226bcc, 0xccd5ad2d, 0xe54d3c6b, 0xe265e5d5, 0x4444d53c, 0x4c2f2eb5, 0xb5452354, 0x3cc23e44, 0x5cb5cc43, 0xd4c24d55, 0x3ed224ac, 0x92eee4ac, 0xac24dc55, 0xeae62254, 0x245dccc4, 0x4ce93543, 0x614345ee, 0xdcd0a9dc, 0x3545d4d4, 0x83ddccae, 0xb45453bd, 0x3cc6a45b, 0x5c834c33, 0xb4bdc6dd, 0xbcd5cc55, 0x36e0e82e, 0x65953cd5, 0x4e2354d6, 0x5dde4430, 0xbc52a3a4, 0xedce42b5, 0xaa5abdd5, 0x234da5cd, 0xcedb45dd, 0xdc3bd6e5, 0xe2456a9e, 0x59b4c445, 0x3deb4cd2, 0x4325dd53, 0xe44ea02d, 0xd4ccc55d, 0xdeccbe6e, 0xc61b2825, 0xc3c4b4cd, 0xe6bcec53, 0x5453d2d0, 0x5339c5e5, 0x5e84c2e5, 0x53243be6, 0xb6cedcee, 0x944958c3, 0xb2055844, 0x40de43cc, 0xecc3503b, 0x3c045be5, 0x485e654a, 0x5dacd4ec, 0x5cce52e5, 0xbe254d35, 0x5d3552d4, 0x3dcbd3a5, 0x5b4d1d44, 0xe4ceb55e, 0x4cb43c4d, 0x5cadb43e, 0xde553532, 0x9cbc448d, 0x4832cdb4, 0x325dd454, 0xcbbdde33, 0xca40d4d4, 0x54588445, 0xdd654e44, 0xab0d44ec, 0xde04445b, 0xb4b0d4dc, 0xacd16cd5, 0x4452e5ed, 0x4ce166a4, 0xc5da9bbc, 0xcc43e464, 0x5495dc34, 0x93dc5919};
//first channel is topmost bit

// Layer: L3
// Quantization type: 4bitlog
uint32_t L3_bitperweight = 20;
uint32_t L3_incoming_weights = 64;
uint32_t L3_outgoing_weights = 64;
uint32_t L3_weights[] = {0x4c4e5530, 0x13dbc4cd, 0xd4dd53d3, 0xc555123d, 0x4c5ecc3a, 0xbd23d55d, 0x42cbbe5b, 0x10454c34, 0x4cb544cb, 0xbabee415, 0xc3d56bb3, 0xd546e453, 0xbe5dd6d5, 0x9cc0c54d, 0x504c0dc5, 0x55d44854, 0xdbdb4d55, 0x143bdd44, 0x545d4114, 0x3d31e354, 0x1c53353c, 0x34d45494, 0xab435b5c, 0xdcc4a4dc, 0x5b401d55, 0x3ad6b45a, 0x1c95e6cd, 0x35cc8e4e, 0xdc36cc49, 0xbb3d845e, 0x4a55e44e, 0xb5840d4c, 0xd53d0b13, 0x44b5b545, 0xdd4d554c, 0xcc5c5c44, 0x480b3551, 0x43423534, 0x3edb231c, 0x34d535e5, 0x44549335, 0x648cdadb, 0x54583d6d, 0xd33dd2d3, 0xc53bccd4, 0xb4b2eb53, 0xca46dcbc, 0xe53bc592, 0xbacceee2, 0xc4b52dcd, 0x354dd424, 0x405ac45, 0x1ccd3cd5, 0xcc355ad4, 0x214e5a92, 0x4d34ee4e, 0xc5ce1d55, 0x4ddeba88, 0xb33e5b41, 0xbd5bdc4b, 0x5c33565b, 0xcdd5522c, 0xa44e5d4c, 0xcdb4543c, 0xe11b25d5, 0xd34e546e, 0xdee4bbee, 0x45bcc5d4, 0x6a1cdc66, 0xbdef46b5, 0x33bacc0a, 0x633cbc34, 0x4c449445, 0x290e340d, 0x440c6d45, 0x45bdc224, 0xdc4dcdc4, 0xd293cd5c, 0xd56ac5cc, 0xdd5bd2e4, 0x53554b03, 0xbc5fa43d, 0x545c4cbc, 0xcc4dacc4, 0xed48525a, 0xd4bdb554, 0xfd44c525, 0xd54655d2, 0xdd424c3d, 0x4044ede4, 0x4db4a4cc, 0x594454e3, 0x4db4e6dd, 0x6445ddd3, 0xb4344c43, 0x54d4dd55, 0x966ecc4d, 0xb483b5cb, 0xa22d6dc1, 0x4514c140, 0xe262ebe6, 0x9ecacdce, 0x59514036, 0xdcdd4ebd, 0xc5deeeae, 0xcb44c3d5, 0xe5bbad42, 0xd546cdb3, 0x54c3bdc4, 0x4ced4dc5, 0x4ad95e41, 0xb5fcdedd, 0xdc55c944, 0xb224e05b, 0x8cc3c5bd, 0x103453e5, 0x344229bc, 0x53a333db, 0x4cc44c4d, 0x53c5ae54, 0xddadeeac, 0xd2e5d4d3, 0xc44d4565, 0x25d5cd41, 0xacd5a4c9, 0x5dc44c85, 0xbb6e54a4, 0xc0d3dbcb, 0x4533d4cd, 0xc1434345, 0xccc2e3db, 0x5d04d45a, 0x4ec94555, 0xbb4c42ed, 0xb9e2c3a4, 0xbda0b5ed, 0x2c2ddade, 0xe54644c5, 0xdb9dbda4, 0x53a45e44, 0x24d5ece4, 0xcb5bdda3, 0x4edbd5e5, 0x3bd4d303, 0xd5435ded, 0x5a441c46, 0xc451bb4c, 0xce4de455, 0x554b2442, 0xe3ed34b5, 0xcba4bdcb, 0xd52455bc, 0xd5bdec39, 0xbccdbb3e, 0xce33c3cd, 0x3bd832bb, 0xc5d69d68, 0xd3bf5b51, 0x5cce4469, 0x5d5d8add, 0xd5c444e5, 0xde5fda45, 0xd255bca5, 0xd54e45b5, 0x5acedcd0, 0x45cab5e5, 0xdd934edd, 0x21ecdbc5, 0x344daede, 0x64d335fc, 0xc52e5e54, 0xd5452e2d, 0xe34bbd94, 0xcb1ce26d, 0x8e4345c5, 0xe5dd5adb, 0x4ec5944a, 0x4ddd5d2c, 0x55a54454, 0x83c4b43b, 0x149446dd, 0x44459d9b, 0x3652abcd, 0xb333c44c, 0x5a34e24e, 0x2d0b2dc4, 0x4c35ab5d, 0xbdc4c6eb, 0xd5ac5ec5, 0x95c4bc64, 0x46ea432d, 0xe85de515, 0x4d35d3dc, 0xcd53edcc, 0x4cd5abbd, 0x8d4444cd, 0xeddec4eb, 0x3556ddec, 0x35da5bd3, 0x52dddeba, 0x53b4d05d, 0x545d2431, 0xcd64c56c, 0x44dedd5d, 0x56c4eb44, 0xd51dcd5d, 0xba3c36a8, 0xed9cc1dd, 0xd24d4bcd, 0x54a24535, 0xd13c44cb, 0x3c4d6dd5, 0x4b53d443, 0x3229ad95, 0xddcad0cb, 0xbc4353c1, 0x55a4b444, 0xbd5e4db0, 0x6e45ccdd, 0x3ed3a5e4, 0xb9545143, 0xe9ed4d94, 0xbbbcc434, 0xdc4d53da, 0xb5e95c5d, 0x6bcdd4d3, 0xfdbdd4d0, 0x5c4dc334, 0xc5c41eb2, 0xe9de4a50, 0x5dde546c, 0xda5d53de, 0xc5dd50b6, 0xc4c4ed34, 0xd5d4d44a, 0xc566d342, 0x5055bbd5, 0x5b89e4b9, 0x8c6ddc0d, 0x44d4bb15, 0x4e2a445a, 0x5ecd8c9c, 0x4b5d455b, 0xb2bebb42, 0xee4d5bce, 0x45adca64, 0xd254435d, 0x3ec324c4, 0x25dd3dce, 0xab555dd5, 0xc2cd5c44, 0xa484ddc5, 0x49c24445, 0xcdd550b4, 0xc94e48c5, 0xddcc65de, 0x43e55b55, 0x6f3e3ead, 0x51353fc3, 0xc0eed2e5, 0xd3444e24, 0xe4de4cb4, 0x58514455, 0xbd4945cd, 0x6c034434, 0x4c1dcc4c, 0x4e54b35b, 0xa5b5c233, 0x5bd342d5, 0x55ccc86c, 0xd854d3ce, 0xcb05ccc6, 0x3d4acb51, 0x5dc455fc, 0x3ec56bc4, 0x55e4523a, 0xbe4d3b3d, 0xdeed4b45, 0x5abb4da5, 0x5e4c5dc4, 0x541c94d5, 0xe5c58464, 0xddd3e4bc, 0xd456cebd, 0x4ad4da44, 0x335dd5be, 0x2e3cb4db, 0x4dc4ce34, 0x4cd86db6, 0x55d3cdee, 0xe44fc25c, 0x3eb5beb5, 0x454a534c, 0x954a3524, 0x2dbb5445, 0x45455389, 0xeddd4db5, 0xd5d6bb5e, 0x35ded3dc, 0xb4d45ed8, 0x63c3545c, 0x5d33ccdb, 0x1ce0e4ce, 0x4d40daa5, 0xde11dd94, 0xcc440455, 0x545b46d5, 0x643cc244, 0x2dd5d5cb, 0x1bb94bd5, 0x28541045, 0x2dc6e54e, 0x2f6ac2dd, 0xd455c4d9, 0xa6c3c49d, 0x426d43c8, 0xccd140db, 0x4456ccec, 0x45d385e8, 0x31bdc9a0, 0xe4de6435, 0xd4d4ac5d, 0x2523e2cd, 0xd595bb5b, 0x56c5a3, 0x6ac424bd, 0x5c89ba4b, 0x3bd5ca65, 0xc9dceece, 0xc5a5dcac, 0x555d5524, 0xc3a3d58a, 0xcd5dc523, 0x3d251bc4, 0xb56a4b55, 0xcbe4ea5f, 0x642cd5be, 0x55d3b3dd, 0xc4bbe59e, 0x5cd2cd4e, 0xa355d523, 0xa455aa4d, 0x4522c2c4, 0x83bc3c5e, 0xa55235d3, 0x4c54ebdc, 0x5e2bc5cd, 0xdb555389, 0xcb54545c, 0x5c4d4eb0, 0xccdbad3b, 0x42dc4ddc, 0xcb66d6ce, 0xe3654255, 0x933c4c43, 0xb42d54bd, 0xe524c4d4, 0x3544dcab, 0xdd2644d3, 0x3acad2d4, 0xe65354ed, 0x63dc3ad4, 0xe4cb532c, 0xe54bd24c, 0x35444c0b, 0x3bc54d85, 0xc3c35dd2, 0xd5cd53dd, 0x5345bade, 0x55c5c8e9, 0xeb493d5b, 0xdd54cdd3, 0xd5d9d3a3, 0xdb5de151, 0xde46dcea, 0xa64c33d5, 0xcd5eb54c, 0x6c5adba4, 0x45ddc264, 0x4dec544c, 0xe24eadec, 0x5295ddec, 0x445adcde, 0xddcd6e45, 0x3e010c40, 0xcccd644d, 0x4b5e6ce5, 0x23cb9c40, 0xd4c4e08, 0x1de45545, 0x2cb442ac, 0x384215d5, 0x9c4eb33e, 0xeb83432c, 0x3bc4e4c9, 0x4de540ac, 0xdbe45c5d, 0x41541edd, 0x54dbb491, 0x4e5dbc4d, 0xc4b6bcc4, 0xd43b6d44, 0x6c35b4de, 0x4ec3dbb4, 0x33ddb5bc, 0xecdebc05, 0x1d6004c1, 0x4d4de5ef, 0x2b1d4ac2, 0x42bd24d3, 0x9cde5e44, 0xcb4e3434, 0xe45e5e42, 0xdeedb445, 0x3cc82dc4, 0xd43d55d5, 0xc2cdc4d5, 0xda4c53ce, 0x5dd4de5d, 0xb2d7e305, 0x4ddc2395, 0xebbc4ed0, 0x524c44e5, 0x4442cede, 0x3b45b44b, 0xedddec44, 0xc854ccb9, 0x45d5b4e4, 0x6cdcdcd5, 0x56d36bd4, 0x22136b34, 0x46c9ed63, 0xbcb8db5e, 0xc5325355, 0xcd3bedde, 0x1acb8e4b, 0xd5c5dde3, 0xc23dddad, 0x5ee5c444, 0x43dbcc85, 0xed4dd3c, 0x34d53c01, 0x2b5d32b3, 0x53c438c3, 0xdb5bad, 0x391c2d25, 0xb9114c5a, 0x3dc5dbde, 0xcbbe4b64, 0x54d5530c, 0x43dd35d5, 0x34e2ae5d, 0xb305de3c, 0xbc50c4ce, 0x5ec4c963, 0x3d55dcbb, 0x2bc5c31c, 0x4e5d5c5b, 0x5de55dcb, 0x5d3655c2, 0xbced68bb, 0x3dcc4293, 0x5db5494, 0x3e4dd33c, 0xcc5dd3ed, 0xe54653b5, 0x31cab304, 0x4d5e59ad, 0xb5ae8d54, 0x3442cdcd, 0x42c5d5ea, 0x4538d4b4, 0x65c625c4, 0xee5ded24, 0x4d35e95d, 0x83844345, 0x43dbd3d4, 0x853ac542, 0xf15484dd, 0x36ccddb2, 0x4434c52e, 0xca53c2dc, 0x40c50deb, 0x4cac45b4, 0xe5ad5dc3, 0x4454dced, 0x55e5cbb3, 0xd8dc4c4, 0x4555d45e, 0x54e545d5, 0xdcb8d523, 0x54bddb4e, 0xccd5c343, 0xa45d1e4d, 0x33dd4dc, 0xedbad4cc, 0xb25603c8, 0xdc5de4c2, 0x5c444de5, 0xcc8333c5, 0xfd5d04c2, 0xc525c535, 0xeeb25cc5, 0x3c5e6af5, 0x2b4e5b6d, 0x4dd1a522, 0x4de53cd, 0x43dc5d5a, 0xcd2ba541, 0x4e54b3bc, 0x402be4cd, 0xce484456};
//first channel is topmost bit

// Layer: L4
// Quantization type: 4bitlog
uint32_t L4_bitperweight = 20;
uint32_t L4_incoming_weights = 64;
uint32_t L4_outgoing_weights = 10;
uint32_t L4_weights[] = {0x54dd92ed, 0xa44d5cde, 0x2bddd5be, 0xec3bdd5d, 0xe25ddadd, 0xdcbcd3d5, 0x5dd5debd, 0x4dcdcc54, 0xd3cdce4d, 0x5cd05625, 0x35e266d2, 0xadddc5d5, 0xc5c4d4dc, 0x44cdc32c, 0xeddc444d, 0xdcd5cbdd, 0x54b55ded, 0xbd4bc4c, 0xccc4ed2d, 0xdd45d44e, 0x4cc53683, 0x5cc5cdbc, 0xcbaeddcc, 0x5cbddeb4, 0xc4d3decb, 0xcca5bd4d, 0xecc2e52, 0x6dcccded, 0xcbcdddb5, 0x3a454dc5, 0xc58204db, 0x34455c53, 0x1d4d4dc5, 0xad0cdddd, 0x545adbcb, 0xed544bd5, 0xcdddad4c, 0xc3d3d5d2, 0xdd5b2cca, 0xd2aca3dc, 0xddd4c5ed, 0xc54db3c4, 0xdebd2d45, 0xc5c5db34, 0xd5cddcbd, 0xdd3a5d93, 0x2d1ed2cc, 0xd2c54549, 0xcbd236de, 0xd23dc4ed, 0xeb5c35ed, 0xd43a24cd, 0xd2dc5cdc, 0xdd5a056b, 0xbdd4ddee, 0xbe4ddbcd, 0xc85dbc55, 0xc4d5ce44, 0xb1bcad4c, 0xdddddc4b, 0x2ca14c54, 0x46ccdded, 0x5cebb4c4, 0x3adccddd, 0xcba5ccd2, 0xcddc38db, 0x45c5bddc, 0xd50e4dcd, 0x3c44de92, 0xbd4c5cbc, 0xc5cdbb6c, 0x4d5d4503, 0x5c4ddc34, 0x4dcddbdc, 0xbbd4cc35, 0x4ab45d58, 0x50585cad, 0xeddebdec, 0x15535905, 0xd52c3ddb};
//first channel is topmost bit

