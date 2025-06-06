require_extension(EXT_XTHEAD_BS);
WRITE_RD(sext_xlen((RS1 & (zext_xlen(1) << insn.p_imm6())) > 0 ? 1 : 0));