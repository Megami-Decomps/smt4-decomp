#include "common.h"

extern "C" {

/* A record found by ID; only the two sort keys are named. */
typedef struct SortRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u16 order;
} SortRecord;

SortRecord *contentFindRecordById(u32 id);

/* Comparator over pointers to record IDs: sorts by order (descending), then by id; unknown records sort as 999. */
int FUN_00404d50(const u16 *left, const u16 *right)
{
    SortRecord *a = contentFindRecordById(*left);
    SortRecord *b = contentFindRecordById(*right);
    int orderA = a != NULL ? a->order : 999;
    int orderB = b != NULL ? b->order : 999;
    int result = orderB - orderA;

    if (result == 0) {
        a = contentFindRecordById(*left);
        b = contentFindRecordById(*right);
        int idA = a != NULL ? a->id : 999;
        int idB = b != NULL ? b->id : 999;
        result = idA - idB;
    }
    return result;
}

} /* extern "C" */
