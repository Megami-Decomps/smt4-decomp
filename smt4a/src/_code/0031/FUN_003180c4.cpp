#include "common.h"
#include "text/TextDraw.h"
extern "C" {
struct Entry {
    char work[104];
};
extern Entry DAT_0063afc8[];
void memClearWords(void *,u32);
void FUN_003180c4(u32 index, const char *value) {
    char *work = DAT_0063afc8[index].work;
    memClearWords(work,104);
    FUN_001654f8(value,work,104);
}
}
