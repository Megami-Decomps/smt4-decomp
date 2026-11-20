#include "common.h"
#include "code/Code0034_Smt4.h"

extern "C" {

extern int table1bOr1cGetRecordValue(void *id);
extern int dataTable1bOr1cRecordHasFlag1(void *id); // declcheck: local (the shared declaration in code/Code001b.h does not compile here: more than one instance of overloaded function "table1bOr1cGetRecordValue" has "C" linkage)
extern u8 *gameGetFlagBlock(void);

/* Finds the address of the slot (0xE bytes each from +0x842, four slots, then +0x87A) in the table whose id matches. */
int goalConditionsFindSlot(void *id)
{
    u8 *table = gameGetFlagBlock();

    if (dataTable1bOr1cRecordHasFlag1(id) != 0) {
        if ((void *)(u32)*(u16 *)(table + 0x842) == id) {
            return (int)(table + 0x842);
        }
        if ((void *)(u32)*(u16 *)(table + 0x850) == id) {
            return (int)(table + 0x850);
        }
        if ((void *)(u32)*(u16 *)(table + 0x85e) == id) {
            return (int)(table + 0x85e);
        }
        if ((void *)(u32)*(u16 *)(table + 0x86c) == id) {
            return (int)(table + 0x86c);
        }
    } else {
        if (table1bOr1cGetRecordValue(id) == 1) {
            return (int)(table + 0x87a);
        }
    }
    return 0;
}

} /* extern "C" */
