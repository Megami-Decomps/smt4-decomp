/* Runs FUN_00107934 and touchInputUpdate, then accelerometerUpdate (placed right after, so the last call is a linker NOP). */
extern "C" {
void FUN_00107934(void);
void touchInputUpdate(void);
void accelerometerUpdate(void);

void FUN_0010b5e8(void)
{
    FUN_00107934();
    touchInputUpdate();
    accelerometerUpdate();
}
}
