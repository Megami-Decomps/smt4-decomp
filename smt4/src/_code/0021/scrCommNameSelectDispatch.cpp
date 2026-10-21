#include "common.h"

extern "C" {

extern s32 FUN_00295660(u32 kind, char *name);
extern s32 FUN_0029ede8(u32 kind, u32 arg, u32 a2, s32 a3);
extern char *FUN_002bd06c(u32 id);
extern char *FUN_002be650(u32 id, s32 flag);
extern char *aocEntryDataById(s32 id, u32 flag);
extern char *aocIndexValueOrDefault(u32 id);
extern char *libc_strcpy(char *dst, const char *src);
extern void memClear(void *dst, s32 size);
extern u32 scrGetArg(u32 index);

/* Script command: looks up the name of argument 1 in the table chosen by argument 0 (kinds 0-7 and 0x20-0x23, 8-15, 0x10-0x13, 0x14-0x17)
 * and hands it on; kinds 0x18-0x1f take the argument as is. */
u32 scrCommNameSelectDispatch(void)
{
    char name[132];
    u32 kind = scrGetArg(0);
    u32 arg = scrGetArg(1);

    memClear(name, 0x80);
    switch (kind) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
        libc_strcpy(name, FUN_002be650(arg, 1));
        FUN_00295660(kind, name);
        break;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        libc_strcpy(name, FUN_002bd06c((u16)arg));
        FUN_00295660(kind, name);
        break;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
        libc_strcpy(name, aocEntryDataById((s16)arg, 1));
        FUN_00295660(kind, name);
        break;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
        libc_strcpy(name, aocIndexValueOrDefault(arg));
        FUN_00295660(kind, name);
        break;
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
        FUN_0029ede8(kind, arg, 0xffffffff, 0);
        break;
    }
    return 1;
}

} /* extern "C" */
