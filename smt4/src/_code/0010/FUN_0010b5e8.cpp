/* Runs FUN_00107934 and FUN_00108b6c, then accelerometerUpdate (placed right after, so the last call is a linker NOP). */
extern "C" {
void FUN_00107934(void);
void FUN_00108b6c(void);
void accelerometerUpdate(void);

void FUN_0010b5e8(void)
{
    FUN_00107934();
    FUN_00108b6c();
    accelerometerUpdate();
}
}
