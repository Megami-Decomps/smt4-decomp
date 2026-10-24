/* NON_MATCHING: retail inlines the byte-vector range insert (_C_insert_aux2 plus copy/copy_backward/uninitialized_copy, 204 rows) into the copy construction, ours calls the shared _C_insert_aux2 instantiation (63 rows); the vector::at bounds check and the 0xB8-stride record lookup match the retail prologue exactly */
#include "stl/AsdAllocator.h"
#include <vector>

typedef std::vector<u8, AsdAllocator<u8> > ByteVector;

/* Record of the table (observed fields only), stride 0xB8. */
struct DataRecord {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ ByteVector bytes;
    /* 0x40 */ u8 unk40[0xB8 - 0x40];
};

typedef std::vector<DataRecord, AsdAllocator<DataRecord> > DataRecordVector;

struct DataRecordTable {
    /* 0x00 */ u8 unk00[0xE8];
    /* 0xE8 */ DataRecordVector records;
};

extern "C" {

/* Returns a copy of the byte vector of record `index` (bounds-checked like vector::at). */
ByteVector FUN_00413af4(const DataRecordTable *table, u32 index)
{
    return table->records.at(index).bytes;
}

} /* extern "C" */
