/*********************************************************************
*                                                                    *
*                       Software License Agreement                   *
*                                                                    *
*   The software supplied herewith by Microchip Technology           *
*   Incorporated (the "Company") for its dsPIC controller            *
*   is intended and supplied to you, the Company's customer,         *
*   for use solely and exclusively on Microchip dsPIC                *
*   products. The software is owned by the Company and/or its        *
*   supplier, and is protected under applicable copyright laws. All  *
*   rights are reserved. Any use in violation of the foregoing       *
*   restrictions may subject the user to criminal sanctions under    *
*   applicable laws, as well as to civil liability for the breach of *
*   the terms and conditions of this license.                        *
*                                                                    *
*   THIS SOFTWARE IS PROVIDED IN AN "AS IS" CONDITION.  NO           *
*   WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING,    *
*   BUT NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND    *
*   FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. THE     *
*   COMPANY SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL,  *
*   INCIDENTAL OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.  *
*                                                                    *
*   (c) Copyright 2008 Microchip Technology, All rights reserved.    *
*********************************************************************/

// Specify Twiddle Factor Placement 
#define PSV_TF	0					// 1 - Twiddle Factor is placed in Program FLASH Memory, Accessed using PSV 
									// 0 - Twiddle Factor is placed in Data RAM Memory
									
									
#if(PSV_TF==0)
long twdlFctr32b[768] __attribute__ ((far)) ={
           0,13176712,26352928,39528151,52701887,65873638,79042909,92209205,105372028,118530885,
           131685278,144834714,157978697,171116733,184248325,197372981,210490206,223599506,236700388,249792358,
           262874923,275947592,289009871,302061269,315101295,328129457,341145265,354148230,367137861,380113669,
           393075166,406021865,418953276,431868915,444768294,457650927,470516330,483364019,496193509,509004318,
           521795963,534567963,547319836,560051104,572761285,585449903,598116479,610760536,623381598,635979190,
           648552838,661102068,673626408,686125387,698598533,711045377,723465451,735858287,748223418,760560380,
           772868706,785147934,797397602,809617249,821806413,833964638,846091463,858186435,870249095,882278992,
           894275671,906238681,918167572,930061894,941921200,953745043,965532978,977284562,988999351,1000676905,
           1012316784,1023918550,1035481766,1047005996,1058490808,1069935768,1081340445,1092704411,1104027237,1115308496,
           1126547765,1137744621,1148898640,1160009405,1171076495,1182099496,1193077991,1204011567,1214899813,1225742318,
           1236538675,1247288478,1257991320,1268646800,1279254516,1289814068,1300325060,1310787095,1321199781,1331562723,
           1341875533,1352137822,1362349204,1372509294,1382617710,1392674072,1402678000,1412629117,1422527051,1432371426,
           1442161874,1451898025,1461579514,1471205974,1480777044,1490292364,1499751576,1509154322,1518500250,1527789007,
           1537020244,1546193612,1555308768,1564365367,1573363068,1582301533,1591180426,1599999411,1608758157,1617456335,
           1626093616,1634669676,1643184191,1651636841,1660027308,1668355276,1676620432,1684822463,1692961062,1701035922,
           1709046739,1716993211,1724875040,1732691928,1740443581,1748129707,1755750017,1763304224,1770792044,1778213194,
           1785567396,1792854372,1800073849,1807225553,1814309216,1821324572,1828271356,1835149306,1841958164,1848697674,
           1855367581,1861967634,1868497586,1874957189,1881346202,1887664383,1893911494,1900087301,1906191570,1912224073,
           1918184581,1924072871,1929888720,1935631910,1941302225,1946899451,1952423377,1957873796,1963250501,1968553292,
           1973781967,1978936331,1984016189,1989021350,1993951625,1998806829,2003586779,2008291295,2012920201,2017473321,
           2021950484,2026351522,2030676269,2034924562,2039096241,2043191150,2047209133,2051150040,2055013723,2058800036,
           2062508835,2066139983,2069693342,2073168777,2076566160,2079885360,2083126254,2086288720,2089372638,2092377892,
           2095304370,2098151960,2100920556,2103610054,2106220352,2108751352,2111202959,2113575080,2115867626,2118080511,
           2120213651,2122266967,2124240380,2126133817,2127947206,2129680480,2131333572,2132906420,2134398966,2135811153,
           2137142927,2138394240,2139565043,2140655293,2141664948,2142593971,2143442326,2144209982,2144896910,2145503083,
           2146028480,2146473080,2146836866,2147119825,2147321946,2147443222,2147483647,2147443222,2147321946,2147119825,
           2146836866,2146473080,2146028480,2145503083,2144896910,2144209982,2143442326,2142593971,2141664948,2140655293,
           2139565043,2138394240,2137142927,2135811153,2134398966,2132906420,2131333572,2129680480,2127947206,2126133817,
           2124240380,2122266967,2120213651,2118080511,2115867626,2113575080,2111202959,2108751352,2106220352,2103610054,
           2100920556,2098151960,2095304370,2092377892,2089372638,2086288720,2083126254,2079885360,2076566160,2073168777,
           2069693342,2066139983,2062508835,2058800036,2055013723,2051150040,2047209133,2043191150,2039096241,2034924562,
           2030676269,2026351522,2021950484,2017473321,2012920201,2008291295,2003586779,1998806829,1993951625,1989021350,
           1984016189,1978936331,1973781967,1968553292,1963250501,1957873796,1952423377,1946899451,1941302225,1935631910,
           1929888720,1924072871,1918184581,1912224073,1906191570,1900087301,1893911494,1887664383,1881346202,1874957189,
           1868497586,1861967634,1855367581,1848697674,1841958164,1835149306,1828271356,1821324572,1814309216,1807225553,
           1800073849,1792854372,1785567396,1778213194,1770792044,1763304224,1755750017,1748129707,1740443581,1732691928,
           1724875040,1716993211,1709046739,1701035922,1692961062,1684822463,1676620432,1668355276,1660027308,1651636841,
           1643184191,1634669676,1626093616,1617456335,1608758157,1599999411,1591180426,1582301533,1573363068,1564365367,
           1555308768,1546193612,1537020244,1527789007,1518500250,1509154322,1499751576,1490292364,1480777044,1471205974,
           1461579514,1451898025,1442161874,1432371426,1422527051,1412629117,1402678000,1392674072,1382617710,1372509294,
           1362349204,1352137822,1341875533,1331562723,1321199781,1310787095,1300325060,1289814068,1279254516,1268646800,
           1257991320,1247288478,1236538675,1225742318,1214899813,1204011567,1193077991,1182099496,1171076495,1160009405,
           1148898640,1137744621,1126547765,1115308496,1104027237,1092704411,1081340445,1069935768,1058490808,1047005996,
           1035481766,1023918550,1012316784,1000676905,988999351,977284562,965532978,953745043,941921200,930061894,
           918167572,906238681,894275671,882278992,870249095,858186435,846091463,833964638,821806413,809617249,
           797397602,785147934,772868706,760560380,748223418,735858287,723465451,711045377,698598533,686125387,
           673626408,661102068,648552838,635979190,623381598,610760536,598116479,585449903,572761285,560051104,
           547319836,534567963,521795963,509004318,496193509,483364019,470516330,457650927,444768294,431868915,
           418953276,406021865,393075166,380113669,367137861,354148230,341145265,328129457,315101295,302061269,
           289009871,275947592,262874923,249792358,236700388,223599506,210490206,197372981,184248325,171116733,
           157978697,144834714,131685278,118530885,105372028,92209205,79042909,65873638,52701887,39528151,
           26352928,13176712,0,-13176712,-26352928,-39528151,-52701887,-65873638,-79042909,-92209205,
           -105372028,-118530885,-131685278,-144834714,-157978697,-171116733,-184248325,-197372981,-210490206,-223599506,
           -236700388,-249792358,-262874923,-275947592,-289009871,-302061269,-315101295,-328129457,-341145265,-354148230,
           -367137861,-380113669,-393075166,-406021865,-418953276,-431868915,-444768294,-457650927,-470516330,-483364019,
           -496193509,-509004318,-521795963,-534567963,-547319836,-560051104,-572761285,-585449903,-598116479,-610760536,
           -623381598,-635979190,-648552838,-661102068,-673626408,-686125387,-698598533,-711045377,-723465451,-735858287,
           -748223418,-760560380,-772868706,-785147934,-797397602,-809617249,-821806413,-833964638,-846091463,-858186435,
           -870249095,-882278992,-894275671,-906238681,-918167572,-930061894,-941921200,-953745043,-965532978,-977284562,
           -988999351,-1000676905,-1012316784,-1023918550,-1035481766,-1047005996,-1058490808,-1069935768,-1081340445,-1092704411,
           -1104027237,-1115308496,-1126547765,-1137744621,-1148898640,-1160009405,-1171076495,-1182099496,-1193077991,-1204011567,
           -1214899813,-1225742318,-1236538675,-1247288478,-1257991320,-1268646800,-1279254516,-1289814068,-1300325060,-1310787095,
           -1321199781,-1331562723,-1341875533,-1352137822,-1362349204,-1372509294,-1382617710,-1392674072,-1402678000,-1412629117,
           -1422527051,-1432371426,-1442161874,-1451898025,-1461579514,-1471205974,-1480777044,-1490292364,-1499751576,-1509154322,
           -1518500250,-1527789007,-1537020244,-1546193612,-1555308768,-1564365367,-1573363068,-1582301533,-1591180426,-1599999411,
           -1608758157,-1617456335,-1626093616,-1634669676,-1643184191,-1651636841,-1660027308,-1668355276,-1676620432,-1684822463,
           -1692961062,-1701035922,-1709046739,-1716993211,-1724875040,-1732691928,-1740443581,-1748129707,-1755750017,-1763304224,
           -1770792044,-1778213194,-1785567396,-1792854372,-1800073849,-1807225553,-1814309216,-1821324572,-1828271356,-1835149306,
           -1841958164,-1848697674,-1855367581,-1861967634,-1868497586,-1874957189,-1881346202,-1887664383,-1893911494,-1900087301,
           -1906191570,-1912224073,-1918184581,-1924072871,-1929888720,-1935631910,-1941302225,-1946899451,-1952423377,-1957873796,
           -1963250501,-1968553292,-1973781967,-1978936331,-1984016189,-1989021350,-1993951625,-1998806829,-2003586779,-2008291295,
           -2012920201,-2017473321,-2021950484,-2026351522,-2030676269,-2034924562,-2039096241,-2043191150,-2047209133,-2051150040,
           -2055013723,-2058800036,-2062508835,-2066139983,-2069693342,-2073168777,-2076566160,-2079885360,-2083126254,-2086288720,
           -2089372638,-2092377892,-2095304370,-2098151960,-2100920556,-2103610054,-2106220352,-2108751352,-2111202959,-2113575080,
           -2115867626,-2118080511,-2120213651,-2122266967,-2124240380,-2126133817,-2127947206,-2129680480,-2131333572,-2132906420,
           -2134398966,-2135811153,-2137142927,-2138394240,-2139565043,-2140655293,-2141664948,-2142593971,-2143442326,-2144209982,
           -2144896910,-2145503083,-2146028480,-2146473080,-2146836866,-2147119825,-2147321946,-2147443222
};
#elif(PSV_TF)
int psvTwdlFctr32b[1536] __attribute__ ((space(psv))) ={
		0x0000,
		0x0000,
		0x0F88,
		0x00C9,
		0x1D20,
		0x0192,
		0x26D7,
		0x025B,
		0x2ABF,
		0x0324,
		0x26E6,
		0x03ED,
		0x195D,
		0x04B6,
		0x0035,
		0x057F,
		0xD97C,
		0x0647,
		0xA345,
		0x0710,
		0x5B9E,
		0x07D9,
		0x009A,
		0x08A2,
		0x9049,
		0x096A,
		0x08BD,
		0x0A33,
		0x6805,
		0x0AFB,
		0xAC35,
		0x0BC3,
		0xD35E,
		0x0C8B,
		0xDB92,
		0x0D53,
		0xC2E4,
		0x0E1B,
		0x8766,
		0x0EE3,
		0x272B,
		0x0FAB,
		0xA048,
		0x1072,
		0xF0CF,
		0x1139,
		0x16D5,
		0x1201,
		0x106F,
		0x12C8,
		0xDBB1,
		0x138E,
		0x76B1,
		0x1455,
		0xDF86,
		0x151B,
		0x1445,
		0x15E2,
		0x1305,
		0x16A8,
		0xD9DE,
		0x176D,
		0x66E9,
		0x1833,
		0xB83C,
		0x18F8,
		0xCBF3,
		0x19BD,
		0xA026,
		0x1A82,
		0x32EF,
		0x1B47,
		0x826A,
		0x1C0B,
		0x8CB3,
		0x1CCF,
		0x4FE5,
		0x1D93,
		0xCA1E,
		0x1E56,
		0xF97B,
		0x1F19,
		0xDC1B,
		0x1FDC,
		0x701C,
		0x209F,
		0xB3A0,
		0x2161,
		0xA4C5,
		0x2223,
		0x41AF,
		0x22E5,
		0x887F,
		0x23A6,
		0x7758,
		0x2467,
		0x0C5E,
		0x2528,
		0x45B6,
		0x25E8,
		0x2186,
		0x26A8,
		0x9DF4,
		0x2767,
		0xB928,
		0x2826,
		0x714B,
		0x28E5,
		0xC485,
		0x29A3,
		0xB101,
		0x2A61,
		0x34EB,
		0x2B1F,
		0x4E6F,
		0x2BDC,
		0xFBBA,
		0x2C98,
		0x3AFC,
		0x2D55,
		0x0A62,
		0x2E11,
		0x681E,
		0x2ECC,
		0x5262,
		0x2F87,
		0xC761,
		0x3041,
		0xC54D,
		0x30FB,
		0x4A5E,
		0x31B5,
		0x54C7,
		0x326E,
		0xE2C3,
		0x3326,
		0xF287,
		0x33DE,
		0x8250,
		0x3496,
		0x9057,
		0x354D,
		0x1AD9,
		0x3604,
		0x2014,
		0x36BA,
		0x9E46,
		0x376F,
		0x93B0,
		0x3824,
		0xFE93,
		0x38D8,
		0xDD32,
		0x398C,
		0x2DD2,
		0x3A40,
		0xEEB7,
		0x3AF2,
		0x1E29,
		0x3BA5,
		0xBA70,
		0x3C56,
		0xC1D6,
		0x3D07,
		0x32A6,
		0x3DB8,
		0x0B2C,
		0x3E68,
		0x49B8,
		0x3F17,
		0xEC98,
		0x3FC5,
		0xF21D,
		0x4073,
		0x589B,
		0x4121,
		0x1E65,
		0x41CE,
		0x41D0,
		0x427A,
		0xC135,
		0x4325,
		0x9AED,
		0x43D0,
		0xCD50,
		0x447A,
		0x56BD,
		0x4524,
		0x358F,
		0x45CD,
		0x6828,
		0x4675,
		0xECE7,
		0x471C,
		0xC22F,
		0x47C3,
		0xE665,
		0x4869,
		0x57EE,
		0x490F,
		0x1533,
		0x49B4,
		0x1C9E,
		0x4A58,
		0x6C98,
		0x4AFB,
		0x0390,
		0x4B9E,
		0xDFF4,
		0x4C3F,
		0x0034,
		0x4CE1,
		0x62C4,
		0x4D81,
		0x0617,
		0x4E21,
		0xE8A5,
		0x4EBF,
		0x08E3,
		0x4F5E,
		0x654D,
		0x4FFB,
		0xFC5E,
		0x5097,
		0xCC94,
		0x5133,
		0xD46E,
		0x51CE,
		0x126E,
		0x5269,
		0x8518,
		0x5302,
		0x2AF0,
		0x539B,
		0x027D,
		0x5433,
		0x0A4B,
		0x54CA,
		0x40E2,
		0x5560,
		0xA4D2,
		0x55F5,
		0x34A9,
		0x568A,
		0xEEFA,
		0x571D,
		0xD256,
		0x57B0,
		0xDD54,
		0x5842,
		0x0E8C,
		0x58D4,
		0x6498,
		0x5964,
		0xDE12,
		0x59F3,
		0x799A,
		0x5A82,
		0x35CF,
		0x5B10,
		0x1154,
		0x5B9D,
		0x0ACC,
		0x5C29,
		0x20E0,
		0x5CB4,
		0x5237,
		0x5D3E,
		0x9D7C,
		0x5DC7,
		0x015D,
		0x5E50,
		0x7C8A,
		0x5ED7,
		0x0DB3,
		0x5F5E,
		0xB38D,
		0x5FE3,
		0x6CCF,
		0x6068,
		0x3830,
		0x60EC,
		0x146C,
		0x616F,
		0x003F,
		0x61F1,
		0xFA69,
		0x6271,
		0x01AC,
		0x62F2,
		0x14CC,
		0x6371,
		0x3290,
		0x63EF,
		0x59BF,
		0x646C,
		0x8926,
		0x64E8,
		0xBF92,
		0x6563,
		0xFBD3,
		0x65DD,
		0x3CBB,
		0x6657,
		0x8120,
		0x66CF,
		0xC7D8,
		0x6746,
		0x0FBD,
		0x67BD,
		0x57AB,
		0x6832,
		0x9E81,
		0x68A6,
		0xE320,
		0x6919,
		0x246C,
		0x698C,
		0x614A,
		0x69FD,
		0x98A4,
		0x6A6D,
		0xC964,
		0x6ADC,
		0xF279,
		0x6B4A,
		0x12D1,
		0x6BB8,
		0x2960,
		0x6C24,
		0x351C,
		0x6C8F,
		0x34FC,
		0x6CF9,
		0x27FA,
		0x6D62,
		0x0D14,
		0x6DCA,
		0xE34A,
		0x6E30,
		0xA99D,
		0x6E96,
		0x5F12,
		0x6EFB,
		0x02B2,
		0x6F5F,
		0x9385,
		0x6FC1,
		0x109A,
		0x7023,
		0x78FF,
		0x7083,
		0xCBC6,
		0x70E2,
		0x0805,
		0x7141,
		0x2CD2,
		0x719E,
		0x3949,
		0x71FA,
		0x2C85,
		0x7255,
		0x05A7,
		0x72AF,
		0xC3D0,
		0x7307,
		0x6626,
		0x735F,
		0xEBD1,
		0x73B5,
		0x53FB,
		0x740B,
		0x9DD1,
		0x745F,
		0xC884,
		0x74B2,
		0xD345,
		0x7504,
		0xBD4C,
		0x7555,
		0x85CF,
		0x75A5,
		0x2C0B,
		0x75F4,
		0xAF3D,
		0x7641,
		0x0EA6,
		0x768E,
		0x4989,
		0x76D9,
		0x5F2D,
		0x7723,
		0x4EDB,
		0x776C,
		0x17DF,
		0x77B4,
		0xB989,
		0x77FA,
		0x3329,
		0x7840,
		0x8414,
		0x7884,
		0xABA2,
		0x78C7,
		0xA92D,
		0x7909,
		0x7C12,
		0x794A,
		0x23B1,
		0x798A,
		0x9F6E,
		0x79C8,
		0xEEAD,
		0x7A05,
		0x10D8,
		0x7A42,
		0x055B,
		0x7A7D,
		0xCBA4,
		0x7AB6,
		0x6323,
		0x7AEF,
		0xCB4F,
		0x7B26,
		0x039E,
		0x7B5D,
		0x0B89,
		0x7B92,
		0xE290,
		0x7BC5,
		0x8830,
		0x7BF8,
		0xFBEE,
		0x7C29,
		0x3D50,
		0x7C5A,
		0x4BDE,
		0x7C89,
		0x2724,
		0x7CB7,
		0xCEB2,
		0x7CE3,
		0x4218,
		0x7D0F,
		0x80EC,
		0x7D39,
		0x8AC6,
		0x7D62,
		0x5F40,
		0x7D8A,
		0xFDF8,
		0x7DB0,
		0x668F,
		0x7DD6,
		0x98A8,
		0x7DFA,
		0x93EA,
		0x7E1D,
		0x57FF,
		0x7E3F,
		0xE493,
		0x7E5F,
		0x3957,
		0x7E7F,
		0x55FC,
		0x7E9D,
		0x3A39,
		0x7EBA,
		0xE5C6,
		0x7ED5,
		0x5860,
		0x7EF0,
		0x91C4,
		0x7F09,
		0x91B4,
		0x7F21,
		0x57F6,
		0x7F38,
		0xE451,
		0x7F4D,
		0x368F,
		0x7F62,
		0x4E80,
		0x7F75,
		0x2BF3,
		0x7F87,
		0xCEBD,
		0x7F97,
		0x36B4,
		0x7FA7,
		0x63B3,
		0x7FB5,
		0x5596,
		0x7FC2,
		0x0C3E,
		0x7FCE,
		0x878E,
		0x7FD8,
		0xC76B,
		0x7FE1,
		0xCBC0,
		0x7FE9,
		0x9478,
		0x7FF0,
		0x2182,
		0x7FF6,
		0x72D1,
		0x7FFA,
		0x885A,
		0x7FFD,
		0x6216,
		0x7FFF,
		0xFFFF,
		0x7FFF,
		0x6216,
		0x7FFF,
		0x885A,
		0x7FFD,
		0x72D1,
		0x7FFA,
		0x2182,
		0x7FF6,
		0x9478,
		0x7FF0,
		0xCBC0,
		0x7FE9,
		0xC76B,
		0x7FE1,
		0x878E,
		0x7FD8,
		0x0C3E,
		0x7FCE,
		0x5596,
		0x7FC2,
		0x63B3,
		0x7FB5,
		0x36B4,
		0x7FA7,
		0xCEBD,
		0x7F97,
		0x2BF3,
		0x7F87,
		0x4E80,
		0x7F75,
		0x368F,
		0x7F62,
		0xE451,
		0x7F4D,
		0x57F6,
		0x7F38,
		0x91B4,
		0x7F21,
		0x91C4,
		0x7F09,
		0x5860,
		0x7EF0,
		0xE5C6,
		0x7ED5,
		0x3A39,
		0x7EBA,
		0x55FC,
		0x7E9D,
		0x3957,
		0x7E7F,
		0xE493,
		0x7E5F,
		0x57FF,
		0x7E3F,
		0x93EA,
		0x7E1D,
		0x98A8,
		0x7DFA,
		0x668F,
		0x7DD6,
		0xFDF8,
		0x7DB0,
		0x5F40,
		0x7D8A,
		0x8AC6,
		0x7D62,
		0x80EC,
		0x7D39,
		0x4218,
		0x7D0F,
		0xCEB2,
		0x7CE3,
		0x2724,
		0x7CB7,
		0x4BDE,
		0x7C89,
		0x3D50,
		0x7C5A,
		0xFBEE,
		0x7C29,
		0x8830,
		0x7BF8,
		0xE290,
		0x7BC5,
		0x0B89,
		0x7B92,
		0x039E,
		0x7B5D,
		0xCB4F,
		0x7B26,
		0x6323,
		0x7AEF,
		0xCBA4,
		0x7AB6,
		0x055B,
		0x7A7D,
		0x10D8,
		0x7A42,
		0xEEAD,
		0x7A05,
		0x9F6E,
		0x79C8,
		0x23B1,
		0x798A,
		0x7C12,
		0x794A,
		0xA92D,
		0x7909,
		0xABA2,
		0x78C7,
		0x8414,
		0x7884,
		0x3329,
		0x7840,
		0xB989,
		0x77FA,
		0x17DF,
		0x77B4,
		0x4EDB,
		0x776C,
		0x5F2D,
		0x7723,
		0x4989,
		0x76D9,
		0x0EA6,
		0x768E,
		0xAF3D,
		0x7641,
		0x2C0B,
		0x75F4,
		0x85CF,
		0x75A5,
		0xBD4C,
		0x7555,
		0xD345,
		0x7504,
		0xC884,
		0x74B2,
		0x9DD1,
		0x745F,
		0x53FB,
		0x740B,
		0xEBD1,
		0x73B5,
		0x6626,
		0x735F,
		0xC3D0,
		0x7307,
		0x05A7,
		0x72AF,
		0x2C85,
		0x7255,
		0x3949,
		0x71FA,
		0x2CD2,
		0x719E,
		0x0805,
		0x7141,
		0xCBC6,
		0x70E2,
		0x78FF,
		0x7083,
		0x109A,
		0x7023,
		0x9385,
		0x6FC1,
		0x02B2,
		0x6F5F,
		0x5F12,
		0x6EFB,
		0xA99D,
		0x6E96,
		0xE34A,
		0x6E30,
		0x0D14,
		0x6DCA,
		0x27FA,
		0x6D62,
		0x34FC,
		0x6CF9,
		0x351C,
		0x6C8F,
		0x2960,
		0x6C24,
		0x12D1,
		0x6BB8,
		0xF279,
		0x6B4A,
		0xC964,
		0x6ADC,
		0x98A4,
		0x6A6D,
		0x614A,
		0x69FD,
		0x246C,
		0x698C,
		0xE320,
		0x6919,
		0x9E81,
		0x68A6,
		0x57AB,
		0x6832,
		0x0FBD,
		0x67BD,
		0xC7D8,
		0x6746,
		0x8120,
		0x66CF,
		0x3CBB,
		0x6657,
		0xFBD3,
		0x65DD,
		0xBF92,
		0x6563,
		0x8926,
		0x64E8,
		0x59BF,
		0x646C,
		0x3290,
		0x63EF,
		0x14CC,
		0x6371,
		0x01AC,
		0x62F2,
		0xFA69,
		0x6271,
		0x003F,
		0x61F1,
		0x146C,
		0x616F,
		0x3830,
		0x60EC,
		0x6CCF,
		0x6068,
		0xB38D,
		0x5FE3,
		0x0DB3,
		0x5F5E,
		0x7C8A,
		0x5ED7,
		0x015D,
		0x5E50,
		0x9D7C,
		0x5DC7,
		0x5237,
		0x5D3E,
		0x20E0,
		0x5CB4,
		0x0ACC,
		0x5C29,
		0x1154,
		0x5B9D,
		0x35CF,
		0x5B10,
		0x799A,
		0x5A82,
		0xDE12,
		0x59F3,
		0x6498,
		0x5964,
		0x0E8C,
		0x58D4,
		0xDD54,
		0x5842,
		0xD256,
		0x57B0,
		0xEEFA,
		0x571D,
		0x34A9,
		0x568A,
		0xA4D2,
		0x55F5,
		0x40E2,
		0x5560,
		0x0A4B,
		0x54CA,
		0x027D,
		0x5433,
		0x2AF0,
		0x539B,
		0x8518,
		0x5302,
		0x126E,
		0x5269,
		0xD46E,
		0x51CE,
		0xCC94,
		0x5133,
		0xFC5E,
		0x5097,
		0x654D,
		0x4FFB,
		0x08E3,
		0x4F5E,
		0xE8A5,
		0x4EBF,
		0x0617,
		0x4E21,
		0x62C4,
		0x4D81,
		0x0034,
		0x4CE1,
		0xDFF4,
		0x4C3F,
		0x0390,
		0x4B9E,
		0x6C98,
		0x4AFB,
		0x1C9E,
		0x4A58,
		0x1533,
		0x49B4,
		0x57EE,
		0x490F,
		0xE665,
		0x4869,
		0xC22F,
		0x47C3,
		0xECE7,
		0x471C,
		0x6828,
		0x4675,
		0x358F,
		0x45CD,
		0x56BD,
		0x4524,
		0xCD50,
		0x447A,
		0x9AED,
		0x43D0,
		0xC135,
		0x4325,
		0x41D0,
		0x427A,
		0x1E65,
		0x41CE,
		0x589B,
		0x4121,
		0xF21D,
		0x4073,
		0xEC98,
		0x3FC5,
		0x49B8,
		0x3F17,
		0x0B2C,
		0x3E68,
		0x32A6,
		0x3DB8,
		0xC1D6,
		0x3D07,
		0xBA70,
		0x3C56,
		0x1E29,
		0x3BA5,
		0xEEB7,
		0x3AF2,
		0x2DD2,
		0x3A40,
		0xDD32,
		0x398C,
		0xFE93,
		0x38D8,
		0x93B0,
		0x3824,
		0x9E46,
		0x376F,
		0x2014,
		0x36BA,
		0x1AD9,
		0x3604,
		0x9057,
		0x354D,
		0x8250,
		0x3496,
		0xF287,
		0x33DE,
		0xE2C3,
		0x3326,
		0x54C7,
		0x326E,
		0x4A5E,
		0x31B5,
		0xC54D,
		0x30FB,
		0xC761,
		0x3041,
		0x5262,
		0x2F87,
		0x681E,
		0x2ECC,
		0x0A62,
		0x2E11,
		0x3AFC,
		0x2D55,
		0xFBBA,
		0x2C98,
		0x4E6F,
		0x2BDC,
		0x34EB,
		0x2B1F,
		0xB101,
		0x2A61,
		0xC485,
		0x29A3,
		0x714B,
		0x28E5,
		0xB928,
		0x2826,
		0x9DF4,
		0x2767,
		0x2186,
		0x26A8,
		0x45B6,
		0x25E8,
		0x0C5E,
		0x2528,
		0x7758,
		0x2467,
		0x887F,
		0x23A6,
		0x41AF,
		0x22E5,
		0xA4C5,
		0x2223,
		0xB3A0,
		0x2161,
		0x701C,
		0x209F,
		0xDC1B,
		0x1FDC,
		0xF97B,
		0x1F19,
		0xCA1E,
		0x1E56,
		0x4FE5,
		0x1D93,
		0x8CB3,
		0x1CCF,
		0x826A,
		0x1C0B,
		0x32EF,
		0x1B47,
		0xA026,
		0x1A82,
		0xCBF3,
		0x19BD,
		0xB83C,
		0x18F8,
		0x66E9,
		0x1833,
		0xD9DE,
		0x176D,
		0x1305,
		0x16A8,
		0x1445,
		0x15E2,
		0xDF86,
		0x151B,
		0x76B1,
		0x1455,
		0xDBB1,
		0x138E,
		0x106F,
		0x12C8,
		0x16D5,
		0x1201,
		0xF0CF,
		0x1139,
		0xA048,
		0x1072,
		0x272B,
		0x0FAB,
		0x8766,
		0x0EE3,
		0xC2E4,
		0x0E1B,
		0xDB92,
		0x0D53,
		0xD35E,
		0x0C8B,
		0xAC35,
		0x0BC3,
		0x6805,
		0x0AFB,
		0x08BD,
		0x0A33,
		0x9049,
		0x096A,
		0x009A,
		0x08A2,
		0x5B9E,
		0x07D9,
		0xA345,
		0x0710,
		0xD97C,
		0x0647,
		0x0035,
		0x057F,
		0x195D,
		0x04B6,
		0x26E6,
		0x03ED,
		0x2ABF,
		0x0324,
		0x26D7,
		0x025B,
		0x1D20,
		0x0192,
		0x0F88,
		0x00C9,
		0x0000,
		0x0000,
		0xF078,
		0xFF36,
		0xE2E0,
		0xFE6D,
		0xD929,
		0xFDA4,
		0xD541,
		0xFCDB,
		0xD91A,
		0xFC12,
		0xE6A3,
		0xFB49,
		0xFFCB,
		0xFA80,
		0x2684,
		0xF9B8,
		0x5CBB,
		0xF8EF,
		0xA462,
		0xF826,
		0xFF66,
		0xF75D,
		0x6FB7,
		0xF695,
		0xF743,
		0xF5CC,
		0x97FB,
		0xF504,
		0x53CB,
		0xF43C,
		0x2CA2,
		0xF374,
		0x246E,
		0xF2AC,
		0x3D1C,
		0xF1E4,
		0x789A,
		0xF11C,
		0xD8D5,
		0xF054,
		0x5FB8,
		0xEF8D,
		0x0F31,
		0xEEC6,
		0xE92B,
		0xEDFE,
		0xEF91,
		0xED37,
		0x244F,
		0xEC71,
		0x894F,
		0xEBAA,
		0x207A,
		0xEAE4,
		0xEBBB,
		0xEA1D,
		0xECFB,
		0xE957,
		0x2622,
		0xE892,
		0x9917,
		0xE7CC,
		0x47C4,
		0xE707,
		0x340D,
		0xE642,
		0x5FDA,
		0xE57D,
		0xCD11,
		0xE4B8,
		0x7D96,
		0xE3F4,
		0x734D,
		0xE330,
		0xB01B,
		0xE26C,
		0x35E2,
		0xE1A9,
		0x0685,
		0xE0E6,
		0x23E5,
		0xE023,
		0x8FE4,
		0xDF60,
		0x4C60,
		0xDE9E,
		0x5B3B,
		0xDDDC,
		0xBE51,
		0xDD1A,
		0x7781,
		0xDC59,
		0x88A8,
		0xDB98,
		0xF3A2,
		0xDAD7,
		0xBA4A,
		0xDA17,
		0xDE7A,
		0xD957,
		0x620C,
		0xD898,
		0x46D8,
		0xD7D9,
		0x8EB5,
		0xD71A,
		0x3B7B,
		0xD65C,
		0x4EFF,
		0xD59E,
		0xCB15,
		0xD4E0,
		0xB191,
		0xD423,
		0x0446,
		0xD367,
		0xC504,
		0xD2AA,
		0xF59E,
		0xD1EE,
		0x97E2,
		0xD133,
		0xAD9E,
		0xD078,
		0x389F,
		0xCFBE,
		0x3AB3,
		0xCF04,
		0xB5A2,
		0xCE4A,
		0xAB39,
		0xCD91,
		0x1D3D,
		0xCCD9,
		0x0D79,
		0xCC21,
		0x7DB0,
		0xCB69,
		0x6FA9,
		0xCAB2,
		0xE527,
		0xC9FB,
		0xDFEC,
		0xC945,
		0x61BA,
		0xC890,
		0x6C50,
		0xC7DB,
		0x016D,
		0xC727,
		0x22CE,
		0xC673,
		0xD22E,
		0xC5BF,
		0x1149,
		0xC50D,
		0xE1D7,
		0xC45A,
		0x4590,
		0xC3A9,
		0x3E2A,
		0xC2F8,
		0xCD5A,
		0xC247,
		0xF4D4,
		0xC197,
		0xB648,
		0xC0E8,
		0x1368,
		0xC03A,
		0x0DE3,
		0xBF8C,
		0xA765,
		0xBEDE,
		0xE19B,
		0xBE31,
		0xBE30,
		0xBD85,
		0x3ECB,
		0xBCDA,
		0x6513,
		0xBC2F,
		0x32B0,
		0xBB85,
		0xA943,
		0xBADB,
		0xCA71,
		0xBA32,
		0x97D8,
		0xB98A,
		0x1319,
		0xB8E3,
		0x3DD1,
		0xB83C,
		0x199B,
		0xB796,
		0xA812,
		0xB6F0,
		0xEACD,
		0xB64B,
		0xE362,
		0xB5A7,
		0x9368,
		0xB504,
		0xFC70,
		0xB461,
		0x200C,
		0xB3C0,
		0xFFCC,
		0xB31E,
		0x9D3C,
		0xB27E,
		0xF9E9,
		0xB1DE,
		0x175B,
		0xB140,
		0xF71D,
		0xB0A1,
		0x9AB3,
		0xB004,
		0x03A2,
		0xAF68,
		0x336C,
		0xAECC,
		0x2B92,
		0xAE31,
		0xED92,
		0xAD96,
		0x7AE8,
		0xACFD,
		0xD510,
		0xAC64,
		0xFD83,
		0xABCC,
		0xF5B5,
		0xAB35,
		0xBF1E,
		0xAA9F,
		0x5B2E,
		0xAA0A,
		0xCB57,
		0xA975,
		0x1106,
		0xA8E2,
		0x2DAA,
		0xA84F,
		0x22AC,
		0xA7BD,
		0xF174,
		0xA72B,
		0x9B68,
		0xA69B,
		0x21EE,
		0xA60C,
		0x8666,
		0xA57D,
		0xCA31,
		0xA4EF,
		0xEEAC,
		0xA462,
		0xF534,
		0xA3D6,
		0xDF20,
		0xA34B,
		0xADC9,
		0xA2C1,
		0x6284,
		0xA238,
		0xFEA3,
		0xA1AF,
		0x8376,
		0xA128,
		0xF24D,
		0xA0A1,
		0x4C73,
		0xA01C,
		0x9331,
		0x9F97,
		0xC7D0,
		0x9F13,
		0xEB94,
		0x9E90,
		0xFFC1,
		0x9E0E,
		0x0597,
		0x9D8E,
		0xFE54,
		0x9D0D,
		0xEB34,
		0x9C8E,
		0xCD70,
		0x9C10,
		0xA641,
		0x9B93,
		0x76DA,
		0x9B17,
		0x406E,
		0x9A9C,
		0x042D,
		0x9A22,
		0xC345,
		0x99A8,
		0x7EE0,
		0x9930,
		0x3828,
		0x98B9,
		0xF043,
		0x9842,
		0xA855,
		0x97CD,
		0x617F,
		0x9759,
		0x1CE0,
		0x96E6,
		0xDB94,
		0x9673,
		0x9EB6,
		0x9602,
		0x675C,
		0x9592,
		0x369C,
		0x9523,
		0x0D87,
		0x94B5,
		0xED2F,
		0x9447,
		0xD6A0,
		0x93DB,
		0xCAE4,
		0x9370,
		0xCB04,
		0x9306,
		0xD806,
		0x929D,
		0xF2EC,
		0x9235,
		0x1CB6,
		0x91CF,
		0x5663,
		0x9169,
		0xA0EE,
		0x9104,
		0xFD4E,
		0x90A0,
		0x6C7B,
		0x903E,
		0xEF66,
		0x8FDC,
		0x8701,
		0x8F7C,
		0x343A,
		0x8F1D,
		0xF7FB,
		0x8EBE,
		0xD32E,
		0x8E61,
		0xC6B7,
		0x8E05,
		0xD37B,
		0x8DAA,
		0xFA59,
		0x8D50,
		0x3C30,
		0x8CF8,
		0x99DA,
		0x8CA0,
		0x142F,
		0x8C4A,
		0xAC05,
		0x8BF4,
		0x622F,
		0x8BA0,
		0x377C,
		0x8B4D,
		0x2CBB,
		0x8AFB,
		0x42B4,
		0x8AAA,
		0x7A31,
		0x8A5A,
		0xD3F5,
		0x8A0B,
		0x50C3,
		0x89BE,
		0xF15A,
		0x8971,
		0xB677,
		0x8926,
		0xA0D3,
		0x88DC,
		0xB125,
		0x8893,
		0xE821,
		0x884B,
		0x4677,
		0x8805,
		0xCCD7,
		0x87BF,
		0x7BEC,
		0x877B,
		0x545E,
		0x8738,
		0x56D3,
		0x86F6,
		0x83EE,
		0x86B5,
		0xDC4F,
		0x8675,
		0x6092,
		0x8637,
		0x1153,
		0x85FA,
		0xEF28,
		0x85BD,
		0xFAA5,
		0x8582,
		0x345C,
		0x8549,
		0x9CDD,
		0x8510,
		0x34B1,
		0x84D9,
		0xFC62,
		0x84A2,
		0xF477,
		0x846D,
		0x1D70,
		0x843A,
		0x77D0,
		0x8407,
		0x0412,
		0x83D6,
		0xC2B0,
		0x83A5,
		0xB422,
		0x8376,
		0xD8DC,
		0x8348,
		0x314E,
		0x831C,
		0xBDE8,
		0x82F0,
		0x7F14,
		0x82C6,
		0x753A,
		0x829D,
		0xA0C0,
		0x8275,
		0x0208,
		0x824F,
		0x9971,
		0x8229,
		0x6758,
		0x8205,
		0x6C16,
		0x81E2,
		0xA801,
		0x81C0,
		0x1B6D,
		0x81A0,
		0xC6A9,
		0x8180,
		0xAA04,
		0x8162,
		0xC5C7,
		0x8145,
		0x1A3A,
		0x812A,
		0xA7A0,
		0x810F,
		0x6E3C,
		0x80F6,
		0x6E4C,
		0x80DE,
		0xA80A,
		0x80C7,
		0x1BAF,
		0x80B2,
		0xC971,
		0x809D,
		0xB180,
		0x808A,
		0xD40D,
		0x8078,
		0x3143,
		0x8068,
		0xC94C,
		0x8058,
		0x9C4D,
		0x804A,
		0xAA6A,
		0x803D,
		0xF3C2,
		0x8031,
		0x7872,
		0x8027,
		0x3895,
		0x801E,
		0x3440,
		0x8016,
		0x6B88,
		0x800F,
		0xDE7E,
		0x8009,
		0x8D2F,
		0x8005,
		0x77A6,
		0x8002,
		0x9DEA,
		0x8000
};
#endif
