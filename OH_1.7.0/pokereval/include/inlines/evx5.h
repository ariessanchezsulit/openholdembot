/* This file is machine-generated -- DO NOT EDIT! */

/*
 *  evx_preamble.cfrag: the unchanging beginning part of evx5/evx7.h
 *
 *  Copyright (C) 1994  Clifford T. Matthews
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include <stdlib.h>
#include <string.h>
#include "poker_defs.h"
#include "evx_defs.h"
#include "inlines/evx_inlines.h"

static inline uint32
StdDeck_StdRules_EVAL_X5 (StdDeck_RankMask clubs, 
                          StdDeck_RankMask diamonds, 
                          StdDeck_RankMask hearts,
                          StdDeck_RankMask spades)
{
  StdDeck_RankMask ranks, flush_suit, three_info, all_pairs;
  uint32 retval;

  ranks = clubs | diamonds | hearts | spades;

  switch (ranks)
    {
    case 47:
    case 55:
    case 59:
    case 61:
    case 79:
    case 87:
    case 91:
    case 93:
    case 94:
    case 103:
    case 107:
    case 109:
    case 110:
    case 115:
    case 117:
    case 118:
    case 121:
    case 122:
    case 143:
    case 151:
    case 155:
    case 157:
    case 158:
    case 167:
    case 171:
    case 173:
    case 174:
    case 179:
    case 181:
    case 182:
    case 185:
    case 186:
    case 188:
    case 199:
    case 203:
    case 205:
    case 206:
    case 211:
    case 213:
    case 214:
    case 217:
    case 218:
    case 220:
    case 227:
    case 229:
    case 230:
    case 233:
    case 234:
    case 236:
    case 241:
    case 242:
    case 244:
    case 271:
    case 279:
    case 283:
    case 285:
    case 286:
    case 295:
    case 299:
    case 301:
    case 302:
    case 307:
    case 309:
    case 310:
    case 313:
    case 314:
    case 316:
    case 327:
    case 331:
    case 333:
    case 334:
    case 339:
    case 341:
    case 342:
    case 345:
    case 346:
    case 348:
    case 355:
    case 357:
    case 358:
    case 361:
    case 362:
    case 364:
    case 369:
    case 370:
    case 372:
    case 376:
    case 391:
    case 395:
    case 397:
    case 398:
    case 403:
    case 405:
    case 406:
    case 409:
    case 410:
    case 412:
    case 419:
    case 421:
    case 422:
    case 425:
    case 426:
    case 428:
    case 433:
    case 434:
    case 436:
    case 440:
    case 451:
    case 453:
    case 454:
    case 457:
    case 458:
    case 460:
    case 465:
    case 466:
    case 468:
    case 472:
    case 481:
    case 482:
    case 484:
    case 488:
    case 527:
    case 535:
    case 539:
    case 541:
    case 542:
    case 551:
    case 555:
    case 557:
    case 558:
    case 563:
    case 565:
    case 566:
    case 569:
    case 570:
    case 572:
    case 583:
    case 587:
    case 589:
    case 590:
    case 595:
    case 597:
    case 598:
    case 601:
    case 602:
    case 604:
    case 611:
    case 613:
    case 614:
    case 617:
    case 618:
    case 620:
    case 625:
    case 626:
    case 628:
    case 632:
    case 647:
    case 651:
    case 653:
    case 654:
    case 659:
    case 661:
    case 662:
    case 665:
    case 666:
    case 668:
    case 675:
    case 677:
    case 678:
    case 681:
    case 682:
    case 684:
    case 689:
    case 690:
    case 692:
    case 696:
    case 707:
    case 709:
    case 710:
    case 713:
    case 714:
    case 716:
    case 721:
    case 722:
    case 724:
    case 728:
    case 737:
    case 738:
    case 740:
    case 744:
    case 752:
    case 775:
    case 779:
    case 781:
    case 782:
    case 787:
    case 789:
    case 790:
    case 793:
    case 794:
    case 796:
    case 803:
    case 805:
    case 806:
    case 809:
    case 810:
    case 812:
    case 817:
    case 818:
    case 820:
    case 824:
    case 835:
    case 837:
    case 838:
    case 841:
    case 842:
    case 844:
    case 849:
    case 850:
    case 852:
    case 856:
    case 865:
    case 866:
    case 868:
    case 872:
    case 880:
    case 899:
    case 901:
    case 902:
    case 905:
    case 906:
    case 908:
    case 913:
    case 914:
    case 916:
    case 920:
    case 929:
    case 930:
    case 932:
    case 936:
    case 944:
    case 961:
    case 962:
    case 964:
    case 968:
    case 976:
    case 1039:
    case 1047:
    case 1051:
    case 1053:
    case 1054:
    case 1063:
    case 1067:
    case 1069:
    case 1070:
    case 1075:
    case 1077:
    case 1078:
    case 1081:
    case 1082:
    case 1084:
    case 1095:
    case 1099:
    case 1101:
    case 1102:
    case 1107:
    case 1109:
    case 1110:
    case 1113:
    case 1114:
    case 1116:
    case 1123:
    case 1125:
    case 1126:
    case 1129:
    case 1130:
    case 1132:
    case 1137:
    case 1138:
    case 1140:
    case 1144:
    case 1159:
    case 1163:
    case 1165:
    case 1166:
    case 1171:
    case 1173:
    case 1174:
    case 1177:
    case 1178:
    case 1180:
    case 1187:
    case 1189:
    case 1190:
    case 1193:
    case 1194:
    case 1196:
    case 1201:
    case 1202:
    case 1204:
    case 1208:
    case 1219:
    case 1221:
    case 1222:
    case 1225:
    case 1226:
    case 1228:
    case 1233:
    case 1234:
    case 1236:
    case 1240:
    case 1249:
    case 1250:
    case 1252:
    case 1256:
    case 1264:
    case 1287:
    case 1291:
    case 1293:
    case 1294:
    case 1299:
    case 1301:
    case 1302:
    case 1305:
    case 1306:
    case 1308:
    case 1315:
    case 1317:
    case 1318:
    case 1321:
    case 1322:
    case 1324:
    case 1329:
    case 1330:
    case 1332:
    case 1336:
    case 1347:
    case 1349:
    case 1350:
    case 1353:
    case 1354:
    case 1356:
    case 1361:
    case 1362:
    case 1364:
    case 1368:
    case 1377:
    case 1378:
    case 1380:
    case 1384:
    case 1392:
    case 1411:
    case 1413:
    case 1414:
    case 1417:
    case 1418:
    case 1420:
    case 1425:
    case 1426:
    case 1428:
    case 1432:
    case 1441:
    case 1442:
    case 1444:
    case 1448:
    case 1456:
    case 1473:
    case 1474:
    case 1476:
    case 1480:
    case 1488:
    case 1504:
    case 1543:
    case 1547:
    case 1549:
    case 1550:
    case 1555:
    case 1557:
    case 1558:
    case 1561:
    case 1562:
    case 1564:
    case 1571:
    case 1573:
    case 1574:
    case 1577:
    case 1578:
    case 1580:
    case 1585:
    case 1586:
    case 1588:
    case 1592:
    case 1603:
    case 1605:
    case 1606:
    case 1609:
    case 1610:
    case 1612:
    case 1617:
    case 1618:
    case 1620:
    case 1624:
    case 1633:
    case 1634:
    case 1636:
    case 1640:
    case 1648:
    case 1667:
    case 1669:
    case 1670:
    case 1673:
    case 1674:
    case 1676:
    case 1681:
    case 1682:
    case 1684:
    case 1688:
    case 1697:
    case 1698:
    case 1700:
    case 1704:
    case 1712:
    case 1729:
    case 1730:
    case 1732:
    case 1736:
    case 1744:
    case 1760:
    case 1795:
    case 1797:
    case 1798:
    case 1801:
    case 1802:
    case 1804:
    case 1809:
    case 1810:
    case 1812:
    case 1816:
    case 1825:
    case 1826:
    case 1828:
    case 1832:
    case 1840:
    case 1857:
    case 1858:
    case 1860:
    case 1864:
    case 1872:
    case 1888:
    case 1921:
    case 1922:
    case 1924:
    case 1928:
    case 1936:
    case 1952:
    case 2063:
    case 2071:
    case 2075:
    case 2077:
    case 2078:
    case 2087:
    case 2091:
    case 2093:
    case 2094:
    case 2099:
    case 2101:
    case 2102:
    case 2105:
    case 2106:
    case 2108:
    case 2119:
    case 2123:
    case 2125:
    case 2126:
    case 2131:
    case 2133:
    case 2134:
    case 2137:
    case 2138:
    case 2140:
    case 2147:
    case 2149:
    case 2150:
    case 2153:
    case 2154:
    case 2156:
    case 2161:
    case 2162:
    case 2164:
    case 2168:
    case 2183:
    case 2187:
    case 2189:
    case 2190:
    case 2195:
    case 2197:
    case 2198:
    case 2201:
    case 2202:
    case 2204:
    case 2211:
    case 2213:
    case 2214:
    case 2217:
    case 2218:
    case 2220:
    case 2225:
    case 2226:
    case 2228:
    case 2232:
    case 2243:
    case 2245:
    case 2246:
    case 2249:
    case 2250:
    case 2252:
    case 2257:
    case 2258:
    case 2260:
    case 2264:
    case 2273:
    case 2274:
    case 2276:
    case 2280:
    case 2288:
    case 2311:
    case 2315:
    case 2317:
    case 2318:
    case 2323:
    case 2325:
    case 2326:
    case 2329:
    case 2330:
    case 2332:
    case 2339:
    case 2341:
    case 2342:
    case 2345:
    case 2346:
    case 2348:
    case 2353:
    case 2354:
    case 2356:
    case 2360:
    case 2371:
    case 2373:
    case 2374:
    case 2377:
    case 2378:
    case 2380:
    case 2385:
    case 2386:
    case 2388:
    case 2392:
    case 2401:
    case 2402:
    case 2404:
    case 2408:
    case 2416:
    case 2435:
    case 2437:
    case 2438:
    case 2441:
    case 2442:
    case 2444:
    case 2449:
    case 2450:
    case 2452:
    case 2456:
    case 2465:
    case 2466:
    case 2468:
    case 2472:
    case 2480:
    case 2497:
    case 2498:
    case 2500:
    case 2504:
    case 2512:
    case 2528:
    case 2567:
    case 2571:
    case 2573:
    case 2574:
    case 2579:
    case 2581:
    case 2582:
    case 2585:
    case 2586:
    case 2588:
    case 2595:
    case 2597:
    case 2598:
    case 2601:
    case 2602:
    case 2604:
    case 2609:
    case 2610:
    case 2612:
    case 2616:
    case 2627:
    case 2629:
    case 2630:
    case 2633:
    case 2634:
    case 2636:
    case 2641:
    case 2642:
    case 2644:
    case 2648:
    case 2657:
    case 2658:
    case 2660:
    case 2664:
    case 2672:
    case 2691:
    case 2693:
    case 2694:
    case 2697:
    case 2698:
    case 2700:
    case 2705:
    case 2706:
    case 2708:
    case 2712:
    case 2721:
    case 2722:
    case 2724:
    case 2728:
    case 2736:
    case 2753:
    case 2754:
    case 2756:
    case 2760:
    case 2768:
    case 2784:
    case 2819:
    case 2821:
    case 2822:
    case 2825:
    case 2826:
    case 2828:
    case 2833:
    case 2834:
    case 2836:
    case 2840:
    case 2849:
    case 2850:
    case 2852:
    case 2856:
    case 2864:
    case 2881:
    case 2882:
    case 2884:
    case 2888:
    case 2896:
    case 2912:
    case 2945:
    case 2946:
    case 2948:
    case 2952:
    case 2960:
    case 2976:
    case 3008:
    case 3079:
    case 3083:
    case 3085:
    case 3086:
    case 3091:
    case 3093:
    case 3094:
    case 3097:
    case 3098:
    case 3100:
    case 3107:
    case 3109:
    case 3110:
    case 3113:
    case 3114:
    case 3116:
    case 3121:
    case 3122:
    case 3124:
    case 3128:
    case 3139:
    case 3141:
    case 3142:
    case 3145:
    case 3146:
    case 3148:
    case 3153:
    case 3154:
    case 3156:
    case 3160:
    case 3169:
    case 3170:
    case 3172:
    case 3176:
    case 3184:
    case 3203:
    case 3205:
    case 3206:
    case 3209:
    case 3210:
    case 3212:
    case 3217:
    case 3218:
    case 3220:
    case 3224:
    case 3233:
    case 3234:
    case 3236:
    case 3240:
    case 3248:
    case 3265:
    case 3266:
    case 3268:
    case 3272:
    case 3280:
    case 3296:
    case 3331:
    case 3333:
    case 3334:
    case 3337:
    case 3338:
    case 3340:
    case 3345:
    case 3346:
    case 3348:
    case 3352:
    case 3361:
    case 3362:
    case 3364:
    case 3368:
    case 3376:
    case 3393:
    case 3394:
    case 3396:
    case 3400:
    case 3408:
    case 3424:
    case 3457:
    case 3458:
    case 3460:
    case 3464:
    case 3472:
    case 3488:
    case 3520:
    case 3587:
    case 3589:
    case 3590:
    case 3593:
    case 3594:
    case 3596:
    case 3601:
    case 3602:
    case 3604:
    case 3608:
    case 3617:
    case 3618:
    case 3620:
    case 3624:
    case 3632:
    case 3649:
    case 3650:
    case 3652:
    case 3656:
    case 3664:
    case 3680:
    case 3713:
    case 3714:
    case 3716:
    case 3720:
    case 3728:
    case 3744:
    case 3776:
    case 3841:
    case 3842:
    case 3844:
    case 3848:
    case 3856:
    case 3872:
    case 3904:
    case 4119:
    case 4123:
    case 4125:
    case 4126:
    case 4135:
    case 4139:
    case 4141:
    case 4142:
    case 4147:
    case 4149:
    case 4150:
    case 4153:
    case 4154:
    case 4156:
    case 4167:
    case 4171:
    case 4173:
    case 4174:
    case 4179:
    case 4181:
    case 4182:
    case 4185:
    case 4186:
    case 4188:
    case 4195:
    case 4197:
    case 4198:
    case 4201:
    case 4202:
    case 4204:
    case 4209:
    case 4210:
    case 4212:
    case 4216:
    case 4231:
    case 4235:
    case 4237:
    case 4238:
    case 4243:
    case 4245:
    case 4246:
    case 4249:
    case 4250:
    case 4252:
    case 4259:
    case 4261:
    case 4262:
    case 4265:
    case 4266:
    case 4268:
    case 4273:
    case 4274:
    case 4276:
    case 4280:
    case 4291:
    case 4293:
    case 4294:
    case 4297:
    case 4298:
    case 4300:
    case 4305:
    case 4306:
    case 4308:
    case 4312:
    case 4321:
    case 4322:
    case 4324:
    case 4328:
    case 4336:
    case 4359:
    case 4363:
    case 4365:
    case 4366:
    case 4371:
    case 4373:
    case 4374:
    case 4377:
    case 4378:
    case 4380:
    case 4387:
    case 4389:
    case 4390:
    case 4393:
    case 4394:
    case 4396:
    case 4401:
    case 4402:
    case 4404:
    case 4408:
    case 4419:
    case 4421:
    case 4422:
    case 4425:
    case 4426:
    case 4428:
    case 4433:
    case 4434:
    case 4436:
    case 4440:
    case 4449:
    case 4450:
    case 4452:
    case 4456:
    case 4464:
    case 4483:
    case 4485:
    case 4486:
    case 4489:
    case 4490:
    case 4492:
    case 4497:
    case 4498:
    case 4500:
    case 4504:
    case 4513:
    case 4514:
    case 4516:
    case 4520:
    case 4528:
    case 4545:
    case 4546:
    case 4548:
    case 4552:
    case 4560:
    case 4576:
    case 4615:
    case 4619:
    case 4621:
    case 4622:
    case 4627:
    case 4629:
    case 4630:
    case 4633:
    case 4634:
    case 4636:
    case 4643:
    case 4645:
    case 4646:
    case 4649:
    case 4650:
    case 4652:
    case 4657:
    case 4658:
    case 4660:
    case 4664:
    case 4675:
    case 4677:
    case 4678:
    case 4681:
    case 4682:
    case 4684:
    case 4689:
    case 4690:
    case 4692:
    case 4696:
    case 4705:
    case 4706:
    case 4708:
    case 4712:
    case 4720:
    case 4739:
    case 4741:
    case 4742:
    case 4745:
    case 4746:
    case 4748:
    case 4753:
    case 4754:
    case 4756:
    case 4760:
    case 4769:
    case 4770:
    case 4772:
    case 4776:
    case 4784:
    case 4801:
    case 4802:
    case 4804:
    case 4808:
    case 4816:
    case 4832:
    case 4867:
    case 4869:
    case 4870:
    case 4873:
    case 4874:
    case 4876:
    case 4881:
    case 4882:
    case 4884:
    case 4888:
    case 4897:
    case 4898:
    case 4900:
    case 4904:
    case 4912:
    case 4929:
    case 4930:
    case 4932:
    case 4936:
    case 4944:
    case 4960:
    case 4993:
    case 4994:
    case 4996:
    case 5000:
    case 5008:
    case 5024:
    case 5056:
    case 5127:
    case 5131:
    case 5133:
    case 5134:
    case 5139:
    case 5141:
    case 5142:
    case 5145:
    case 5146:
    case 5148:
    case 5155:
    case 5157:
    case 5158:
    case 5161:
    case 5162:
    case 5164:
    case 5169:
    case 5170:
    case 5172:
    case 5176:
    case 5187:
    case 5189:
    case 5190:
    case 5193:
    case 5194:
    case 5196:
    case 5201:
    case 5202:
    case 5204:
    case 5208:
    case 5217:
    case 5218:
    case 5220:
    case 5224:
    case 5232:
    case 5251:
    case 5253:
    case 5254:
    case 5257:
    case 5258:
    case 5260:
    case 5265:
    case 5266:
    case 5268:
    case 5272:
    case 5281:
    case 5282:
    case 5284:
    case 5288:
    case 5296:
    case 5313:
    case 5314:
    case 5316:
    case 5320:
    case 5328:
    case 5344:
    case 5379:
    case 5381:
    case 5382:
    case 5385:
    case 5386:
    case 5388:
    case 5393:
    case 5394:
    case 5396:
    case 5400:
    case 5409:
    case 5410:
    case 5412:
    case 5416:
    case 5424:
    case 5441:
    case 5442:
    case 5444:
    case 5448:
    case 5456:
    case 5472:
    case 5505:
    case 5506:
    case 5508:
    case 5512:
    case 5520:
    case 5536:
    case 5568:
    case 5635:
    case 5637:
    case 5638:
    case 5641:
    case 5642:
    case 5644:
    case 5649:
    case 5650:
    case 5652:
    case 5656:
    case 5665:
    case 5666:
    case 5668:
    case 5672:
    case 5680:
    case 5697:
    case 5698:
    case 5700:
    case 5704:
    case 5712:
    case 5728:
    case 5761:
    case 5762:
    case 5764:
    case 5768:
    case 5776:
    case 5792:
    case 5824:
    case 5889:
    case 5890:
    case 5892:
    case 5896:
    case 5904:
    case 5920:
    case 5952:
    case 6016:
    case 6151:
    case 6155:
    case 6157:
    case 6158:
    case 6163:
    case 6165:
    case 6166:
    case 6169:
    case 6170:
    case 6172:
    case 6179:
    case 6181:
    case 6182:
    case 6185:
    case 6186:
    case 6188:
    case 6193:
    case 6194:
    case 6196:
    case 6200:
    case 6211:
    case 6213:
    case 6214:
    case 6217:
    case 6218:
    case 6220:
    case 6225:
    case 6226:
    case 6228:
    case 6232:
    case 6241:
    case 6242:
    case 6244:
    case 6248:
    case 6256:
    case 6275:
    case 6277:
    case 6278:
    case 6281:
    case 6282:
    case 6284:
    case 6289:
    case 6290:
    case 6292:
    case 6296:
    case 6305:
    case 6306:
    case 6308:
    case 6312:
    case 6320:
    case 6337:
    case 6338:
    case 6340:
    case 6344:
    case 6352:
    case 6368:
    case 6403:
    case 6405:
    case 6406:
    case 6409:
    case 6410:
    case 6412:
    case 6417:
    case 6418:
    case 6420:
    case 6424:
    case 6433:
    case 6434:
    case 6436:
    case 6440:
    case 6448:
    case 6465:
    case 6466:
    case 6468:
    case 6472:
    case 6480:
    case 6496:
    case 6529:
    case 6530:
    case 6532:
    case 6536:
    case 6544:
    case 6560:
    case 6592:
    case 6659:
    case 6661:
    case 6662:
    case 6665:
    case 6666:
    case 6668:
    case 6673:
    case 6674:
    case 6676:
    case 6680:
    case 6689:
    case 6690:
    case 6692:
    case 6696:
    case 6704:
    case 6721:
    case 6722:
    case 6724:
    case 6728:
    case 6736:
    case 6752:
    case 6785:
    case 6786:
    case 6788:
    case 6792:
    case 6800:
    case 6816:
    case 6848:
    case 6913:
    case 6914:
    case 6916:
    case 6920:
    case 6928:
    case 6944:
    case 6976:
    case 7040:
    case 7171:
    case 7173:
    case 7174:
    case 7177:
    case 7178:
    case 7180:
    case 7185:
    case 7186:
    case 7188:
    case 7192:
    case 7201:
    case 7202:
    case 7204:
    case 7208:
    case 7216:
    case 7233:
    case 7234:
    case 7236:
    case 7240:
    case 7248:
    case 7264:
    case 7297:
    case 7298:
    case 7300:
    case 7304:
    case 7312:
    case 7328:
    case 7360:
    case 7425:
    case 7426:
    case 7428:
    case 7432:
    case 7440:
    case 7456:
    case 7488:
    case 7552:
    case 7681:
    case 7682:
    case 7684:
    case 7688:
    case 7696:
    case 7712:
    case 7744:
    case 7808:
#define STRAIGHT_FLUSH_helper_P(suit) 0
#define FOUR_OF_A_KIND_complete_P() 0
#define FULL_HOUSE_complete_P(three_info) 0
#define THREE_OF_A_KIND_helper_P() 0
#define STRAIGHT_P() 0
#define AT_LEAST_PAIR_P() 0
#define PAIR_P() 0

#include "inlines/evx_action.h"

#undef STRAIGHT_FLUSH_helper_P
#undef FOUR_OF_A_KIND_complete_P
#undef STRAIGHT_P
#undef FLUSH_helper_P
#undef FULL_HOUSE_complete_P
#undef THREE_OF_A_KIND_helper_P
#undef AT_LEAST_PAIR_P
#undef PAIR_P
      break;
    case 31:
    case 62:
    case 124:
    case 248:
    case 496:
    case 992:
    case 1984:
    case 3968:
    case 4111:
    case 7936:
#define FOUR_OF_A_KIND_complete_P() 0
#define FULL_HOUSE_complete_P(three_info) 0
#define THREE_OF_A_KIND_helper_P() 0
#define STRAIGHT_P() 1
#define AT_LEAST_PAIR_P() 0
#define PAIR_P() 0

#include "inlines/evx_action.h"

#undef STRAIGHT_FLUSH_helper_P
#undef FOUR_OF_A_KIND_complete_P
#undef STRAIGHT_P
#undef FLUSH_helper_P
#undef FULL_HOUSE_complete_P
#undef THREE_OF_A_KIND_helper_P
#undef AT_LEAST_PAIR_P
#undef PAIR_P
      break;
    case 7:
    case 11:
    case 13:
    case 14:
    case 19:
    case 21:
    case 22:
    case 25:
    case 26:
    case 28:
    case 35:
    case 37:
    case 38:
    case 41:
    case 42:
    case 44:
    case 49:
    case 50:
    case 52:
    case 56:
    case 67:
    case 69:
    case 70:
    case 73:
    case 74:
    case 76:
    case 81:
    case 82:
    case 84:
    case 88:
    case 97:
    case 98:
    case 100:
    case 104:
    case 112:
    case 131:
    case 133:
    case 134:
    case 137:
    case 138:
    case 140:
    case 145:
    case 146:
    case 148:
    case 152:
    case 161:
    case 162:
    case 164:
    case 168:
    case 176:
    case 193:
    case 194:
    case 196:
    case 200:
    case 208:
    case 224:
    case 259:
    case 261:
    case 262:
    case 265:
    case 266:
    case 268:
    case 273:
    case 274:
    case 276:
    case 280:
    case 289:
    case 290:
    case 292:
    case 296:
    case 304:
    case 321:
    case 322:
    case 324:
    case 328:
    case 336:
    case 352:
    case 385:
    case 386:
    case 388:
    case 392:
    case 400:
    case 416:
    case 448:
    case 515:
    case 517:
    case 518:
    case 521:
    case 522:
    case 524:
    case 529:
    case 530:
    case 532:
    case 536:
    case 545:
    case 546:
    case 548:
    case 552:
    case 560:
    case 577:
    case 578:
    case 580:
    case 584:
    case 592:
    case 608:
    case 641:
    case 642:
    case 644:
    case 648:
    case 656:
    case 672:
    case 704:
    case 769:
    case 770:
    case 772:
    case 776:
    case 784:
    case 800:
    case 832:
    case 896:
    case 1027:
    case 1029:
    case 1030:
    case 1033:
    case 1034:
    case 1036:
    case 1041:
    case 1042:
    case 1044:
    case 1048:
    case 1057:
    case 1058:
    case 1060:
    case 1064:
    case 1072:
    case 1089:
    case 1090:
    case 1092:
    case 1096:
    case 1104:
    case 1120:
    case 1153:
    case 1154:
    case 1156:
    case 1160:
    case 1168:
    case 1184:
    case 1216:
    case 1281:
    case 1282:
    case 1284:
    case 1288:
    case 1296:
    case 1312:
    case 1344:
    case 1408:
    case 1537:
    case 1538:
    case 1540:
    case 1544:
    case 1552:
    case 1568:
    case 1600:
    case 1664:
    case 1792:
    case 2051:
    case 2053:
    case 2054:
    case 2057:
    case 2058:
    case 2060:
    case 2065:
    case 2066:
    case 2068:
    case 2072:
    case 2081:
    case 2082:
    case 2084:
    case 2088:
    case 2096:
    case 2113:
    case 2114:
    case 2116:
    case 2120:
    case 2128:
    case 2144:
    case 2177:
    case 2178:
    case 2180:
    case 2184:
    case 2192:
    case 2208:
    case 2240:
    case 2305:
    case 2306:
    case 2308:
    case 2312:
    case 2320:
    case 2336:
    case 2368:
    case 2432:
    case 2561:
    case 2562:
    case 2564:
    case 2568:
    case 2576:
    case 2592:
    case 2624:
    case 2688:
    case 2816:
    case 3073:
    case 3074:
    case 3076:
    case 3080:
    case 3088:
    case 3104:
    case 3136:
    case 3200:
    case 3328:
    case 3584:
    case 4099:
    case 4101:
    case 4102:
    case 4105:
    case 4106:
    case 4108:
    case 4113:
    case 4114:
    case 4116:
    case 4120:
    case 4129:
    case 4130:
    case 4132:
    case 4136:
    case 4144:
    case 4161:
    case 4162:
    case 4164:
    case 4168:
    case 4176:
    case 4192:
    case 4225:
    case 4226:
    case 4228:
    case 4232:
    case 4240:
    case 4256:
    case 4288:
    case 4353:
    case 4354:
    case 4356:
    case 4360:
    case 4368:
    case 4384:
    case 4416:
    case 4480:
    case 4609:
    case 4610:
    case 4612:
    case 4616:
    case 4624:
    case 4640:
    case 4672:
    case 4736:
    case 4864:
    case 5121:
    case 5122:
    case 5124:
    case 5128:
    case 5136:
    case 5152:
    case 5184:
    case 5248:
    case 5376:
    case 5632:
    case 6145:
    case 6146:
    case 6148:
    case 6152:
    case 6160:
    case 6176:
    case 6208:
    case 6272:
    case 6400:
    case 6656:
    case 7168:
#define STRAIGHT_FLUSH_helper_P(suit) 0
#define FOUR_OF_A_KIND_complete_P() 0
#define FLUSH_helper_P() 0
#define FULL_HOUSE_complete_P(three_info) 0
#define STRAIGHT_P() 0
#define AT_LEAST_PAIR_P() 1
#define PAIR_P() 0

#include "inlines/evx_action.h"

#undef STRAIGHT_FLUSH_helper_P
#undef FOUR_OF_A_KIND_complete_P
#undef STRAIGHT_P
#undef FLUSH_helper_P
#undef FULL_HOUSE_complete_P
#undef THREE_OF_A_KIND_helper_P
#undef AT_LEAST_PAIR_P
#undef PAIR_P
      break;
    case 3:
    case 5:
    case 6:
    case 9:
    case 10:
    case 12:
    case 17:
    case 18:
    case 20:
    case 24:
    case 33:
    case 34:
    case 36:
    case 40:
    case 48:
    case 65:
    case 66:
    case 68:
    case 72:
    case 80:
    case 96:
    case 129:
    case 130:
    case 132:
    case 136:
    case 144:
    case 160:
    case 192:
    case 257:
    case 258:
    case 260:
    case 264:
    case 272:
    case 288:
    case 320:
    case 384:
    case 513:
    case 514:
    case 516:
    case 520:
    case 528:
    case 544:
    case 576:
    case 640:
    case 768:
    case 1025:
    case 1026:
    case 1028:
    case 1032:
    case 1040:
    case 1056:
    case 1088:
    case 1152:
    case 1280:
    case 1536:
    case 2049:
    case 2050:
    case 2052:
    case 2056:
    case 2064:
    case 2080:
    case 2112:
    case 2176:
    case 2304:
    case 2560:
    case 3072:
    case 4097:
    case 4098:
    case 4100:
    case 4104:
    case 4112:
    case 4128:
    case 4160:
    case 4224:
    case 4352:
    case 4608:
    case 5120:
    case 6144:
#define STRAIGHT_FLUSH_helper_P(suit) 0
#define FLUSH_helper_P() 0
#define STRAIGHT_P() 0
#define AT_LEAST_PAIR_P() 1
#define PAIR_P() 0

#include "inlines/evx_action.h"

#undef STRAIGHT_FLUSH_helper_P
#undef FOUR_OF_A_KIND_complete_P
#undef STRAIGHT_P
#undef FLUSH_helper_P
#undef FULL_HOUSE_complete_P
#undef THREE_OF_A_KIND_helper_P
#undef AT_LEAST_PAIR_P
#undef PAIR_P
      break;
    case 15:
    case 23:
    case 27:
    case 29:
    case 30:
    case 39:
    case 43:
    case 45:
    case 46:
    case 51:
    case 53:
    case 54:
    case 57:
    case 58:
    case 60:
    case 71:
    case 75:
    case 77:
    case 78:
    case 83:
    case 85:
    case 86:
    case 89:
    case 90:
    case 92:
    case 99:
    case 101:
    case 102:
    case 105:
    case 106:
    case 108:
    case 113:
    case 114:
    case 116:
    case 120:
    case 135:
    case 139:
    case 141:
    case 142:
    case 147:
    case 149:
    case 150:
    case 153:
    case 154:
    case 156:
    case 163:
    case 165:
    case 166:
    case 169:
    case 170:
    case 172:
    case 177:
    case 178:
    case 180:
    case 184:
    case 195:
    case 197:
    case 198:
    case 201:
    case 202:
    case 204:
    case 209:
    case 210:
    case 212:
    case 216:
    case 225:
    case 226:
    case 228:
    case 232:
    case 240:
    case 263:
    case 267:
    case 269:
    case 270:
    case 275:
    case 277:
    case 278:
    case 281:
    case 282:
    case 284:
    case 291:
    case 293:
    case 294:
    case 297:
    case 298:
    case 300:
    case 305:
    case 306:
    case 308:
    case 312:
    case 323:
    case 325:
    case 326:
    case 329:
    case 330:
    case 332:
    case 337:
    case 338:
    case 340:
    case 344:
    case 353:
    case 354:
    case 356:
    case 360:
    case 368:
    case 387:
    case 389:
    case 390:
    case 393:
    case 394:
    case 396:
    case 401:
    case 402:
    case 404:
    case 408:
    case 417:
    case 418:
    case 420:
    case 424:
    case 432:
    case 449:
    case 450:
    case 452:
    case 456:
    case 464:
    case 480:
    case 519:
    case 523:
    case 525:
    case 526:
    case 531:
    case 533:
    case 534:
    case 537:
    case 538:
    case 540:
    case 547:
    case 549:
    case 550:
    case 553:
    case 554:
    case 556:
    case 561:
    case 562:
    case 564:
    case 568:
    case 579:
    case 581:
    case 582:
    case 585:
    case 586:
    case 588:
    case 593:
    case 594:
    case 596:
    case 600:
    case 609:
    case 610:
    case 612:
    case 616:
    case 624:
    case 643:
    case 645:
    case 646:
    case 649:
    case 650:
    case 652:
    case 657:
    case 658:
    case 660:
    case 664:
    case 673:
    case 674:
    case 676:
    case 680:
    case 688:
    case 705:
    case 706:
    case 708:
    case 712:
    case 720:
    case 736:
    case 771:
    case 773:
    case 774:
    case 777:
    case 778:
    case 780:
    case 785:
    case 786:
    case 788:
    case 792:
    case 801:
    case 802:
    case 804:
    case 808:
    case 816:
    case 833:
    case 834:
    case 836:
    case 840:
    case 848:
    case 864:
    case 897:
    case 898:
    case 900:
    case 904:
    case 912:
    case 928:
    case 960:
    case 1031:
    case 1035:
    case 1037:
    case 1038:
    case 1043:
    case 1045:
    case 1046:
    case 1049:
    case 1050:
    case 1052:
    case 1059:
    case 1061:
    case 1062:
    case 1065:
    case 1066:
    case 1068:
    case 1073:
    case 1074:
    case 1076:
    case 1080:
    case 1091:
    case 1093:
    case 1094:
    case 1097:
    case 1098:
    case 1100:
    case 1105:
    case 1106:
    case 1108:
    case 1112:
    case 1121:
    case 1122:
    case 1124:
    case 1128:
    case 1136:
    case 1155:
    case 1157:
    case 1158:
    case 1161:
    case 1162:
    case 1164:
    case 1169:
    case 1170:
    case 1172:
    case 1176:
    case 1185:
    case 1186:
    case 1188:
    case 1192:
    case 1200:
    case 1217:
    case 1218:
    case 1220:
    case 1224:
    case 1232:
    case 1248:
    case 1283:
    case 1285:
    case 1286:
    case 1289:
    case 1290:
    case 1292:
    case 1297:
    case 1298:
    case 1300:
    case 1304:
    case 1313:
    case 1314:
    case 1316:
    case 1320:
    case 1328:
    case 1345:
    case 1346:
    case 1348:
    case 1352:
    case 1360:
    case 1376:
    case 1409:
    case 1410:
    case 1412:
    case 1416:
    case 1424:
    case 1440:
    case 1472:
    case 1539:
    case 1541:
    case 1542:
    case 1545:
    case 1546:
    case 1548:
    case 1553:
    case 1554:
    case 1556:
    case 1560:
    case 1569:
    case 1570:
    case 1572:
    case 1576:
    case 1584:
    case 1601:
    case 1602:
    case 1604:
    case 1608:
    case 1616:
    case 1632:
    case 1665:
    case 1666:
    case 1668:
    case 1672:
    case 1680:
    case 1696:
    case 1728:
    case 1793:
    case 1794:
    case 1796:
    case 1800:
    case 1808:
    case 1824:
    case 1856:
    case 1920:
    case 2055:
    case 2059:
    case 2061:
    case 2062:
    case 2067:
    case 2069:
    case 2070:
    case 2073:
    case 2074:
    case 2076:
    case 2083:
    case 2085:
    case 2086:
    case 2089:
    case 2090:
    case 2092:
    case 2097:
    case 2098:
    case 2100:
    case 2104:
    case 2115:
    case 2117:
    case 2118:
    case 2121:
    case 2122:
    case 2124:
    case 2129:
    case 2130:
    case 2132:
    case 2136:
    case 2145:
    case 2146:
    case 2148:
    case 2152:
    case 2160:
    case 2179:
    case 2181:
    case 2182:
    case 2185:
    case 2186:
    case 2188:
    case 2193:
    case 2194:
    case 2196:
    case 2200:
    case 2209:
    case 2210:
    case 2212:
    case 2216:
    case 2224:
    case 2241:
    case 2242:
    case 2244:
    case 2248:
    case 2256:
    case 2272:
    case 2307:
    case 2309:
    case 2310:
    case 2313:
    case 2314:
    case 2316:
    case 2321:
    case 2322:
    case 2324:
    case 2328:
    case 2337:
    case 2338:
    case 2340:
    case 2344:
    case 2352:
    case 2369:
    case 2370:
    case 2372:
    case 2376:
    case 2384:
    case 2400:
    case 2433:
    case 2434:
    case 2436:
    case 2440:
    case 2448:
    case 2464:
    case 2496:
    case 2563:
    case 2565:
    case 2566:
    case 2569:
    case 2570:
    case 2572:
    case 2577:
    case 2578:
    case 2580:
    case 2584:
    case 2593:
    case 2594:
    case 2596:
    case 2600:
    case 2608:
    case 2625:
    case 2626:
    case 2628:
    case 2632:
    case 2640:
    case 2656:
    case 2689:
    case 2690:
    case 2692:
    case 2696:
    case 2704:
    case 2720:
    case 2752:
    case 2817:
    case 2818:
    case 2820:
    case 2824:
    case 2832:
    case 2848:
    case 2880:
    case 2944:
    case 3075:
    case 3077:
    case 3078:
    case 3081:
    case 3082:
    case 3084:
    case 3089:
    case 3090:
    case 3092:
    case 3096:
    case 3105:
    case 3106:
    case 3108:
    case 3112:
    case 3120:
    case 3137:
    case 3138:
    case 3140:
    case 3144:
    case 3152:
    case 3168:
    case 3201:
    case 3202:
    case 3204:
    case 3208:
    case 3216:
    case 3232:
    case 3264:
    case 3329:
    case 3330:
    case 3332:
    case 3336:
    case 3344:
    case 3360:
    case 3392:
    case 3456:
    case 3585:
    case 3586:
    case 3588:
    case 3592:
    case 3600:
    case 3616:
    case 3648:
    case 3712:
    case 3840:
    case 4103:
    case 4107:
    case 4109:
    case 4110:
    case 4115:
    case 4117:
    case 4118:
    case 4121:
    case 4122:
    case 4124:
    case 4131:
    case 4133:
    case 4134:
    case 4137:
    case 4138:
    case 4140:
    case 4145:
    case 4146:
    case 4148:
    case 4152:
    case 4163:
    case 4165:
    case 4166:
    case 4169:
    case 4170:
    case 4172:
    case 4177:
    case 4178:
    case 4180:
    case 4184:
    case 4193:
    case 4194:
    case 4196:
    case 4200:
    case 4208:
    case 4227:
    case 4229:
    case 4230:
    case 4233:
    case 4234:
    case 4236:
    case 4241:
    case 4242:
    case 4244:
    case 4248:
    case 4257:
    case 4258:
    case 4260:
    case 4264:
    case 4272:
    case 4289:
    case 4290:
    case 4292:
    case 4296:
    case 4304:
    case 4320:
    case 4355:
    case 4357:
    case 4358:
    case 4361:
    case 4362:
    case 4364:
    case 4369:
    case 4370:
    case 4372:
    case 4376:
    case 4385:
    case 4386:
    case 4388:
    case 4392:
    case 4400:
    case 4417:
    case 4418:
    case 4420:
    case 4424:
    case 4432:
    case 4448:
    case 4481:
    case 4482:
    case 4484:
    case 4488:
    case 4496:
    case 4512:
    case 4544:
    case 4611:
    case 4613:
    case 4614:
    case 4617:
    case 4618:
    case 4620:
    case 4625:
    case 4626:
    case 4628:
    case 4632:
    case 4641:
    case 4642:
    case 4644:
    case 4648:
    case 4656:
    case 4673:
    case 4674:
    case 4676:
    case 4680:
    case 4688:
    case 4704:
    case 4737:
    case 4738:
    case 4740:
    case 4744:
    case 4752:
    case 4768:
    case 4800:
    case 4865:
    case 4866:
    case 4868:
    case 4872:
    case 4880:
    case 4896:
    case 4928:
    case 4992:
    case 5123:
    case 5125:
    case 5126:
    case 5129:
    case 5130:
    case 5132:
    case 5137:
    case 5138:
    case 5140:
    case 5144:
    case 5153:
    case 5154:
    case 5156:
    case 5160:
    case 5168:
    case 5185:
    case 5186:
    case 5188:
    case 5192:
    case 5200:
    case 5216:
    case 5249:
    case 5250:
    case 5252:
    case 5256:
    case 5264:
    case 5280:
    case 5312:
    case 5377:
    case 5378:
    case 5380:
    case 5384:
    case 5392:
    case 5408:
    case 5440:
    case 5504:
    case 5633:
    case 5634:
    case 5636:
    case 5640:
    case 5648:
    case 5664:
    case 5696:
    case 5760:
    case 5888:
    case 6147:
    case 6149:
    case 6150:
    case 6153:
    case 6154:
    case 6156:
    case 6161:
    case 6162:
    case 6164:
    case 6168:
    case 6177:
    case 6178:
    case 6180:
    case 6184:
    case 6192:
    case 6209:
    case 6210:
    case 6212:
    case 6216:
    case 6224:
    case 6240:
    case 6273:
    case 6274:
    case 6276:
    case 6280:
    case 6288:
    case 6304:
    case 6336:
    case 6401:
    case 6402:
    case 6404:
    case 6408:
    case 6416:
    case 6432:
    case 6464:
    case 6528:
    case 6657:
    case 6658:
    case 6660:
    case 6664:
    case 6672:
    case 6688:
    case 6720:
    case 6784:
    case 6912:
    case 7169:
    case 7170:
    case 7172:
    case 7176:
    case 7184:
    case 7200:
    case 7232:
    case 7296:
    case 7424:
    case 7680:
#define STRAIGHT_FLUSH_helper_P(suit) 0
#define FOUR_OF_A_KIND_complete_P() 0
#define FLUSH_helper_P() 0
#define FULL_HOUSE_complete_P(three_info) 0
#define THREE_OF_A_KIND_helper_P() 0
#define STRAIGHT_P() 0
#define AT_LEAST_PAIR_P() 1
#define PAIR_P() 1

#include "inlines/evx_action.h"

#undef STRAIGHT_FLUSH_helper_P
#undef FOUR_OF_A_KIND_complete_P
#undef STRAIGHT_P
#undef FLUSH_helper_P
#undef FULL_HOUSE_complete_P
#undef THREE_OF_A_KIND_helper_P
#undef AT_LEAST_PAIR_P
#undef PAIR_P
      break;
    default:
      abort ();
      break;
    }

  abort ();
  return 0;   /* Quiet the compiler. */
}