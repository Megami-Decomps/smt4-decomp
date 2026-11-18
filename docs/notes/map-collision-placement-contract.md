# Table 0x2c placement records

Sections 0 and 3 of table 0x2c use the same 20-byte placement record. Their
native accessors perform unsigned bounds checks and return the indexed
record pointer. The block-bit clearer reads the same map/kind/flag prefix;
its former four-byte local prefix view was not a separate record format.

The focused MapCollisionPlacement.h owns the full observed layout and
mutable-pointer accessor declarations. The large collision producer keeps
its existing raw NON_MATCHING draft and byte-pointer boundaries; no private
geometry rewrite or unrelated collision-table contracts are included.

Against 35e4b43a, all four affected public consumers retain identical complete
function output, including the three existing exact accessors/clearer.
There are no newly matched functions. Declaration delta and the 24543 ceiling
pass. Full SMT4 rebuild is 10889/10890 with only inherited FUN_002aa790 Linux
compiler failure; matched relink proves 6434 compiled functions and is
byte-identical to retail.
