# Scroll helper output contract

`uiScrollHandleActionsOrTouch` writes a signed byte containing zero or one,
not a C++ `bool` object. The callee alone cannot distinguish these contracts:
both use a byte store. Native consumers establish the signed declaration.

SMT IV reads the output with `LDRSB` in `FUN_0018854c` (+0x604),
`FUN_0019a4f4` (+0x9e0, +0x14d0, +0x187c, +0x2878),
`FUN_001cea8c` (+0x62c, +0x994), `FUN_003291dc` (+0x534), and
`FUN_00331158` (+0x120). The last already declares a signed-byte output.

Apocalypse independently agrees in `FUN_001fdde8` (+0x8b8),
`FUN_001ffe84` (+0x494), `FUN_0022a0a0` (+0x354),
`FUN_0026cbb8` (+0x720, +0xbb4), `FUN_002f7f6c` (+0x84),
`FUN_003ce598` (+0x654), and `FUN_003daf0c` (+0x134).
Unsigned loads used only to test zero do not contradict this contract.

Both helper definitions use `s8 *`. IV explicitly normalizes its local result
with `special != 0`, preserving the native zero/one output. This replaces
normalization previously supplied implicitly by the inferred `bool *` type.
Apocalypse already used the explicit boolean expression. Both function
objects remain exact, including instruction operands and relocations.

`FUN_003cca18` already owns an `s8` output variable. Updating its local
declaration removes the unnecessary `reinterpret_cast<bool *>`; its emitted
instructions and relocations are unchanged. No broad rewrite of unresolved
caller declarations is implied by this small correction.
