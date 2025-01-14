require_extension('C');
if (xlen == 32) {
  require_extension('F');
  require_fp;
  WRITE_FRD(f32(MMU.load<uint32_t>(RVC_SP + insn.rvc_lwsp_imm())));
} else { // c.ldsp
  require(insn.rvc_rd() != 0);
  WRITE_RD(MMU.load<int64_t>(RVC_SP + insn.rvc_ldsp_imm()));
}
