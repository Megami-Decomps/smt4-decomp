/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00363c58` (_code @ 0x363c58, 0x7cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00215904(void);
int sysMemClear(unsigned char *, int);

extern unsigned int g_gameState; /* 0x5f15fc */
extern unsigned int DAT_005f1600; /* 0x5f1600 */
extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern unsigned char DAT_005f1614; /* 0x5f1614 */
extern unsigned int DAT_005f1618; /* 0x5f1618 */
extern unsigned char DAT_005f161c; /* 0x5f161c */
extern unsigned char DAT_005f161d; /* 0x5f161d */
extern unsigned char DAT_005f161f; /* 0x5f161f */
extern unsigned char DAT_005f1620; /* 0x5f1620 */
extern unsigned char DAT_005f1623; /* 0x5f1623 */
extern unsigned char DAT_005f1624; /* 0x5f1624 */
extern unsigned int DAT_005f1628; /* 0x5f1628 */
extern unsigned short DAT_005f162c; /* 0x5f162c */
extern unsigned char DAT_005f162e; /* 0x5f162e */
extern unsigned char DAT_005f162f; /* 0x5f162f */
extern unsigned char DAT_005f1630; /* 0x5f1630 */
extern unsigned char DAT_005f1631; /* 0x5f1631 */
extern unsigned char DAT_005f1632; /* 0x5f1632 */
extern unsigned char DAT_005f1633; /* 0x5f1633 */
extern unsigned char DAT_005f1634; /* 0x5f1634 */
extern unsigned int DAT_005f1638; /* 0x5f1638 */
extern unsigned int DAT_005f163c; /* 0x5f163c */
extern unsigned int DAT_005f1640; /* 0x5f1640 */
extern unsigned int DAT_005f1644; /* 0x5f1644 */
extern unsigned int DAT_005f1648; /* 0x5f1648 */
extern unsigned int DAT_005f164c; /* 0x5f164c */
extern unsigned int DAT_005f1650; /* 0x5f1650 */
extern unsigned int DAT_005f1654; /* 0x5f1654 */
extern unsigned int DAT_005f1658; /* 0x5f1658 */
extern unsigned int DAT_005f165c; /* 0x5f165c */
#ifndef ROMWRIGHT_STORAGE_DAT_005f1660_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_005f1660_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_005f1660_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_005f1660_4_4_size_check[(sizeof(union romwright_storage_DAT_005f1660_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_005f1660_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_005f1660_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_005f1660_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_005f1660_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_005f1660_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_005f1660_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_005f1660_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_005f1660_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_005f1660_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_005f1660_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_005f1660_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_005f1660_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_005f1660_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_005f1660_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_005f1660_4_4 DAT_005f1660; /* 0x5f1660 */
extern unsigned int DAT_005f16b0; /* 0x5f16b0 */
extern unsigned int DAT_005f16b4; /* 0x5f16b4 */
extern unsigned int DAT_005f16b8; /* 0x5f16b8 */
extern unsigned int DAT_005f16bc; /* 0x5f16bc */
extern unsigned int DAT_005f16c0; /* 0x5f16c0 */
extern unsigned int DAT_005f16c4; /* 0x5f16c4 */
extern unsigned int DAT_005f16c8; /* 0x5f16c8 */
extern unsigned int DAT_005f16cc; /* 0x5f16cc */
extern unsigned int DAT_005f16d0; /* 0x5f16d0 */
extern unsigned int DAT_005f16d4; /* 0x5f16d4 */
extern unsigned char DAT_005f16d8; /* 0x5f16d8 */
extern unsigned int DAT_005f16e0; /* 0x5f16e0 */
extern unsigned char DAT_005f16e4; /* 0x5f16e4 */
extern unsigned char DAT_005f16e5; /* 0x5f16e5 */
extern unsigned char DAT_005f16e6; /* 0x5f16e6 */
extern unsigned char DAT_005f16e7; /* 0x5f16e7 */
extern unsigned char DAT_005f16e8; /* 0x5f16e8 */
extern unsigned short DAT_005f16ea; /* 0x5f16ea */
extern unsigned short DAT_005f16ec; /* 0x5f16ec */
extern unsigned int DAT_005f16f0; /* 0x5f16f0 */
extern unsigned int DAT_005f16f4; /* 0x5f16f4 */
extern unsigned int DAT_005f16f8; /* 0x5f16f8 */
extern unsigned int DAT_005f16fc; /* 0x5f16fc */
extern unsigned int DAT_005f1700; /* 0x5f1700 */
extern unsigned int DAT_005f1704; /* 0x5f1704 */
extern unsigned int DAT_005f1708; /* 0x5f1708 */
extern unsigned char DAT_005f1724; /* 0x5f1724 */
extern unsigned char DAT_005f1725; /* 0x5f1725 */
extern unsigned char DAT_005f1726; /* 0x5f1726 */
extern unsigned char DAT_005f1727; /* 0x5f1727 */
extern unsigned char DAT_005f1728; /* 0x5f1728 */
extern unsigned char DAT_005f1729; /* 0x5f1729 */
extern unsigned char DAT_005f172a; /* 0x5f172a */
extern unsigned char DAT_005f172b; /* 0x5f172b */
extern unsigned short DAT_005f172c; /* 0x5f172c */
extern unsigned short DAT_005f172e; /* 0x5f172e */
extern unsigned char DAT_005f1730; /* 0x5f1730 */
extern unsigned char DAT_005f1748; /* 0x5f1748 */
extern unsigned char DAT_005f1749; /* 0x5f1749 */
extern unsigned char DAT_005f174a; /* 0x5f174a */
extern unsigned int DAT_005f174c; /* 0x5f174c */
extern unsigned char DAT_005f1750; /* 0x5f1750 */
extern unsigned char DAT_005f1768; /* 0x5f1768 */
extern unsigned char DAT_005f1769; /* 0x5f1769 */
extern unsigned int DAT_005f176c; /* 0x5f176c */
extern unsigned int DAT_005f1770; /* 0x5f1770 */
extern unsigned char DAT_005f1774; /* 0x5f1774 */
extern unsigned char DAT_005f1775; /* 0x5f1775 */
extern unsigned char DAT_005f1776; /* 0x5f1776 */
extern unsigned int DAT_005f1778; /* 0x5f1778 */
extern unsigned char DAT_005f177c; /* 0x5f177c */
extern unsigned short DAT_005f1794; /* 0x5f1794 */
extern unsigned short DAT_005f1796; /* 0x5f1796 */
extern unsigned char DAT_005f1798; /* 0x5f1798 */
extern unsigned short DAT_005f17a8; /* 0x5f17a8 */
extern unsigned short DAT_005f17aa; /* 0x5f17aa */
extern unsigned char DAT_005f17ac; /* 0x5f17ac */
extern unsigned int DAT_005f17b0; /* 0x5f17b0 */
extern unsigned int DAT_005f17b4; /* 0x5f17b4 */
extern unsigned int DAT_005f17b8; /* 0x5f17b8 */
extern unsigned int DAT_005f17bc; /* 0x5f17bc */
extern unsigned short DAT_005f17c4; /* 0x5f17c4 */
extern unsigned short DAT_005f17c6; /* 0x5f17c6 */
extern unsigned char DAT_005f17c8; /* 0x5f17c8 */
extern unsigned char DAT_005f17c9; /* 0x5f17c9 */
extern unsigned char DAT_005f17ca; /* 0x5f17ca */
extern unsigned char DAT_005f17d0; /* 0x5f17d0 */
extern unsigned int DAT_005f17d4; /* 0x5f17d4 */
extern unsigned int DAT_005f17d8; /* 0x5f17d8 */
extern unsigned int DAT_005f17dc; /* 0x5f17dc */
extern unsigned int DAT_005f17e0; /* 0x5f17e0 */
extern unsigned int DAT_005f17e4; /* 0x5f17e4 */
extern unsigned int DAT_005f17e8; /* 0x5f17e8 */
extern unsigned int DAT_005f17ec; /* 0x5f17ec */
extern unsigned int DAT_005f17f0; /* 0x5f17f0 */
extern unsigned int DAT_005f17f4; /* 0x5f17f4 */
extern unsigned int DAT_005f17f8; /* 0x5f17f8 */
extern unsigned int DAT_005f17fc; /* 0x5f17fc */
extern unsigned int DAT_005f1800; /* 0x5f1800 */
extern unsigned int DAT_005f1804; /* 0x5f1804 */
extern unsigned int DAT_005f1808; /* 0x5f1808 */
extern unsigned int DAT_005f180c; /* 0x5f180c */
extern unsigned int DAT_005f1810; /* 0x5f1810 */
extern unsigned int DAT_005f1814; /* 0x5f1814 */
extern unsigned int DAT_005f1818; /* 0x5f1818 */
extern unsigned int DAT_005f181c; /* 0x5f181c */
extern unsigned int DAT_005f1820; /* 0x5f1820 */
extern unsigned int DAT_005f1824; /* 0x5f1824 */
extern unsigned int DAT_005f1828; /* 0x5f1828 */
extern unsigned int DAT_005f182c; /* 0x5f182c */
extern unsigned int DAT_005f1830; /* 0x5f1830 */
extern unsigned int DAT_005f1834; /* 0x5f1834 */
extern unsigned int DAT_005f1838; /* 0x5f1838 */
extern unsigned int DAT_005f183c; /* 0x5f183c */
extern unsigned int DAT_005f1840; /* 0x5f1840 */
extern unsigned int DAT_005f1844; /* 0x5f1844 */
extern unsigned int DAT_005f1848; /* 0x5f1848 */
extern unsigned int DAT_005f184c; /* 0x5f184c */
extern unsigned int DAT_005f1850; /* 0x5f1850 */
extern unsigned short DAT_005f1854; /* 0x5f1854 */
extern unsigned short DAT_005f1856; /* 0x5f1856 */
extern unsigned char DAT_005f1858; /* 0x5f1858 */
extern unsigned char DAT_005f1859; /* 0x5f1859 */
extern unsigned char DAT_005f185a; /* 0x5f185a */
extern unsigned char DAT_005f185b; /* 0x5f185b */
extern unsigned char DAT_005f185c; /* 0x5f185c */
extern unsigned char DAT_005f185d; /* 0x5f185d */
extern unsigned char DAT_005f185e; /* 0x5f185e */
extern unsigned char DAT_005f185f; /* 0x5f185f */
extern unsigned int DAT_005f1860; /* 0x5f1860 */
extern unsigned int DAT_005f1864; /* 0x5f1864 */
extern unsigned int DAT_005f1868; /* 0x5f1868 */
extern unsigned int DAT_005f186c; /* 0x5f186c */
extern unsigned int DAT_005f1870; /* 0x5f1870 */
extern unsigned int DAT_005f1874; /* 0x5f1874 */
extern unsigned int DAT_005f1878; /* 0x5f1878 */
extern unsigned char DAT_005f187c; /* 0x5f187c */
extern unsigned short DAT_005f187e; /* 0x5f187e */
extern unsigned short DAT_005f1880; /* 0x5f1880 */
extern unsigned short DAT_005f1882; /* 0x5f1882 */
extern unsigned short DAT_005f1884; /* 0x5f1884 */
extern unsigned int DAT_005f1888; /* 0x5f1888 */
extern unsigned char DAT_005f188c; /* 0x5f188c */
extern unsigned char DAT_005f188d; /* 0x5f188d */
extern unsigned char DAT_005f188e; /* 0x5f188e */
extern unsigned char DAT_005f188f; /* 0x5f188f */
extern unsigned char DAT_005f1890; /* 0x5f1890 */
extern unsigned char DAT_005f1891; /* 0x5f1891 */
extern unsigned int DAT_005f18a0; /* 0x5f18a0 */
extern unsigned int DAT_005f18a4; /* 0x5f18a4 */
extern unsigned int DAT_005f18a8; /* 0x5f18a8 */
extern unsigned int DAT_005f18ac; /* 0x5f18ac */
extern unsigned int DAT_005f18b0; /* 0x5f18b0 */
extern unsigned int DAT_005f18b4; /* 0x5f18b4 */
extern unsigned short DAT_005f18b8; /* 0x5f18b8 */
extern unsigned short DAT_005f18ba; /* 0x5f18ba */
extern unsigned short DAT_005f18bc; /* 0x5f18bc */
extern unsigned char DAT_005f18be; /* 0x5f18be */
extern unsigned int DAT_005f18c0; /* 0x5f18c0 */
extern unsigned char DAT_005f18c4; /* 0x5f18c4 */
extern unsigned char DAT_005f18c5; /* 0x5f18c5 */
extern unsigned int DAT_005f18c8; /* 0x5f18c8 */
extern unsigned int DAT_005f18cc; /* 0x5f18cc */
extern unsigned int DAT_005f18d0; /* 0x5f18d0 */
extern unsigned int DAT_005f18d4; /* 0x5f18d4 */
extern unsigned int DAT_005f18d8; /* 0x5f18d8 */
extern unsigned int DAT_005f18dc; /* 0x5f18dc */
extern unsigned int DAT_005f18e0; /* 0x5f18e0 */
extern unsigned int DAT_005f18e4; /* 0x5f18e4 */
extern unsigned int DAT_005f18e8; /* 0x5f18e8 */
extern unsigned int DAT_005f18ec; /* 0x5f18ec */
extern unsigned int DAT_005f18f0; /* 0x5f18f0 */
extern unsigned int DAT_005f18f4; /* 0x5f18f4 */
extern unsigned int DAT_005f18f8; /* 0x5f18f8 */
extern unsigned int DAT_005f18fc; /* 0x5f18fc */
extern unsigned int DAT_005f1900; /* 0x5f1900 */
extern unsigned int DAT_005f1904; /* 0x5f1904 */
extern unsigned int DAT_005f1908; /* 0x5f1908 */
extern unsigned char DAT_005f190c; /* 0x5f190c */
extern unsigned int DAT_005f198c; /* 0x5f198c */
extern unsigned int DAT_005f1990; /* 0x5f1990 */
extern unsigned int DAT_005f1994; /* 0x5f1994 */
extern unsigned int DAT_005f1998; /* 0x5f1998 */
extern unsigned char DAT_005f199c; /* 0x5f199c */
extern unsigned char DAT_005f199d; /* 0x5f199d */
extern unsigned char DAT_005f199e; /* 0x5f199e */
extern unsigned char DAT_005f199f; /* 0x5f199f */
extern unsigned int DAT_005f19a0; /* 0x5f19a0 */
extern unsigned char DAT_005f19a4; /* 0x5f19a4 */
extern unsigned int DAT_005f19a8; /* 0x5f19a8 */
extern unsigned int DAT_005f19ac; /* 0x5f19ac */
extern unsigned int DAT_005f19b0; /* 0x5f19b0 */
extern unsigned int DAT_005f19b4; /* 0x5f19b4 */
extern unsigned int DAT_005f19b8; /* 0x5f19b8 */
extern unsigned int DAT_005f19bc; /* 0x5f19bc */
extern unsigned char DAT_005f19c0; /* 0x5f19c0 */
extern unsigned char DAT_005f19c1; /* 0x5f19c1 */
extern unsigned int DAT_005f19c4; /* 0x5f19c4 */
extern unsigned int DAT_005f19c8; /* 0x5f19c8 */
extern unsigned int DAT_005f19cc; /* 0x5f19cc */
extern unsigned int DAT_005f19d0; /* 0x5f19d0 */
extern unsigned char DAT_005f19d4; /* 0x5f19d4 */
extern unsigned int DAT_005f19d8; /* 0x5f19d8 */
extern unsigned int DAT_005f19dc; /* 0x5f19dc */
extern unsigned int DAT_005f19e0; /* 0x5f19e0 */
extern unsigned int DAT_005f19e4; /* 0x5f19e4 */
extern unsigned short DAT_005f19e8; /* 0x5f19e8 */
extern unsigned char DAT_005f19ea; /* 0x5f19ea */
extern unsigned char DAT_005f19eb; /* 0x5f19eb */
extern unsigned char DAT_005f19ec; /* 0x5f19ec */
extern unsigned char DAT_005f19ed; /* 0x5f19ed */
extern unsigned char DAT_005f19ee; /* 0x5f19ee */
extern unsigned char DAT_005f19ef; /* 0x5f19ef */
extern unsigned char DAT_005f19f0; /* 0x5f19f0 */
extern unsigned char DAT_005f19f1; /* 0x5f19f1 */
extern unsigned int DAT_005f19f4; /* 0x5f19f4 */
extern unsigned int DAT_005f19f8; /* 0x5f19f8 */
extern unsigned int DAT_005f19fc; /* 0x5f19fc */
extern unsigned char DAT_005f1a00; /* 0x5f1a00 */
extern unsigned int DAT_005f1a04; /* 0x5f1a04 */
extern unsigned int DAT_005f1a08; /* 0x5f1a08 */
extern unsigned int DAT_005f1a0c; /* 0x5f1a0c */
extern unsigned int DAT_005f1a10; /* 0x5f1a10 */
extern unsigned int DAT_005f1a14; /* 0x5f1a14 */
extern unsigned int DAT_005f1a18; /* 0x5f1a18 */
extern unsigned int DAT_005f1a1c; /* 0x5f1a1c */
extern unsigned int DAT_005f1a20; /* 0x5f1a20 */
extern unsigned int DAT_005f1a24; /* 0x5f1a24 */
extern unsigned int DAT_005f1a28; /* 0x5f1a28 */
extern unsigned int DAT_005f1a2c; /* 0x5f1a2c */
extern unsigned int DAT_005f1a30; /* 0x5f1a30 */
extern unsigned int DAT_005f1a34; /* 0x5f1a34 */
extern unsigned int DAT_005f1a38; /* 0x5f1a38 */
extern unsigned int DAT_005f1a3c; /* 0x5f1a3c */
extern unsigned int DAT_005f1a40; /* 0x5f1a40 */
extern unsigned int DAT_005f1a44; /* 0x5f1a44 */
extern unsigned int DAT_005f1a48; /* 0x5f1a48 */
extern unsigned char DAT_005f1a4c; /* 0x5f1a4c */
extern unsigned char DAT_005f1a4d; /* 0x5f1a4d */
extern unsigned char DAT_005f1a4e; /* 0x5f1a4e */
extern unsigned char DAT_005f1a4f; /* 0x5f1a4f */
extern unsigned int DAT_005f1a50; /* 0x5f1a50 */
extern unsigned char DAT_005f1a54; /* 0x5f1a54 */
extern unsigned int DAT_005f1a58; /* 0x5f1a58 */
extern unsigned char DAT_005f1a5c; /* 0x5f1a5c */
extern unsigned char DAT_005f1a5d; /* 0x5f1a5d */
extern unsigned char DAT_005f1a5e; /* 0x5f1a5e */
extern unsigned char DAT_005f1a5f; /* 0x5f1a5f */
extern unsigned char DAT_005f1a60; /* 0x5f1a60 */
extern unsigned char DAT_005f1a61; /* 0x5f1a61 */
extern unsigned int DAT_005f1a64; /* 0x5f1a64 */
extern unsigned int DAT_005f1a68; /* 0x5f1a68 */
extern unsigned int DAT_005f1a6c; /* 0x5f1a6c */
extern unsigned int DAT_005f1a70; /* 0x5f1a70 */
extern unsigned int DAT_005f1a74; /* 0x5f1a74 */
extern unsigned int DAT_005f1a78; /* 0x5f1a78 */
extern unsigned int DAT_005f1a7c; /* 0x5f1a7c */
extern unsigned int DAT_005f1a80; /* 0x5f1a80 */
extern unsigned int DAT_005f1a84; /* 0x5f1a84 */
extern unsigned char DAT_005f1a8c; /* 0x5f1a8c */
extern unsigned int DAT_005f1a90; /* 0x5f1a90 */
extern unsigned int DAT_005f1a94; /* 0x5f1a94 */
extern unsigned char DAT_005f1a98; /* 0x5f1a98 */
extern unsigned char DAT_005f1a99; /* 0x5f1a99 */
extern unsigned char DAT_005f1a9a; /* 0x5f1a9a */
extern unsigned char DAT_005f1a9b; /* 0x5f1a9b */
extern unsigned int DAT_005f1a9c; /* 0x5f1a9c */
extern unsigned int DAT_005f1aa0; /* 0x5f1aa0 */
extern unsigned char DAT_005f1aa4; /* 0x5f1aa4 */
extern unsigned int DAT_005f1aa8; /* 0x5f1aa8 */
extern unsigned int DAT_005f1aac; /* 0x5f1aac */
extern unsigned int DAT_005f1ab0; /* 0x5f1ab0 */
extern unsigned int DAT_005f1ab4; /* 0x5f1ab4 */
extern unsigned int DAT_005f1ab8; /* 0x5f1ab8 */
extern unsigned char DAT_005f1abc; /* 0x5f1abc */
extern unsigned int DAT_005f1ac0; /* 0x5f1ac0 */
extern unsigned int DAT_005f1ac4; /* 0x5f1ac4 */
extern unsigned char DAT_005f1ac8; /* 0x5f1ac8 */
extern unsigned char DAT_005f1ac9; /* 0x5f1ac9 */
extern unsigned char DAT_005f1aca; /* 0x5f1aca */
extern unsigned char DAT_005f1acb; /* 0x5f1acb */
extern unsigned int DAT_005f1acc; /* 0x5f1acc */
extern unsigned int DAT_005f1ad0; /* 0x5f1ad0 */
extern unsigned char DAT_005f1ad4; /* 0x5f1ad4 */
extern unsigned char DAT_005f1ad5; /* 0x5f1ad5 */
extern unsigned char DAT_005f1ad6; /* 0x5f1ad6 */
extern unsigned char DAT_005f1ad7; /* 0x5f1ad7 */
extern unsigned int DAT_005f1ad8; /* 0x5f1ad8 */
extern unsigned char DAT_005f1adc; /* 0x5f1adc */
extern unsigned char DAT_005f1add; /* 0x5f1add */
extern unsigned int DAT_005f1ae0; /* 0x5f1ae0 */
extern unsigned int DAT_005f1ae4; /* 0x5f1ae4 */
extern unsigned int DAT_005f1ae8; /* 0x5f1ae8 */
extern unsigned int DAT_005f1aec; /* 0x5f1aec */
extern unsigned char DAT_005f1af0; /* 0x5f1af0 */
extern unsigned int DAT_005f1af4; /* 0x5f1af4 */
extern unsigned int DAT_005f1af8; /* 0x5f1af8 */
extern unsigned char g_lmapMain; /* 0x5f1afc */
extern unsigned int DAT_005f1b00; /* 0x5f1b00 */
extern unsigned char DAT_005f1b04; /* 0x5f1b04 */
extern unsigned char DAT_005f1b05; /* 0x5f1b05 */
extern unsigned char DAT_005f1b70; /* 0x5f1b70 */
extern unsigned int DAT_005f1b74; /* 0x5f1b74 */
extern unsigned int DAT_005f1b78; /* 0x5f1b78 */
extern unsigned int DAT_005f1b7c; /* 0x5f1b7c */
extern unsigned int DAT_005f1b80; /* 0x5f1b80 */
extern unsigned int DAT_005f1b84; /* 0x5f1b84 */
extern unsigned int DAT_005f1b88; /* 0x5f1b88 */
extern unsigned int DAT_005f1b8c; /* 0x5f1b8c */
extern unsigned int DAT_005f1bb4; /* 0x5f1bb4 */
extern unsigned int DAT_005f1bb8; /* 0x5f1bb8 */
extern unsigned int DAT_005f1bbc; /* 0x5f1bbc */
extern unsigned int DAT_005f1bc0; /* 0x5f1bc0 */
extern unsigned char DAT_005f1bc4; /* 0x5f1bc4 */
extern unsigned int DAT_005f1bc8; /* 0x5f1bc8 */
extern unsigned int DAT_005f1bcc; /* 0x5f1bcc */
extern unsigned int DAT_005f1bd0; /* 0x5f1bd0 */
extern unsigned int DAT_005f1bd4; /* 0x5f1bd4 */
extern unsigned short DAT_005f1bd8; /* 0x5f1bd8 */
extern unsigned short DAT_005f1bda; /* 0x5f1bda */
extern unsigned int DAT_005f1bdc; /* 0x5f1bdc */
extern unsigned int DAT_005f1be0; /* 0x5f1be0 */
extern unsigned int DAT_005f1be4; /* 0x5f1be4 */
extern unsigned int DAT_005f1be8; /* 0x5f1be8 */
extern unsigned int DAT_005f1bec; /* 0x5f1bec */
extern unsigned int DAT_005f1bf0; /* 0x5f1bf0 */
extern unsigned int DAT_005f1bf4; /* 0x5f1bf4 */
extern unsigned int DAT_005f1bf8; /* 0x5f1bf8 */
extern unsigned int DAT_005f1bfc; /* 0x5f1bfc */
extern unsigned int DAT_005f1c00; /* 0x5f1c00 */
extern unsigned int DAT_005f1c04; /* 0x5f1c04 */
extern unsigned char DAT_005f1c08; /* 0x5f1c08 */
extern unsigned int DAT_005f1c0c; /* 0x5f1c0c */
extern unsigned int DAT_005f1c10; /* 0x5f1c10 */
extern unsigned int DAT_005f1c14; /* 0x5f1c14 */
extern unsigned int DAT_005f1c18; /* 0x5f1c18 */
extern unsigned int DAT_005f1c1c; /* 0x5f1c1c */
extern unsigned int DAT_005f1c20; /* 0x5f1c20 */
extern unsigned int DAT_005f1c24; /* 0x5f1c24 */
extern unsigned int DAT_005f1c28; /* 0x5f1c28 */
extern unsigned int DAT_005f1c2c; /* 0x5f1c2c */
extern unsigned int DAT_005f1c30; /* 0x5f1c30 */
extern unsigned int DAT_005f1c34; /* 0x5f1c34 */
extern unsigned int DAT_005f1c38; /* 0x5f1c38 */
extern unsigned int DAT_005f1c3c; /* 0x5f1c3c */
extern unsigned int DAT_005f1c40; /* 0x5f1c40 */
extern unsigned int DAT_005f1c44; /* 0x5f1c44 */
extern unsigned char DAT_005f1c48; /* 0x5f1c48 */
extern unsigned int DAT_005f1c4c; /* 0x5f1c4c */
extern unsigned int DAT_005f1c50; /* 0x5f1c50 */
extern unsigned char DAT_005f1c54; /* 0x5f1c54 */
extern unsigned int DAT_005f1c58; /* 0x5f1c58 */
extern unsigned int DAT_005f1c5c; /* 0x5f1c5c */
extern unsigned char DAT_005f1c60; /* 0x5f1c60 */
extern unsigned char DAT_005f1c61; /* 0x5f1c61 */
extern unsigned char DAT_005f1c62; /* 0x5f1c62 */
extern unsigned char DAT_005f1c63; /* 0x5f1c63 */
extern unsigned int DAT_005f1c64; /* 0x5f1c64 */
extern unsigned int DAT_005f1c68; /* 0x5f1c68 */
extern unsigned int DAT_005f1c6c; /* 0x5f1c6c */
extern unsigned char DAT_005f1c70; /* 0x5f1c70 */
extern unsigned char DAT_005f1c71; /* 0x5f1c71 */
extern unsigned char DAT_005f1c72; /* 0x5f1c72 */
extern unsigned char DAT_005f1c73; /* 0x5f1c73 */
extern unsigned int DAT_005f1c74; /* 0x5f1c74 */
extern unsigned char DAT_005f1c7c; /* 0x5f1c7c */
extern unsigned char DAT_005f1c7d; /* 0x5f1c7d */
extern unsigned char DAT_005f1c7e; /* 0x5f1c7e */
extern unsigned char DAT_005f1c7f; /* 0x5f1c7f */
extern unsigned int DAT_005f1c80; /* 0x5f1c80 */
extern unsigned int DAT_005f1c84; /* 0x5f1c84 */
extern unsigned int DAT_005f1c88; /* 0x5f1c88 */
extern unsigned int DAT_005f1c8c; /* 0x5f1c8c */
extern unsigned char DAT_005f1c90; /* 0x5f1c90 */
extern unsigned char DAT_005f1c91; /* 0x5f1c91 */
extern unsigned char DAT_005f1c92; /* 0x5f1c92 */
extern unsigned int DAT_005f1c94; /* 0x5f1c94 */
extern unsigned int DAT_005f1c98; /* 0x5f1c98 */
extern unsigned int DAT_005f1c9c; /* 0x5f1c9c */
extern unsigned int DAT_005f1ca0; /* 0x5f1ca0 */
extern unsigned int DAT_005f1ca4; /* 0x5f1ca4 */

extern int gameFlagsGetBlock(unsigned int *);
/* Supplied declaration required: FUN_00215904. */
/* Supplied declaration required: sysMemClear. */
extern unsigned long long FUN_00324f74(int);


void FUN_00363c58(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  
  g_gameState = 0;
  DAT_005f1600 = 3;
  DAT_005f1604 = 0xffffffff;
  DAT_005f1614 = 0;
  DAT_005f1618 = 0;
  DAT_005f161c = 0;
  DAT_005f161d = 0;
  DAT_005f1638 = 0xffffffff;
  DAT_005f163c = 0;
  DAT_005f1640 = 0;
  DAT_005f1644 = 0;
  DAT_005f1648 = 0;
  DAT_005f164c = 0;
  DAT_005f1650 = 0;
  DAT_005f1654 = 0;
  DAT_005f165c = 0xffffffff;
  DAT_005f1658 = 0;
  DAT_005f1660.u1[0] = 0;
  DAT_005f16e0 = 0;
  if (param_1 == 0) {
    DAT_005f1634 = 0;
  }
  DAT_005f1628 = 0;
  DAT_005f162c = 0;
  DAT_005f162e = 0;
  DAT_005f162f = 0xff;
  DAT_005f1630 = 0xff;
  DAT_005f1631 = 0xff;
  DAT_005f1632 = 0xff;
  DAT_005f1633 = 0xff;
  temp_v3 = 0;
  DAT_005f161f = 0;
  DAT_005f1620 = 0;
  DAT_005f16b0 = 0;
  DAT_005f16b4 = 0;
  DAT_005f16b8 = 0;
  DAT_005f16bc = 0;
  DAT_005f16c0 = 0;
  DAT_005f16c4 = 0;
  DAT_005f16c8 = 0;
  DAT_005f16cc = 0;
  DAT_005f16d0 = 0;
  DAT_005f16d4 = 0;
  DAT_005f16d8 = 0;
  DAT_005f16e4 = 0;
  DAT_005f16e5 = 0;
  DAT_005f16e6 = 0;
  DAT_005f16e7 = 0;
  DAT_005f16e8 = 0;
  DAT_005f16ea = 0;
  DAT_005f16ec = 0xffff;
  DAT_005f16f0 = 0;
  DAT_005f16f4 = 0x42c80000;
  DAT_005f16f8 = 0;
  DAT_005f16fc = 0;
  DAT_005f1700 = 0x42c80000;
  temp_v4 = 0x44fa0000;
  DAT_005f1704 = 0x42c80000;
  DAT_005f1708 = 0x42200000;
  DAT_005f1725 = 0;
  DAT_005f1726 = 0;
  DAT_005f1727 = 0;
  DAT_005f1728 = 0;
  DAT_005f1729 = 0;
  DAT_005f172a = 0;
  DAT_005f172b = 0;
  DAT_005f172c = 0;
  DAT_005f172e = 0;
  DAT_005f1730 = 0;
  DAT_005f1748 = 1;
  DAT_005f1749 = 1;
  DAT_005f174a = 0;
  DAT_005f174c = 0;
  DAT_005f1750 = 0;
  DAT_005f1774 = 0;
  DAT_005f1768 = 0;
  DAT_005f1769 = 0;
  DAT_005f176c = 0;
  DAT_005f1770 = 0;
  DAT_005f1775 = 0;
  DAT_005f1776 = 0;
  DAT_005f1778 = 0;
  DAT_005f177c = 0;
  DAT_005f1794 = 0;
  DAT_005f1796 = 0;
  DAT_005f1798 = 0;
  DAT_005f17a8 = 0;
  DAT_005f17aa = 0;
  DAT_005f17ac = 0;
  DAT_005f17b0 = 0;
  DAT_005f17b4 = 0;
  DAT_005f17b8 = 0;
  DAT_005f17bc = 0;
  DAT_005f17c4 = 0;
  DAT_005f17c6 = 0;
  DAT_005f17c8 = 0;
  DAT_005f17c9 = 0;
  DAT_005f17ca = 0;
  DAT_005f17d0 = 0;
  DAT_005f17d4 = 0;
  DAT_005f17d8 = 0;
  DAT_005f17dc = 0;
  DAT_005f17e0 = 0;
  DAT_005f17e4 = 0;
  DAT_005f17e8 = 0;
  DAT_005f17ec = 0;
  DAT_005f1623 = 0;
  DAT_005f1624 = 0;
  DAT_005f1b70 = 0;
  DAT_005f1b74 = 0;
  DAT_005f1b78 = 0;
  DAT_005f1b7c = 0xffffffff;
  DAT_005f1b80 = 0;
  DAT_005f1b84 = 0;
  DAT_005f1b88 = 0;
  DAT_005f1b8c = 0;
  DAT_005f17f0 = 0x3c;
  DAT_005f17f4 = 8;
  DAT_005f17f8 = 0;
  DAT_005f17fc = 0;
  DAT_005f1800 = 0;
  DAT_005f1a08 = 0x43c80000;
  DAT_005f1a04 = 0x42fa0000;
  DAT_005f1a0c = 0;
  DAT_005f1a10 = 0;
  DAT_005f1a14 = 0;
  DAT_005f1c63 = 0;
  DAT_005f1a58 = 0;
  DAT_005f1a5c = 0;
  DAT_005f1a5d = 0;
  DAT_005f1a5e = 0;
  DAT_005f1a5f = 0;
  DAT_005f1a60 = 0;
  DAT_005f1a61 = 0;
  DAT_005f1a64 = 0;
  DAT_005f1a68 = 0;
  DAT_005f1a6c = 0;
  DAT_005f1a70 = 0;
  DAT_005f1a74 = 0;
  DAT_005f1a78 = 0;
  DAT_005f1a7c = 0;
  DAT_005f1ad6 = 0;
  DAT_005f1804 = 0;
  DAT_005f1808 = 0;
  DAT_005f180c = 0;
  DAT_005f1810 = 0;
  DAT_005f1814 = 0;
  DAT_005f1818 = 0;
  DAT_005f181c = 0;
  DAT_005f1820 = 0;
  DAT_005f1824 = 0;
  DAT_005f1828 = 0;
  DAT_005f182c = 0;
  DAT_005f1830 = 0;
  DAT_005f1834 = 0;
  DAT_005f1838 = 0;
  DAT_005f183c = 0;
  DAT_005f1840 = 0;
  DAT_005f1844 = 0;
  DAT_005f1848 = 0;
  DAT_005f184c = 0;
  DAT_005f1854 = 0;
  DAT_005f1856 = 0;
  DAT_005f1858 = 0;
  DAT_005f185c = 0;
  DAT_005f1859 = 1;
  DAT_005f185a = 1;
  DAT_005f185b = 0;
  DAT_005f185d = 0;
  DAT_005f185e = 0;
  DAT_005f185f = 0;
  DAT_005f1860 = 0;
  DAT_005f1864 = 0;
  DAT_005f187c = 0;
  DAT_005f1868 = 0;
  DAT_005f186c = 0;
  DAT_005f1870 = 0;
  DAT_005f1874 = 0;
  DAT_005f1878 = 0;
  DAT_005f187e = 0;
  DAT_005f1880 = 0;
  DAT_005f1882 = 0;
  DAT_005f1884 = 0;
  DAT_005f1888 = 0;
  DAT_005f188c = 0;
  DAT_005f188d = 0;
  DAT_005f188e = 0;
  DAT_005f188f = 0;
  DAT_005f1890 = 0;
  DAT_005f1891 = 0;
  DAT_005f1bb4 = 1;
  DAT_005f1bb8 = 1;
  DAT_005f1bbc = 0;
  DAT_005f1bc0 = 0;
  DAT_005f19ee = 0;
  DAT_005f199e = 0;
  DAT_005f199f = 0;
  DAT_005f1a4e = 0;
  DAT_005f1a4f = 0;
  DAT_005f1a50 = 0xffffffff;
  DAT_005f1a54 = 0;
  DAT_005f1a80 = 0;
  DAT_005f1a8c = 0;
  DAT_005f1a90 = 0x42c80000;
  DAT_005f1a94 = 0x43480000;
  DAT_005f1a98 = 0;
  DAT_005f1a99 = 0;
  DAT_005f1a9a = 0;
  DAT_005f1a9b = 0;
  DAT_005f1aa0 = 0;
  DAT_005f1aa8 = 0;
  DAT_005f1aac = 0;
  DAT_005f1ab0 = 0;
  DAT_005f1ab4 = 0xffffffff;
  DAT_005f1ab8 = 0xffffffff;
  DAT_005f1abc = 0;
  DAT_005f1ac0 = 0;
  DAT_005f1ac4 = 0;
  DAT_005f1acb = 0;
  DAT_005f1c90 = 0;
  DAT_005f1acc = 0;
  DAT_005f1ad0 = 0;
  DAT_005f1850 = 0;
  DAT_005f18a0 = 0x1e;
  DAT_005f18a4 = 0x455ac000;
  DAT_005f18a8 = 0x44fa0000;
  DAT_005f18ac = 0x43fa0000;
  DAT_005f18b0 = 0x43160000;
  DAT_005f18b4 = 0x447a0000;
  DAT_005f18b8 = 0x46;
  DAT_005f18ba = 8;
  DAT_005f18bc = 4;
  DAT_005f18be = 4;
  DAT_005f18c0 = 0;
  DAT_005f18c4 = 0;
  DAT_005f18c5 = 0;
  DAT_005f1bc4 = 0;
  DAT_005f1bc8 = 0;
  DAT_005f1bcc = 0;
  DAT_005f1bd0 = 0;
  DAT_005f1bd4 = 0;
  DAT_005f1bd8 = 0;
  DAT_005f1bda = 0;
  DAT_005f1bdc = 0;
  DAT_005f1be0 = 0;
  DAT_005f1be4 = 0;
  if (param_1 == 0) {
    DAT_005f1be8 = 0;
  }
  DAT_005f1bec = 0;
  DAT_005f1bf0 = 0;
  DAT_005f1bf4 = 0;
  DAT_005f1bf8 = 0;
  DAT_005f1bfc = 1;
  DAT_005f1c00 = 0;
  DAT_005f1c04 = 0;
  DAT_005f1c08 = 0;
  DAT_005f1c0c = 0;
  DAT_005f1c10 = 1;
  DAT_005f1c14 = 0;
  DAT_005f1c18 = 0;
  DAT_005f1c1c = 0;
  DAT_005f1c20 = 1;
  DAT_005f1c24 = 0;
  DAT_005f1c28 = 5;
  DAT_005f1c2c = 3;
  DAT_005f1c30 = 1;
  DAT_005f1c34 = 0x80;
  DAT_005f1c38 = 1;
  DAT_005f1c3c = 0xff;
  DAT_005f1c40 = 0xff;
  DAT_005f1c44 = 0xff;
  DAT_005f1c48 = 0;
  DAT_005f1c4c = 0xffffffff;
  DAT_005f1c50 = 0xffffffff;
  DAT_005f1c54 = 0;
  DAT_005f1c58 = 0;
  DAT_005f1c5c = 0;
  DAT_005f1c60 = 0;
  DAT_005f1c61 = 0;
  DAT_005f1c64 = 0;
  DAT_005f1c68 = 0xffffffff;
  DAT_005f1c6c = 0xffffffff;
  DAT_005f1c70 = 0;
  DAT_005f1c71 = 1;
  DAT_005f1c7c = 0;
  DAT_005f1c7d = 0;
  DAT_005f1c7e = 0;
  DAT_005f1aa4 = 0;
  DAT_005f1c62 = 0;
  DAT_005f18c8 = 0;
  DAT_005f18cc = 0;
  DAT_005f18d8 = 0;
  DAT_005f18d0 = 0;
  DAT_005f18dc = 0;
  DAT_005f18d4 = 0;
  DAT_005f18e0 = 0;
  DAT_005f18e4 = 0;
  DAT_005f18e8 = 0;
  DAT_005f1908 = 0;
  DAT_005f198c = 0;
  DAT_005f1990 = 0;
  DAT_005f1998 = 0;
  DAT_005f1994 = 0;
  DAT_005f199c = 0;
  DAT_005f18ec = 0;
  DAT_005f18f0 = 0;
  DAT_005f18f4 = 0;
  DAT_005f18f8 = 0;
  DAT_005f18fc = 0;
  DAT_005f1900 = 0;
  DAT_005f1904 = 0;
  sysMemClear(&DAT_005f190c,0x80);
  DAT_005f19d4 = 0;
  DAT_005f19e8 = 0;
  DAT_005f19a0 = 0x42340000;
  DAT_005f19a4 = 1;
  DAT_005f19a8 = 0x41000000;
  DAT_005f19ac = 0x40400000;
  DAT_005f19b4 = 0x44480000;
  DAT_005f19b8 = 0x425c0000;
  DAT_005f19bc = 0x43020000;
  DAT_005f19c0 = 0;
  DAT_005f19c1 = 0;
  DAT_005f19c4 = 0;
  DAT_005f19cc = 0x467a0000;
  DAT_005f19c8 = 0;
  DAT_005f19eb = 0;
  DAT_005f199d = 0;
  DAT_005f1c72 = 0;
  DAT_005f19ea = 0;
  DAT_005f1724 = 0;
  DAT_005f19ec = 0;
  DAT_005f19ed = 0;
  DAT_005f19ef = 0;
  DAT_005f19f0 = 0;
  DAT_005f19f1 = 0;
  DAT_005f19f4 = 0;
  DAT_005f19f8 = 0;
  DAT_005f19fc = 0;
  DAT_005f1a00 = 0;
  DAT_005f1a48 = 0;
  DAT_005f1a4c = 0;
  DAT_005f1a4d = 1;
  DAT_005f1c73 = 0;
  DAT_005f1c7f = 0;
  DAT_005f1c80 = 0;
  DAT_005f1c91 = 0;
  DAT_005f1ac8 = 0;
  DAT_005f1ac9 = 0;
  DAT_005f1c74 = 0;
  DAT_005f1c98 = 0xffffffff;
  DAT_005f1c9c = 0xffffffff;
  DAT_005f1ca0 = 0xffffffff;
  DAT_005f1ca4 = 0xffffffff;
  DAT_005f19b0 = temp_v4;
  DAT_005f19d0 = temp_v3;
  DAT_005f19d8 = temp_v3;
  DAT_005f19dc = temp_v3;
  DAT_005f19e0 = temp_v3;
  DAT_005f19e4 = temp_v3;
  DAT_005f1a18 = temp_v3;
  DAT_005f1a1c = temp_v3;
  DAT_005f1a20 = temp_v3;
  DAT_005f1a24 = temp_v3;
  DAT_005f1a28 = temp_v3;
  DAT_005f1a2c = temp_v3;
  DAT_005f1a30 = temp_v3;
  DAT_005f1a34 = temp_v3;
  DAT_005f1a38 = temp_v3;
  DAT_005f1a3c = temp_v3;
  DAT_005f1a40 = temp_v3;
  DAT_005f1a44 = temp_v3;
  DAT_005f1a84 = temp_v3;
  DAT_005f1c84 = temp_v3;
  DAT_005f1c88 = temp_v3;
  DAT_005f1c8c = temp_v3;
  FUN_00215904();
  DAT_005f1a9c = 0;
  DAT_005f1aca = 0;
  DAT_005f1c92 = 0;
  DAT_005f1c94 = 0;
  DAT_005f1ad4 = 0;
  DAT_005f1ad5 = 0;
  DAT_005f1ad7 = 0;
  DAT_005f1ad8 = 0;
  DAT_005f1adc = 0;
  DAT_005f1add = 0;
  DAT_005f1af0 = 0;
  DAT_005f1af4 = 0;
  DAT_005f1af8 = 0;
  g_lmapMain = 0;
  DAT_005f1b00 = 0;
  DAT_005f1b04 = 0;
  DAT_005f1b05 = 0;
  DAT_005f1ae0 = temp_v3;
  DAT_005f1ae4 = temp_v3;
  DAT_005f1ae8 = temp_v3;
  DAT_005f1aec = temp_v3;
  temp_v0 = gameFlagsGetBlock(&g_gameState);
  temp_v2 = 0;
  do {
    temp_v5 = FUN_00324f74(temp_v2);
    temp_v2 = (int)((unsigned long long)temp_v5 >> 0x20);
    temp_v1 = (int)temp_v5;
    if (temp_v1 == 0) {
      *(unsigned char *)(temp_v0 + temp_v2 + 0xe48) = 0;
    }
    else if ((temp_v1 == 1 || temp_v1 == 2) || temp_v1 == 3) {
      if (param_1 == 2) {
        *(unsigned char *)(temp_v0 + temp_v2 + 0xe48) = 3;
      }
      else if (param_1 == 0) {
        *(unsigned char *)(temp_v0 + temp_v2 + 0xe48) = 1;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x40);
  return;
}

} /* extern "C" */
