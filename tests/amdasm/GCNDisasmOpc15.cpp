/*
 *  CLRadeonExtender - Unofficial OpenCL Radeon Extensions Library
 *  Copyright (C) 2014-2018 Mateusz Szpakowski
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <CLRX/Config.h>
#include "GCNDisasmOpc.h"

/* for Radeon NAVI series with GCN1.5 */
const GCNDisasmOpcodeCase decGCNOpcodeGCN15Cases[] =
{
    { 0x80153d04U, 0, false, "        s_add_u32       s21, s4, s61\n" },
    { 0x80156404U, 0, false, "        s_add_u32       s21, s4, s100\n" },
    { 0x80156604U, 0, false, "        s_add_u32       s21, s4, s102\n" },
    { 0x80156704U, 0, false, "        s_add_u32       s21, s4, s103\n" },
    { 0x80156804U, 0, false, "        s_add_u32       s21, s4, s104\n" },
    { 0x80156904U, 0, false, "        s_add_u32       s21, s4, s105\n" },
    { 0x80156a04U, 0, false, "        s_add_u32       s21, s4, vcc_lo\n" },
    { 0x80156b04U, 0, false, "        s_add_u32       s21, s4, vcc_hi\n" },
    { 0x80156c04U, 0, false, "        s_add_u32       s21, s4, ttmp0\n" },
    { 0x80156d04U, 0, false, "        s_add_u32       s21, s4, ttmp1\n" },
    { 0x80156e04U, 0, false, "        s_add_u32       s21, s4, ttmp2\n" },
    { 0x80156f04U, 0, false, "        s_add_u32       s21, s4, ttmp3\n" },
    { 0x80157004U, 0, false, "        s_add_u32       s21, s4, ttmp4\n" },
    { 0x80157104U, 0, false, "        s_add_u32       s21, s4, ttmp5\n" },
    { 0x80157204U, 0, false, "        s_add_u32       s21, s4, ttmp6\n" },
    { 0x80157304U, 0, false, "        s_add_u32       s21, s4, ttmp7\n" },
    { 0x80157404U, 0, false, "        s_add_u32       s21, s4, ttmp8\n" },
    { 0x80157504U, 0, false, "        s_add_u32       s21, s4, ttmp9\n" },
    { 0x80157604U, 0, false, "        s_add_u32       s21, s4, ttmp10\n" },
    { 0x80157704U, 0, false, "        s_add_u32       s21, s4, ttmp11\n" },
    { 0x80157804U, 0, false, "        s_add_u32       s21, s4, ttmp12\n" },
    { 0x80157904U, 0, false, "        s_add_u32       s21, s4, ttmp13\n" },
    { 0x80157a04U, 0, false, "        s_add_u32       s21, s4, ttmp14\n" },
    { 0x80157b04U, 0, false, "        s_add_u32       s21, s4, ttmp15\n" },
    { 0x80157c04U, 0, false, "        s_add_u32       s21, s4, m0\n" },
    { 0x80157e04U, 0, false, "        s_add_u32       s21, s4, exec_lo\n" },
    { 0x80158004U, 0, false, "        s_add_u32       s21, s4, 0\n" },
    { 0x80158b04U, 0, false, "        s_add_u32       s21, s4, 11\n" },
    { 0x8015c004U, 0, false, "        s_add_u32       s21, s4, 64\n" },
    { 0x8015c404U, 0, false, "        s_add_u32       s21, s4, -4\n" },
    { 0x8015f004U, 0, false, "        s_add_u32       s21, s4, 0.5\n" },
    { 0x8015f104U, 0, false, "        s_add_u32       s21, s4, -0.5\n" },
    { 0x8015f204U, 0, false, "        s_add_u32       s21, s4, 1.0\n" },
    { 0x8015f304U, 0, false, "        s_add_u32       s21, s4, -1.0\n" },
    { 0x8015f404U, 0, false, "        s_add_u32       s21, s4, 2.0\n" },
    { 0x8015f504U, 0, false, "        s_add_u32       s21, s4, -2.0\n" },
    { 0x8015f604U, 0, false, "        s_add_u32       s21, s4, 4.0\n" },
    { 0x8015f704U, 0, false, "        s_add_u32       s21, s4, -4.0\n" },
    { 0x8015f704U, 0, false, "        s_add_u32       s21, s4, -4.0\n" },
    { 0x8015ff04U, 0xfffffff0, true,  "        s_add_u32       s21, s4, lit(-16)\n" },
    { 0x8015ff04U, 1, true,  "        s_add_u32       s21, s4, lit(1)\n" },
    { 0x8015ff04U, 64, true,  "        s_add_u32       s21, s4, lit(64)\n" },
    { 0x8015fb04U, 0, false, "        s_add_u32       s21, s4, vccz\n" },
    { 0x8015fc04U, 0, false, "        s_add_u32       s21, s4, execz\n" },
    { 0x8015fd04U, 0, false, "        s_add_u32       s21, s4, scc\n" },
    { 0x807f3d04U, 0, false, "        s_add_u32       exec_hi, s4, s61\n" },
    { 0x807f3df1U, 0, false, "        s_add_u32       exec_hi, -0.5, s61\n" },
    { 0x807f3dffU, 0xd3abc5f, true, "        s_add_u32       exec_hi, 0xd3abc5f, s61\n" },
    { 0x807fff05U, 0xd3abc5f, true, "        s_add_u32       exec_hi, s5, 0xd3abc5f\n" },
    // SRC - NULL
    { 0x80157d04U, 0, false, "        s_add_u32       s21, s4, null\n" },
    /* SOP2 opcodes */
    { 0x80ff3df1U, 0, false, "        s_sub_u32       exec_hi, -0.5, s61\n" },
    { 0x81153d04U, 0, false, "        s_add_i32       s21, s4, s61\n" },
    { 0x81953d04U, 0, false, "        s_sub_i32       s21, s4, s61\n" },
    { 0x82153d04U, 0, false, "        s_addc_u32      s21, s4, s61\n" },
    { 0x82953d04U, 0, false, "        s_subb_u32      s21, s4, s61\n" },
    { 0x83153d04U, 0, false, "        s_min_i32       s21, s4, s61\n" },
    { 0x83953d04U, 0, false, "        s_min_u32       s21, s4, s61\n" },
    { 0x84153d04U, 0, false, "        s_max_i32       s21, s4, s61\n" },
    { 0x84953d04U, 0, false, "        s_max_u32       s21, s4, s61\n" },
    { 0x85153d04U, 0, false, "        s_cselect_b32   s21, s4, s61\n" },
    { 0x85953d04U, 0, false, "        s_cselect_b64   s[21:22], s[4:5], s[61:62]\n" },
    { 0x86153d04U, 0, false, "        SOP2_ill_12     s21, s4, s61\n" },
    { 0x86953d04U, 0, false, "        SOP2_ill_13     s21, s4, s61\n" },
    { 0x87153d04U, 0, false, "        s_and_b32       s21, s4, s61\n" },
    { 0x87953d04U, 0, false, "        s_and_b64       s[21:22], s[4:5], s[61:62]\n" },
    { 0x88153d04U, 0, false, "        s_or_b32        s21, s4, s61\n" },
    { 0x88953d04U, 0, false, "        s_or_b64        s[21:22], s[4:5], s[61:62]\n" },
    { 0x89153d04U, 0, false, "        s_xor_b32       s21, s4, s61\n" },
    { 0x89953d04U, 0, false, "        s_xor_b64       s[21:22], s[4:5], s[61:62]\n" },
    { 0x8a153d04U, 0, false, "        s_andn2_b32     s21, s4, s61\n" },
    { 0x8a953d04U, 0, false, "        s_andn2_b64     s[21:22], s[4:5], s[61:62]\n" },
    { 0x8b153d04U, 0, false, "        s_orn2_b32      s21, s4, s61\n" },
    { 0x8b953d04U, 0, false, "        s_orn2_b64      s[21:22], s[4:5], s[61:62]\n" },
    { 0x8c153d04U, 0, false, "        s_nand_b32      s21, s4, s61\n" },
    { 0x8c953d04U, 0, false, "        s_nand_b64      s[21:22], s[4:5], s[61:62]\n" },
    { 0x8d153d04U, 0, false, "        s_nor_b32       s21, s4, s61\n" },
    { 0x8d953d04U, 0, false, "        s_nor_b64       s[21:22], s[4:5], s[61:62]\n" },
    { 0x8e153d04U, 0, false, "        s_xnor_b32      s21, s4, s61\n" },
    { 0x8e953d04U, 0, false, "        s_xnor_b64      s[21:22], s[4:5], s[61:62]\n" },
    { 0x8f153d04U, 0, false, "        s_lshl_b32      s21, s4, s61\n" },
    { 0x8f953d04U, 0, false, "        s_lshl_b64      s[21:22], s[4:5], s61\n" },
    { 0x90153d04U, 0, false, "        s_lshr_b32      s21, s4, s61\n" },
    { 0x90953d04U, 0, false, "        s_lshr_b64      s[21:22], s[4:5], s61\n" },
    { 0x91153d04U, 0, false, "        s_ashr_i32      s21, s4, s61\n" },
    { 0x91953d04U, 0, false, "        s_ashr_i64      s[21:22], s[4:5], s61\n" },
    { 0x92153d04U, 0, false, "        s_bfm_b32       s21, s4, s61\n" },
    { 0x92953d04U, 0, false, "        s_bfm_b64       s[21:22], s4, s61\n" },
    { 0x93153d04U, 0, false, "        s_mul_i32       s21, s4, s61\n" },
    { 0x93953d04U, 0, false, "        s_bfe_u32       s21, s4, s61\n" },
    { 0x94153d04U, 0, false, "        s_bfe_i32       s21, s4, s61\n" },
    { 0x94953d04U, 0, false, "        s_bfe_u64       s[21:22], s[4:5], s61\n" },
    { 0x95153d04U, 0, false, "        s_bfe_i64       s[21:22], s[4:5], s61\n" },
    { 0x95953d04U, 0, false, "        SOP2_ill_43     s21, s4, s61\n" },
    { 0x96153d04U, 0, false, "        s_absdiff_i32   s21, s4, s61\n" },
    { 0x96953d04U, 0, false, "        SOP2_ill_45     s21, s4, s61\n" },
    { 0x97153d04U, 0, false, "        s_lshl1_add_u32 s21, s4, s61\n" },
    { 0x97953d04U, 0, false, "        s_lshl2_add_u32 s21, s4, s61\n" },
    { 0x98153d04U, 0, false, "        s_lshl3_add_u32 s21, s4, s61\n" },
    { 0x98953d04U, 0, false, "        s_lshl4_add_u32 s21, s4, s61\n" },
    { 0x99153d04U, 0, false, "        s_pack_ll_b32_b16 s21, s4, s61\n" },
    { 0x99953d04U, 0, false, "        s_pack_lh_b32_b16 s21, s4, s61\n" },
    { 0x9a153d04U, 0, false, "        s_pack_hh_b32_b16 s21, s4, s61\n" },
    { 0x9a953d04U, 0, false, "        s_mul_hi_u32    s21, s4, s61\n" },
    { 0x9b153d04U, 0, false, "        s_mul_hi_i32    s21, s4, s61\n" },
    /* SOPK */
    { 0xb02b0000U, 0, false, "        s_movk_i32      s43, 0x0\n" },
    { 0xb02bd3b9U, 0, false, "        s_movk_i32      s43, 0xd3b9\n" },
    { 0xb0abd3b9U, 0, false, "        s_version       0xd3b9 sdst=0x2b\n" },
    { 0xb080d3b9U, 0, false, "        s_version       0xd3b9\n" },
    { 0xb12bd3b9U, 0, false, "        s_cmovk_i32     s43, 0xd3b9\n" },
    { 0xb1abd3b9U, 0, false, "        s_cmpk_eq_i32   s43, 0xd3b9\n" },
    { 0xb22bd3b9U, 0, false, "        s_cmpk_lg_i32   s43, 0xd3b9\n" },
    { 0xb2abd3b9U, 0, false, "        s_cmpk_gt_i32   s43, 0xd3b9\n" },
    { 0xb32bd3b9U, 0, false, "        s_cmpk_ge_i32   s43, 0xd3b9\n" },
    { 0xb3abd3b9U, 0, false, "        s_cmpk_lt_i32   s43, 0xd3b9\n" },
    { 0xb42bd3b9U, 0, false, "        s_cmpk_le_i32   s43, 0xd3b9\n" },
    { 0xb4abd3b9U, 0, false, "        s_cmpk_eq_u32   s43, 0xd3b9\n" },
    { 0xb52bd3b9U, 0, false, "        s_cmpk_lg_u32   s43, 0xd3b9\n" },
    { 0xb5abd3b9U, 0, false, "        s_cmpk_gt_u32   s43, 0xd3b9\n" },
    { 0xb62bd3b9U, 0, false, "        s_cmpk_ge_u32   s43, 0xd3b9\n" },
    { 0xb6abd3b9U, 0, false, "        s_cmpk_lt_u32   s43, 0xd3b9\n" },
    { 0xb72bd3b9U, 0, false, "        s_cmpk_le_u32   s43, 0xd3b9\n" },
    { 0xb7abd3b9U, 0, false, "        s_addk_i32      s43, 0xd3b9\n" },
    { 0xb82bd3b9U, 0, false, "        s_mulk_i32      s43, 0xd3b9\n" },
    { 0xb8ab0000U, 0, false, "        SOPK_ill_17     s43, 0x0\n" },
    { 0xb92b0000U, 0, false, "        s_getreg_b32    s43, hwreg(@0, 0, 1)\n" },
    { 0xb92b0001u, 0, false, "        s_getreg_b32    s43, hwreg(mode, 0, 1)\n" },
    { 0xb92b0002u, 0, false, "        s_getreg_b32    s43, hwreg(status, 0, 1)\n" },
    { 0xb92b0003u, 0, false, "        s_getreg_b32    s43, hwreg(trapsts, 0, 1)\n" },
    { 0xb92b0004u, 0, false, "        s_getreg_b32    s43, hwreg(hw_id, 0, 1)\n" },
    { 0xb92b0005u, 0, false, "        s_getreg_b32    s43, hwreg(gpr_alloc, 0, 1)\n" },
    { 0xb92b0006u, 0, false, "        s_getreg_b32    s43, hwreg(lds_alloc, 0, 1)\n" },
    { 0xb92b0007u, 0, false, "        s_getreg_b32    s43, hwreg(ib_sts, 0, 1)\n" },
    { 0xb92b0008u, 0, false, "        s_getreg_b32    s43, hwreg(pc_lo, 0, 1)\n" },
    { 0xb92b0009u, 0, false, "        s_getreg_b32    s43, hwreg(pc_hi, 0, 1)\n" },
    { 0xb92b000au, 0, false, "        s_getreg_b32    s43, hwreg(inst_dw0, 0, 1)\n" },
    { 0xb92b000bu, 0, false, "        s_getreg_b32    s43, hwreg(inst_dw1, 0, 1)\n" },
    { 0xb92b000cu, 0, false, "        s_getreg_b32    s43, hwreg(ib_dbg0, 0, 1)\n" },
    { 0xb92b000eu, 0, false, "        s_getreg_b32    s43, hwreg(flush_ib, 0, 1)\n" },
    { 0xb92b000fu, 0, false, "        s_getreg_b32    s43, hwreg(sh_mem_bases, 0, 1)\n" },
    { 0xb92b0010u, 0, false, "        s_getreg_b32    "
                "s43, hwreg(sq_shader_tba_lo, 0, 1)\n" },
    { 0xb92b0011u, 0, false, "        s_getreg_b32    "
                "s43, hwreg(sq_shader_tba_hi, 0, 1)\n" },
    { 0xb92b0012u, 0, false, "        s_getreg_b32    "
                "s43, hwreg(sq_shader_tma_lo, 0, 1)\n" },
    { 0xb92b0013u, 0, false, "        s_getreg_b32    "
                "s43, hwreg(sq_shader_tma_hi, 0, 1)\n" },
    { 0xb92b0014u, 0, false, "        s_getreg_b32    s43, hwreg(flat_scr_lo, 0, 1)\n" },
    { 0xb92b0015u, 0, false, "        s_getreg_b32    s43, hwreg(flat_scr_hi, 0, 1)\n" },
    { 0xb92b0016u, 0, false, "        s_getreg_b32    s43, hwreg(xnack_mask, 0, 1)\n" },
    { 0xb92b0017u, 0, false, "        s_getreg_b32    s43, hwreg(pops_packer, 0, 1)\n" },
    { 0xb92b0018u, 0, false, "        s_getreg_b32    s43, hwreg(@24, 0, 1)\n" },
    { 0xb92b0019u, 0, false, "        s_getreg_b32    s43, hwreg(@25, 0, 1)\n" },
    { 0xb92b001eU, 0, false, "        s_getreg_b32    s43, hwreg(@30, 0, 1)\n" },
    { 0xb92b003fU, 0, false, "        s_getreg_b32    s43, hwreg(@63, 0, 1)\n" },
    { 0xb92b00c3u, 0, false, "        s_getreg_b32    s43, hwreg(trapsts, 3, 1)\n" },
    { 0xb92b03c3u, 0, false, "        s_getreg_b32    s43, hwreg(trapsts, 15, 1)\n" },
    { 0xb92b0283u, 0, false, "        s_getreg_b32    s43, hwreg(trapsts, 10, 1)\n" },
    { 0xb92b0583u, 0, false, "        s_getreg_b32    s43, hwreg(trapsts, 22, 1)\n" },
    { 0xb92b07c3u, 0, false, "        s_getreg_b32    s43, hwreg(trapsts, 31, 1)\n" },
    { 0xb92b28c3u, 0, false, "        s_getreg_b32    s43, hwreg(trapsts, 3, 6)\n" },
    { 0xb92b48c3u, 0, false, "        s_getreg_b32    s43, hwreg(trapsts, 3, 10)\n" },
    { 0xb92bf8c3u, 0, false, "        s_getreg_b32    s43, hwreg(trapsts, 3, 32)\n" },
    { 0xb9ab48c3u, 0, false, "        s_setreg_b32    hwreg(trapsts, 3, 10), s43\n" },
    { 0xba2bf8c3u, 0, false, "        SOPK_ill_20     s43, 0xf8c3\n" },
    { 0xbaab48c3u, 0x45d2a, true, "        s_setreg_imm32_b32 hwreg(trapsts, 3, 10), "
                "0x45d2a sdst=0x2b\n" },
    { 0xba8048c3u, 0x45d2a, true, "        s_setreg_imm32_b32 hwreg(trapsts, 3, 10), "
                "0x45d2a\n" },
    { 0xbb2b0000U, 0, false, "        s_call_b64      s[43:44], .L4_0\n" },
    { 0xbb2b000aU, 0, false, "        s_call_b64      s[43:44], .L44_0\n" },
    { 0xbbabd3b9U, 0, false, "        s_waitcnt_vscnt s43, 0xd3b9\n" },
    { 0xbc2bd3b9U, 0, false, "        s_waitcnt_vmcnt s43, 0xd3b9\n" },
    { 0xbcabd3b9U, 0, false, "        s_waitcnt_expcnt s43, 0xd3b9\n" },
    { 0xbd2bd3b9U, 0, false, "        s_waitcnt_lgkmcnt s43, 0xd3b9\n" },
    { 0xbdabd3b9U, 0, false, "        s_subvector_begin s43, 0xd3b9\n" },
    { 0xbe2bd3b9U, 0, false, "        s_subvector_end s43, 0xd3b9\n" },
    /* SOP1 opcodes */
    { 0xbed60014U, 0, false, "        SOP1_ill_0      s86, s20\n" },
    { 0xbed60114U, 0, false, "        SOP1_ill_1      s86, s20\n" },
    { 0xbed60214U, 0, false, "        SOP1_ill_2      s86, s20\n" },
    { 0xbed60314U, 0, false, "        s_mov_b32       s86, s20\n" },
    { 0xbed603ffU, 0xddbbaa11, true, "        s_mov_b32       s86, 0xddbbaa11\n" },
    { 0xbed60414U, 0, false, "        s_mov_b64       s[86:87], s[20:21]\n" },
    { 0xbed60514U, 0, false, "        s_cmov_b32      s86, s20\n" },
    { 0xbed60614U, 0, false, "        s_cmov_b64      s[86:87], s[20:21]\n" },
    { 0xbed60714U, 0, false, "        s_not_b32       s86, s20\n" },
    { 0xbed60814U, 0, false, "        s_not_b64       s[86:87], s[20:21]\n" },
    { 0xbed60914U, 0, false, "        s_wqm_b32       s86, s20\n" },
    { 0xbed60a14U, 0, false, "        s_wqm_b64       s[86:87], s[20:21]\n" },
    { 0xbed60b14U, 0, false, "        s_brev_b32      s86, s20\n" },
    { 0xbed60c14U, 0, false, "        s_brev_b64      s[86:87], s[20:21]\n" },
    { 0xbed60d14U, 0, false, "        s_bcnt0_i32_b32 s86, s20\n" },
    { 0xbed60e14U, 0, false, "        s_bcnt0_i32_b64 s86, s[20:21]\n" },
    { 0xbed60f14U, 0, false, "        s_bcnt1_i32_b32 s86, s20\n" },
    { 0xbed61014U, 0, false, "        s_bcnt1_i32_b64 s86, s[20:21]\n" },
    { 0xbed61114U, 0, false, "        s_ff0_i32_b32   s86, s20\n" },
    { 0xbed61214U, 0, false, "        s_ff0_i32_b64   s86, s[20:21]\n" },
    { 0xbed61314U, 0, false, "        s_ff1_i32_b32   s86, s20\n" },
    { 0xbed61414U, 0, false, "        s_ff1_i32_b64   s86, s[20:21]\n" },
    { 0xbed61514U, 0, false, "        s_flbit_i32_b32 s86, s20\n" },
    { 0xbed61614U, 0, false, "        s_flbit_i32_b64 s86, s[20:21]\n" },
    { 0xbed61714U, 0, false, "        s_flbit_i32     s86, s20\n" },
    { 0xbed61814U, 0, false, "        s_flbit_i32_i64 s86, s[20:21]\n" },
    { 0xbed61914U, 0, false, "        s_sext_i32_i8   s86, s20\n" },
    { 0xbed61a14U, 0, false, "        s_sext_i32_i16  s86, s20\n" },
    { 0xbed61b14U, 0, false, "        s_bitset0_b32   s86, s20\n" },
    { 0xbed61c14U, 0, false, "        s_bitset0_b64   s[86:87], s20\n" },
    { 0xbed61d14U, 0, false, "        s_bitset1_b32   s86, s20\n" },
    { 0xbed61e14U, 0, false, "        s_bitset1_b64   s[86:87], s20\n" },
    { 0xbed61f00U, 0, false, "        s_getpc_b64     s[86:87]\n" },
    { 0xbed61f14U, 0, false, "        s_getpc_b64     s[86:87] ssrc=0x14\n" },
    { 0xbe802014U, 0, false, "        s_setpc_b64     s[20:21]\n" },
    { 0xbed62014U, 0, false, "        s_setpc_b64     s[20:21] sdst=0x56\n" },
    { 0xbed62114U, 0, false, "        s_swappc_b64    s[86:87], s[20:21]\n" },
    { 0xbe802214U, 0, false, "        s_rfe_b64       s[20:21]\n" },
    { 0xbed62214U, 0, false, "        s_rfe_b64       s[20:21] sdst=0x56\n" },
    { 0xbed62314U, 0, false, "        SOP1_ill_35     s86, s20\n" },
    { 0xbed62414U, 0, false, "        s_and_saveexec_b64 s[86:87], s[20:21]\n" },
    { 0xbed62514U, 0, false, "        s_or_saveexec_b64 s[86:87], s[20:21]\n" },
    { 0xbed62614U, 0, false, "        s_xor_saveexec_b64 s[86:87], s[20:21]\n" },
    { 0xbed62714U, 0, false, "        s_andn2_saveexec_b64 s[86:87], s[20:21]\n" },
    { 0xbed62814U, 0, false, "        s_orn2_saveexec_b64 s[86:87], s[20:21]\n" },
    { 0xbed62914U, 0, false, "        s_nand_saveexec_b64 s[86:87], s[20:21]\n" },
    { 0xbed62a14U, 0, false, "        s_nor_saveexec_b64 s[86:87], s[20:21]\n" },
    { 0xbed62b14U, 0, false, "        s_xnor_saveexec_b64 s[86:87], s[20:21]\n" },
    { 0xbed62c14U, 0, false, "        s_quadmask_b32  s86, s20\n" },
    { 0xbed62d14U, 0, false, "        s_quadmask_b64  s[86:87], s[20:21]\n" },
    { 0xbed62e14U, 0, false, "        s_movrels_b32   s86, s20\n" },
    { 0xbed62f14U, 0, false, "        s_movrels_b64   s[86:87], s[20:21]\n" },
    { 0xbed63014U, 0, false, "        s_movreld_b32   s86, s20\n" },
    { 0xbed63114U, 0, false, "        s_movreld_b64   s[86:87], s[20:21]\n" },
    { 0xbe803214U, 0, false, "        SOP1_ill_50     s0, s20\n" },
    { 0xbe803314U, 0, false, "        SOP1_ill_51     s0, s20\n" },
    { 0xbed63414U, 0, false, "        s_abs_i32       s86, s20\n" },
    { 0xbed63514U, 0, false, "        s_mov_fed_b32   s86, s20\n" },
    { 0xbed63614U, 0, false, "        SOP1_ill_54     s86, s20\n" },
    { 0xbed63714U, 0, false, "        s_andn1_saveexec_b64 s[86:87], s[20:21]\n" },
    { 0xbed63814U, 0, false, "        s_orn1_saveexec_b64 s[86:87], s[20:21]\n" },
    { 0xbed63914U, 0, false, "        s_andn1_wrexec_b64 s[86:87], s[20:21]\n" },
    { 0xbed63a14U, 0, false, "        s_andn2_wrexec_b64 s[86:87], s[20:21]\n" },
    { 0xbed63b14U, 0, false, "        s_bitreplicate_b64_b32 s[86:87], s20\n" },
    { 0xbed63c14U, 0, false, "        s_and_saveexec_b32 s86, s20\n" },
    { 0xbed63d14U, 0, false, "        s_or_saveexec_b32 s86, s20\n" },
    { 0xbed63e14U, 0, false, "        s_xor_saveexec_b32 s86, s20\n" },
    { 0xbed63f14U, 0, false, "        s_andn2_saveexec_b32 s86, s20\n" },
    { 0xbed64014U, 0, false, "        s_orn2_saveexec_b32 s86, s20\n" },
    { 0xbed64114U, 0, false, "        s_nand_saveexec_b32 s86, s20\n" },
    { 0xbed64214U, 0, false, "        s_nor_saveexec_b32 s86, s20\n" },
    { 0xbed64314U, 0, false, "        s_xnor_saveexec_b32 s86, s20\n" },
    { 0xbed64414U, 0, false, "        s_andn1_saveexec_b32 s86, s20\n" },
    { 0xbed64514U, 0, false, "        s_orn1_saveexec_b32 s86, s20\n" },
    { 0xbed64614U, 0, false, "        s_andn1_wrexec_b32 s86, s20\n" },
    { 0xbed64714U, 0, false, "        s_andn2_wrexec_b32 s86, s20\n" },
    { 0xbed64914U, 0, false, "        s_movrelsd_2_b32 s86, s20\n" },
    { 0xbed64a14U, 0, false, "        SOP1_ill_74     s86, s20\n" },
    /* SOPC encoding */
    { 0xbf00451dU, 0, false, "        s_cmp_eq_i32    s29, s69\n" },
    { 0xbf0045ffU, 0x6d894, true, "        s_cmp_eq_i32    0x6d894, s69\n" },
    { 0xbf00ff1dU, 0x6d894, true, "        s_cmp_eq_i32    s29, 0x6d894\n" },
    { 0xbf01451dU, 0, false, "        s_cmp_lg_i32    s29, s69\n" },
    { 0xbf02451dU, 0, false, "        s_cmp_gt_i32    s29, s69\n" },
    { 0xbf03451dU, 0, false, "        s_cmp_ge_i32    s29, s69\n" },
    { 0xbf04451dU, 0, false, "        s_cmp_lt_i32    s29, s69\n" },
    { 0xbf05451dU, 0, false, "        s_cmp_le_i32    s29, s69\n" },
    { 0xbf06451dU, 0, false, "        s_cmp_eq_u32    s29, s69\n" },
    { 0xbf07451dU, 0, false, "        s_cmp_lg_u32    s29, s69\n" },
    { 0xbf08451dU, 0, false, "        s_cmp_gt_u32    s29, s69\n" },
    { 0xbf09451dU, 0, false, "        s_cmp_ge_u32    s29, s69\n" },
    { 0xbf0a451dU, 0, false, "        s_cmp_lt_u32    s29, s69\n" },
    { 0xbf0b451dU, 0, false, "        s_cmp_le_u32    s29, s69\n" },
    { 0xbf0c451dU, 0, false, "        s_bitcmp0_b32   s29, s69\n" },
    { 0xbf0d451dU, 0, false, "        s_bitcmp1_b32   s29, s69\n" },
    { 0xbf0e451dU, 0, false, "        s_bitcmp0_b64   s[29:30], s69\n" },
    { 0xbf0f451dU, 0, false, "        s_bitcmp1_b64   s[29:30], s69\n" },
    { 0xbf10451dU, 0, false, "        SOPC_ill_16     s29, s69\n" },
    { 0xbf11451dU, 0, false, "        SOPC_ill_17     s29, s69\n" },
    { 0xbf12451dU, 0, false, "        s_cmp_eq_u64    s[29:30], s[69:70]\n" },
    { 0xbf13451dU, 0, false, "        s_cmp_lg_u64    s[29:30], s[69:70]\n" },
    { 0xbf14451dU, 0, false, "        SOPC_ill_20     s29, s69\n" },
    { 0xbf15451dU, 0, false, "        SOPC_ill_21     s29, s69\n" },
    { 0xbf16451dU, 0, false, "        SOPC_ill_22     s29, s69\n" },
    { 0xbf17451dU, 0, false, "        SOPC_ill_23     s29, s69\n" },
    /* SOPP encoding */
    { 0xbf800000U, 0, false, "        s_nop           0x0\n" },
    { 0xbf800006U, 0, false, "        s_nop           0x6\n" },
    { 0xbf80cd26U, 0, false, "        s_nop           0xcd26\n" },
    { 0xbf810000U, 0, false, "        s_endpgm\n" },
    { 0xbf818d33U, 0, false, "        s_endpgm        0x8d33\n" },
    { 0xbf820029U, 0, false, "        s_branch        .L168_0\n" },
    { 0xbf82ffffU, 0, false, "        s_branch        .L0_0\n" },
    { 0xbf830000U, 0, false, "        s_wakeup\n" },
    { 0xbf838d33U, 0, false, "        s_wakeup        0x8d33\n" },
    { 0xbf840029U, 0, false, "        s_cbranch_scc0  .L168_0\n" },
    { 0xbf850029U, 0, false, "        s_cbranch_scc1  .L168_0\n" },
    { 0xbf860029U, 0, false, "        s_cbranch_vccz  .L168_0\n" },
    { 0xbf870029U, 0, false, "        s_cbranch_vccnz .L168_0\n" },
    { 0xbf880029U, 0, false, "        s_cbranch_execz .L168_0\n" },
    { 0xbf890029U, 0, false, "        s_cbranch_execnz .L168_0\n" },
    { 0xbf8a0000U, 0, false, "        s_barrier\n" },
    { 0xbf8b032bU, 0, false, "        s_setkill       0x32b\n" },
    /* waitcnts */
    { 0xbf8c0d36U, 0, false, "        s_waitcnt       "
        "vmcnt(6) & expcnt(3) & lgkmcnt(13)\n" },
    { 0xbf8c4d36U, 0, false, "        s_waitcnt       "
        "vmcnt(22) & expcnt(3) & lgkmcnt(13)\n" },
    { 0xbf8c8d36U, 0, false, "        s_waitcnt       "
        "vmcnt(38) & expcnt(3) & lgkmcnt(13)\n" },
    { 0xbf8ccd36U, 0, false, "        s_waitcnt       "
        "vmcnt(54) & expcnt(3) & lgkmcnt(13)\n" },
    { 0xbf8c0d3fU, 0, false, "        s_waitcnt       "
        "vmcnt(15) & expcnt(3) & lgkmcnt(13)\n" },
    { 0xbf8c4d3fU, 0, false, "        s_waitcnt       "
        "vmcnt(31) & expcnt(3) & lgkmcnt(13)\n" },
    { 0xbf8c8d3fU, 0, false, "        s_waitcnt       "
        "vmcnt(47) & expcnt(3) & lgkmcnt(13)\n" },
    { 0xbf8ccd3fU, 0, false, "        s_waitcnt       "
        "expcnt(3) & lgkmcnt(13)\n" },
    { 0xbf8c1436U, 0, false, "        s_waitcnt       "
        "vmcnt(6) & expcnt(3) & lgkmcnt(20)\n" },
    { 0xbf8c2a36U, 0, false, "        s_waitcnt       "
        "vmcnt(6) & expcnt(3) & lgkmcnt(42)\n" },
    { 0xbf8c3536U, 0, false, "        s_waitcnt       "
        "vmcnt(6) & expcnt(3) & lgkmcnt(53)\n" },
    { 0xbf8c3f36U, 0, false, "        s_waitcnt       "
        "vmcnt(6) & expcnt(3)\n" },
    { 0xbf8c0000U, 0, false, "        s_waitcnt       "
        "vmcnt(0) & expcnt(0) & lgkmcnt(0)\n" },
    { 0xbf8ccf7fU, 0, false, "        s_waitcnt       "
        "lgkmcnt(15)\n" },
    { 0xbf8cfd36U, 0, false, "        s_waitcnt       "
        "vmcnt(54) & expcnt(3) & lgkmcnt(61)\n" },
    { 0xbf8cff7fU, 0, false, "        s_waitcnt       "
        "vmcnt(63) & expcnt(7) & lgkmcnt(63)\n" },      // good???
    { 0xbf8cfdb6U, 0, false, "        s_waitcnt       "
        "vmcnt(54) & expcnt(3) & lgkmcnt(61) :0xfdb6\n" },
    // other SOPP
    { 0xbf8d032bU, 0, false, "        s_sethalt       0x32b\n" },
    { 0xbf8e032bU, 0, false, "        s_sleep         0x32b\n" },
    { 0xbf8f032bU, 0, false, "        s_setprio       0x32b\n" },
    { 0xbf90001bU, 0, false, "        s_sendmsg       sendmsg(@11, cut, 0)\n" },
    { 0xbf90000bU, 0, false, "        s_sendmsg       sendmsg(@11, nop)\n" },
    { 0xbf900001U, 0, false, "        s_sendmsg       sendmsg(interrupt)\n" },
    { 0xbf90000fU, 0, false, "        s_sendmsg       sendmsg(system)\n" },
    { 0xbf90021fU, 0, false, "        s_sendmsg       sendmsg(system, cut, 2)\n" },
    { 0xbf900a1fU, 0, false, "        s_sendmsg       sendmsg(system, cut, 2) :0xa1f\n" },
    { 0xbf900002U, 0, false, "        s_sendmsg       sendmsg(gs, nop)\n" },
    { 0xbf900003U, 0, false, "        s_sendmsg       sendmsg(gs_done, nop)\n" },
    { 0xbf900022U, 0, false, "        s_sendmsg       sendmsg(gs, emit, 0)\n" },
    { 0xbf900032U, 0, false, "        s_sendmsg       sendmsg(gs, emit-cut, 0)\n" },
    { 0xbf900322U, 0, false, "        s_sendmsg       sendmsg(gs, emit, 3)\n" },
    { 0xbf900332U, 0, false, "        s_sendmsg       sendmsg(gs, emit-cut, 3)\n" },
    { 0xbf900015U, 0, false, "        s_sendmsg       sendmsg(stall_wave_gen, cut, 0)\n" },
    { 0xbf900016U, 0, false, "        s_sendmsg       sendmsg(halt_waves, cut, 0)\n" },
    { 0xbf900017U, 0, false, "        s_sendmsg       "
                "sendmsg(ordered_ps_done, cut, 0)\n" },
    { 0xbf900018U, 0, false, "        s_sendmsg       "
                "sendmsg(early_prim_dealloc, cut, 0)\n" },
    { 0xbf900019U, 0, false, "        s_sendmsg       sendmsg(gs_alloc_req, cut, 0)\n" },
    { 0xbf90001aU, 0, false, "        s_sendmsg       sendmsg(get_doorbell, cut, 0)\n" },
    { 0xbf900014U, 0, false, "        s_sendmsg       sendmsg(savewave, cut, 0)\n" },
    { 0xbf900004U, 0, false, "        s_sendmsg       sendmsg(savewave)\n" },
    { 0xbf91001bU, 0, false, "        s_sendmsghalt   sendmsg(@11, cut, 0)\n" },
    { 0xbf92032bU, 0, false, "        s_trap          0x32b\n" },
    { 0xbf93032bU, 0, false, "        s_icache_inv    0x32b\n" },
    { 0xbf930000U, 0, false, "        s_icache_inv\n" },
    { 0xbf941234U, 0, false, "        s_incperflevel  0x1234\n" },
    { 0xbf951234U, 0, false, "        s_decperflevel  0x1234\n" },
    { 0xbf960000U, 0, false, "        s_ttracedata\n" },
    { 0xbf960dcaU, 0, false, "        s_ttracedata    0xdca\n" },
    { 0xbf970029U, 0, false, "        s_cbranch_cdbgsys .L168_0\n" },
    { 0xbf980029U, 0, false, "        s_cbranch_cdbguser .L168_0\n" },
    { 0xbf990029U, 0, false, "        s_cbranch_cdbgsys_or_user .L168_0\n" },
    { 0xbf9a0029U, 0, false, "        s_cbranch_cdbgsys_and_user .L168_0\n" },
    { 0xbf9b0000U, 0, false, "        s_endpgm_saved\n" },
    { 0xbf9b8d33U, 0, false, "        s_endpgm_saved  0x8d33\n" },
    { 0xbf9c8d33U, 0, false, "        SOPP_ill_28     0x8d33\n" },
    { 0xbf9d8d33U, 0, false, "        SOPP_ill_29     0x8d33\n" },
    { 0xbf9e0000U, 0, false, "        s_endpgm_ordered_ps_done\n" },
    { 0xbf9f0000U, 0, false, "        s_code_end\n" },
    { 0xbfa01234U, 0, false, "        s_inst_prefetch 0x1234\n" },
    { 0xbfa11234U, 0, false, "        s_clause        0x1234\n" },
    { 0xbfa20000U, 0, false, "        s_wait_idle\n" },
    { 0xbfa31234U, 0, false, "        s_waitcnt_decptr 0x1234\n" },
    { 0xbfa41234U, 0, false, "        s_round_mode    0x1234\n" },
    { 0xbfa51234U, 0, false, "        s_denorm_mode   0x1234\n" },
    { 0xbfa61234U, 0, false, "        SOPP_ill_38     0x1234\n" },
    { 0xbfa71234U, 0, false, "        SOPP_ill_39     0x1234\n" },
    { 0xbfa81234U, 0, false, "        s_ttracedata_imm 0x1234\n" },
    { 0xbfa91234U, 0, false, "        SOPP_ill_41     0x1234\n" },
    /* SMEM encoding */
    { 0xf40000c0U, 0x08000000U, true, "        s_load_dword    s3, s[0:1], s4\n" },
    { 0xf40000c0U, 0xfa06ba23U, true, "        s_load_dword    s3, s[0:1], 0x6ba23\n" },
    { 0xf40000c9U, 0x08000000U, true, "        s_load_dword    s3, s[18:19], s4\n" },
    { 0xf40000c9U, 0xfa06ba23U, true, "        s_load_dword    s3, s[18:19], 0x6ba23\n" },
    { 0xf40140c0U, 0x08000000U, true, "        s_load_dword    s3, s[0:1], s4 glc dlc\n" },
    { 0xf40040c0U, 0x08000000U, true, "        s_load_dword    s3, s[0:1], s4 dlc\n" },
    { 0xf40080c0U, 0x08000000U, true, "        s_load_dword    s3, s[0:1], s4 nv\n" },
    { 0xf40280c0U, 0x08000000U, true, "        s_load_dword    s3, s[0:1], s4 nv\n" },
    { 0xf4040189U, 0x08000000U, true, "        s_load_dwordx2  s[6:7], s[18:19], s4\n" },
    { 0xf4080309U, 0x08000000U, true, "        s_load_dwordx4  s[12:15], s[18:19], s4\n" },
    { 0xf40c0309U, 0x08000000U, true, "        s_load_dwordx8  s[12:19], s[18:19], s4\n" },
    { 0xf4100309U, 0x08000000U, true, "        s_load_dwordx16 s[12:27], s[18:19], s4\n" },
    { 0xf41400c9U, 0x08000000U, true, "        s_scratch_load_dword s3, s[18:19], s4\n" },
    { 0xf4180189U, 0x08000000U, true,
        "        s_scratch_load_dwordx2 s[6:7], s[18:19], s4\n" },
    { 0xf41c0309U, 0x08000000U, true,
        "        s_scratch_load_dwordx4 s[12:15], s[18:19], s4\n" },
    { 0xf42000caU, 0x08000000U, true, "        s_buffer_load_dword s3, s[20:23], s4\n" },
    { 0xf424018aU, 0x08000000U, true,
        "        s_buffer_load_dwordx2 s[6:7], s[20:23], s4\n" },
    { 0xf428030aU, 0x08000000U, true,
        "        s_buffer_load_dwordx4 s[12:15], s[20:23], s4\n" },
    { 0xf42c030aU, 0x08000000U, true,
        "        s_buffer_load_dwordx8 s[12:19], s[20:23], s4\n" },
    { 0xf430030aU, 0x08000000U, true,
        "        s_buffer_load_dwordx16 s[12:27], s[20:23], s4\n" },
    { 0xf4340189U, 0x08000000U, true, "        SMEM_ill_13     s6, s[18:19], s4\n" },
    { 0xf4380189U, 0x08000000U, true, "        SMEM_ill_14     s6, s[18:19], s4\n" },
    { 0xf43c0189U, 0x08000000U, true, "        SMEM_ill_15     s6, s[18:19], s4\n" },
    { 0xf44000caU, 0x08000000U, true, "        s_store_dword   s3, s[20:21], s4\n" },
    { 0xf444018aU, 0x08000000U, true,
        "        s_store_dwordx2 s[6:7], s[20:21], s4\n" },
    { 0xf448030aU, 0x08000000U, true,
        "        s_store_dwordx4 s[12:15], s[20:21], s4\n" },
    { 0xf44c0189U, 0x08000000U, true, "        SMEM_ill_19     s6, s[18:19], s4\n" },
    { 0xf4500189U, 0x08000000U, true, "        SMEM_ill_20     s6, s[18:19], s4\n" },
    { 0xf45400c9U, 0x08000000U, true, "        s_scratch_store_dword s3, s[18:19], s4\n" },
    { 0xf4580189U, 0x08000000U, true,
        "        s_scratch_store_dwordx2 s[6:7], s[18:19], s4\n" },
    { 0xf45c0309U, 0x08000000U, true,
        "        s_scratch_store_dwordx4 s[12:15], s[18:19], s4\n" },
    { 0xf46000caU, 0x08000000U, true, "        s_buffer_store_dword s3, s[20:23], s4\n" },
    { 0xf464018aU, 0x08000000U, true,
        "        s_buffer_store_dwordx2 s[6:7], s[20:23], s4\n" },
    { 0xf468030aU, 0x08000000U, true,
        "        s_buffer_store_dwordx4 s[12:15], s[20:23], s4\n" },
    { 0xf46c0189U, 0x08000000U, true, "        SMEM_ill_27     s6, s[18:19], s4\n" },
    { 0xf4700189U, 0x08000000U, true, "        SMEM_ill_28     s6, s[18:19], s4\n" },
    { 0xf4740189U, 0x08000000U, true, "        SMEM_ill_29     s6, s[18:19], s4\n" },
    { 0xf4780189U, 0x08000000U, true, "        SMEM_ill_30     s6, s[18:19], s4\n" },
    { 0xf47c0000U, 0x00000000U, true, "        s_gl1_inv\n" },
    { 0xf4800000U, 0x00000000U, true, "        s_dcache_inv\n" },
    { 0xf4840000U, 0x00000000U, true, "        s_dcache_wb\n" },
    { 0xf4900180U, 0x00000000U, true, "        s_memtime       s[6:7]\n" },
    { 0xf4940180U, 0x00000000U, true, "        s_memrealtime   s[6:7]\n" },
    { 0xf49800caU, 0x08000000U, true, "        s_atc_probe     0x3, s[20:21], s4\n" },
    { 0xf49c00caU, 0x08000000U, true, "        s_atc_probe_buffer 0x3, s[20:23], s4\n" },
    { 0xf4a000caU, 0x08000000U, true, "        s_dcache_discard s[20:21], s4 sdata=0x3\n" },
    { 0xf4a0000aU, 0x08000000U, true, "        s_dcache_discard s[20:21], s4\n" },
    { 0xf4a400caU, 0x08000000U, true, "        s_dcache_discard_x2 s[20:21], s4 sdata=0x3\n" },
    { 0xf4a4000aU, 0x08000000U, true, "        s_dcache_discard_x2 s[20:21], s4\n" },
    { 0xf4a801c0U, 0x00000000U, true, "        s_get_waveid_in_workgroup s7\n" },
    { 0xf50000caU, 0x08000000U, true, "        s_buffer_atomic_swap s3, s[20:23], s4\n" },
    { 0xf504028aU, 0x08000000U, true,
        "        s_buffer_atomic_cmpswap s[10:11], s[20:23], s4\n" },
    { 0xf50800caU, 0x08000000U, true, "        s_buffer_atomic_add s3, s[20:23], s4\n" },
    { 0xf50c00caU, 0x08000000U, true, "        s_buffer_atomic_sub s3, s[20:23], s4\n" },
    { 0xf51000caU, 0x08000000U, true, "        s_buffer_atomic_smin s3, s[20:23], s4\n" },
    { 0xf51400caU, 0x08000000U, true, "        s_buffer_atomic_umin s3, s[20:23], s4\n" },
    { 0xf51800caU, 0x08000000U, true, "        s_buffer_atomic_smax s3, s[20:23], s4\n" },
    { 0xf51c00caU, 0x08000000U, true, "        s_buffer_atomic_umax s3, s[20:23], s4\n" },
    { 0xf52000caU, 0x08000000U, true, "        s_buffer_atomic_and s3, s[20:23], s4\n" },
    { 0xf52400caU, 0x08000000U, true, "        s_buffer_atomic_or s3, s[20:23], s4\n" },
    { 0xf52800caU, 0x08000000U, true, "        s_buffer_atomic_xor s3, s[20:23], s4\n" },
    { 0xf52c00caU, 0x08000000U, true, "        s_buffer_atomic_inc s3, s[20:23], s4\n" },
    { 0xf53000caU, 0x08000000U, true, "        s_buffer_atomic_dec s3, s[20:23], s4\n" },
    { 0xf580018aU, 0x08000000U, true,
        "        s_buffer_atomic_swap_x2 s[6:7], s[20:23], s4\n" },
    { 0xf584028aU, 0x08000000U, true,
        "        s_buffer_atomic_cmpswap_x2 s[10:13], s[20:23], s4\n" },
    { 0xf588028aU, 0x08000000U, true,
        "        s_buffer_atomic_add_x2 s[10:11], s[20:23], s4\n" },
    { 0xf58c028aU, 0x08000000U, true,
        "        s_buffer_atomic_sub_x2 s[10:11], s[20:23], s4\n" },
    { 0xf590028aU, 0x08000000U, true,
        "        s_buffer_atomic_smin_x2 s[10:11], s[20:23], s4\n" },
    { 0xf594028aU, 0x08000000U, true,
        "        s_buffer_atomic_umin_x2 s[10:11], s[20:23], s4\n" },
    { 0xf598028aU, 0x08000000U, true,
        "        s_buffer_atomic_smax_x2 s[10:11], s[20:23], s4\n" },
    { 0xf59c028aU, 0x08000000U, true,
        "        s_buffer_atomic_umax_x2 s[10:11], s[20:23], s4\n" },
    { 0xf5a0028aU, 0x08000000U, true,
        "        s_buffer_atomic_and_x2 s[10:11], s[20:23], s4\n" },
    { 0xf5a4028aU, 0x08000000U, true,
        "        s_buffer_atomic_or_x2 s[10:11], s[20:23], s4\n" },
    { 0xf5a8028aU, 0x08000000U, true,
        "        s_buffer_atomic_xor_x2 s[10:11], s[20:23], s4\n" },
    { 0xf5ac028aU, 0x08000000U, true,
        "        s_buffer_atomic_inc_x2 s[10:11], s[20:23], s4\n" },
    { 0xf5b0028aU, 0x08000000U, true,
        "        s_buffer_atomic_dec_x2 s[10:11], s[20:23], s4\n" },
    { 0xf60000caU, 0x08000000U, true, "        s_atomic_swap   s3, s[20:21], s4\n" },
    { 0xf604028aU, 0x08000000U, true,
        "        s_atomic_cmpswap s[10:11], s[20:21], s4\n" },
    { 0xf60800caU, 0x08000000U, true, "        s_atomic_add    s3, s[20:21], s4\n" },
    { 0xf60c00caU, 0x08000000U, true, "        s_atomic_sub    s3, s[20:21], s4\n" },
    { 0xf61000caU, 0x08000000U, true, "        s_atomic_smin   s3, s[20:21], s4\n" },
    { 0xf61400caU, 0x08000000U, true, "        s_atomic_umin   s3, s[20:21], s4\n" },
    { 0xf61800caU, 0x08000000U, true, "        s_atomic_smax   s3, s[20:21], s4\n" },
    { 0xf61c00caU, 0x08000000U, true, "        s_atomic_umax   s3, s[20:21], s4\n" },
    { 0xf62000caU, 0x08000000U, true, "        s_atomic_and    s3, s[20:21], s4\n" },
    { 0xf62400caU, 0x08000000U, true, "        s_atomic_or     s3, s[20:21], s4\n" },
    { 0xf62800caU, 0x08000000U, true, "        s_atomic_xor    s3, s[20:21], s4\n" },
    { 0xf62c00caU, 0x08000000U, true, "        s_atomic_inc    s3, s[20:21], s4\n" },
    { 0xf63000caU, 0x08000000U, true, "        s_atomic_dec    s3, s[20:21], s4\n" },
    { 0xf680018aU, 0x08000000U, true,
        "        s_atomic_swap_x2 s[6:7], s[20:21], s4\n" },
    { 0xf684028aU, 0x08000000U, true,
        "        s_atomic_cmpswap_x2 s[10:13], s[20:21], s4\n" },
    { 0xf688028aU, 0x08000000U, true,
        "        s_atomic_add_x2 s[10:11], s[20:21], s4\n" },
    { 0xf68c028aU, 0x08000000U, true,
        "        s_atomic_sub_x2 s[10:11], s[20:21], s4\n" },
    { 0xf690028aU, 0x08000000U, true,
        "        s_atomic_smin_x2 s[10:11], s[20:21], s4\n" },
    { 0xf694028aU, 0x08000000U, true,
        "        s_atomic_umin_x2 s[10:11], s[20:21], s4\n" },
    { 0xf698028aU, 0x08000000U, true,
        "        s_atomic_smax_x2 s[10:11], s[20:21], s4\n" },
    { 0xf69c028aU, 0x08000000U, true,
        "        s_atomic_umax_x2 s[10:11], s[20:21], s4\n" },
    { 0xf6a0028aU, 0x08000000U, true,
        "        s_atomic_and_x2 s[10:11], s[20:21], s4\n" },
    { 0xf6a4028aU, 0x08000000U, true,
        "        s_atomic_or_x2  s[10:11], s[20:21], s4\n" },
    { 0xf6a8028aU, 0x08000000U, true,
        "        s_atomic_xor_x2 s[10:11], s[20:21], s4\n" },
    { 0xf6ac028aU, 0x08000000U, true,
        "        s_atomic_inc_x2 s[10:11], s[20:21], s4\n" },
    { 0xf6b0028aU, 0x08000000U, true,
        "        s_atomic_dec_x2 s[10:11], s[20:21], s4\n" },
    /* VOP2 encoding */
    { 0x0334d715U, 0, false, "        v_cndmask_b32   v154, v21, v107, vcc\n" },
    { 0x0734d715U, 0, false, "        v_add_f32       v154, v21, v107\n" },
    { 0x0734d6ffU, 0x40000000U, true, "        v_add_f32       v154, "
            "0x40000000 /* 2f */, v107\n" },
    { 0x0934d715U, 0, false, "        v_sub_f32       v154, v21, v107\n" },
    { 0x0934d6ffU, 0x40000000U, true, "        v_sub_f32       v154, "
            "0x40000000 /* 2f */, v107\n" },
    { 0x0b34d715U, 0, false, "        v_subrev_f32    v154, v21, v107\n" },
    { 0x0b34d6ffU, 0x40000000U, true, "        v_subrev_f32    v154, "
            "0x40000000 /* 2f */, v107\n" },
    { 0x0d34d715U, 0, false, "        v_mac_legacy_f32 v154, v21, v107\n" },
    { 0x0d34d6ffU, 0x40000000U, true, "        v_mac_legacy_f32 v154, "
            "0x40000000 /* 2f */, v107\n" },
    { 0x0f34d715U, 0, false, "        v_mul_legacy_f32 v154, v21, v107\n" },
    { 0x0f34d6ffU, 0x40000000U, true, "        v_mul_legacy_f32 v154, "
        "0x40000000 /* 2f */, v107\n" },
    { 0x1134d715U, 0, false, "        v_mul_f32       v154, v21, v107\n" },
    { 0x1134d6ffU, 0x40000000U, true, "        v_mul_f32       v154, "
        "0x40000000 /* 2f */, v107\n" },
    { 0x1334d715U, 0, false, "        v_mul_i32_i24   v154, v21, v107\n" },
    { 0x1534d715U, 0, false, "        v_mul_hi_i32_i24 v154, v21, v107\n" },
    { 0x1734d715U, 0, false, "        v_mul_u32_u24   v154, v21, v107\n" },
    { 0x1934d715U, 0, false, "        v_mul_hi_u32_u24 v154, v21, v107\n" },
    { 0x1b34d715U, 0, false, "        VOP2_ill_13     v154, v21, v107\n" },
    { 0x1d34d715U, 0, false, "        VOP2_ill_14     v154, v21, v107\n" },
    { 0x1f34d715U, 0, false, "        v_min_f32       v154, v21, v107\n" },
    { 0x2134d715U, 0, false, "        v_max_f32       v154, v21, v107\n" },
    { 0x2334d715U, 0, false, "        v_min_i32       v154, v21, v107\n" },
    { 0x2534d715U, 0, false, "        v_max_i32       v154, v21, v107\n" },
    { 0x2734d715U, 0, false, "        v_min_u32       v154, v21, v107\n" },
    { 0x2934d715U, 0, false, "        v_max_u32       v154, v21, v107\n" },
    { 0x2b34d715U, 0, false, "        VOP2_ill_21     v154, v21, v107\n" },
    { 0x2d34d715U, 0, false, "        v_lshrrev_b32   v154, v21, v107\n" },
    { 0x2f34d715U, 0, false, "        VOP2_ill_23     v154, v21, v107\n" },
    { 0x3134d715U, 0, false, "        v_ashrrev_i32   v154, v21, v107\n" },
    { 0x3334d715U, 0, false, "        VOP2_ill_25     v154, v21, v107\n" },
    { 0x3534d715U, 0, false, "        v_lshlrev_b32   v154, v21, v107\n" },
    { 0x3734d715U, 0, false, "        v_and_b32       v154, v21, v107\n" },
    { 0x3934d715U, 0, false, "        v_or_b32        v154, v21, v107\n" },
    { 0x3b34d715U, 0, false, "        v_xor_b32       v154, v21, v107\n" },
    { 0x3d34d715U, 0, false, "        v_xnor_b32      v154, v21, v107\n" },
    { 0x3f34d715U, 0, false, "        v_mac_f32       v154, v21, v107\n" },
    { 0x4134d715U, 0x567d0700U, true, "        v_madmk_f32     "
            "v154, v21, 0x567d0700 /* 6.9551627e+13f */, v107\n" }, /* check floatLits */
    { 0x4134d715U, 0x11U, true, "        v_madmk_f32     "
            "v154, v21, 0x11 /* 2.38e-44f */, v107\n" }, /* check floatLits */
    { 0x4134d6ffU, 0x567d0700U, true, "        v_madmk_f32     "
            "v154, 0x567d0700 /* 6.9551627e+13f */, "
            "0x567d0700 /* 6.9551627e+13f */, v107\n" }, /* check floatLits */
    { 0x4334d715U, 0x567d0700U, true, "        v_madak_f32     "
            "v154, v21, v107, 0x567d0700 /* 6.9551627e+13f */\n" },  /* check floatLits */
    { 0x4334d715U, 0x11U, true, "        v_madak_f32     "
            "v154, v21, v107, 0x11 /* 2.38e-44f */\n" },  /* check floatLits */
    { 0x4334d6ffU, 0x567d0700U, true, "        v_madak_f32     "
            "v154, 0x567d0700 /* 6.9551627e+13f */, "
            "v107, 0x567d0700 /* 6.9551627e+13f */\n" },  /* check floatLits */
    { 0x4534d715U, 0, false, "        VOP2_ill_34     v154, v21, v107\n" },
    { 0x4734d715U, 0, false, "        VOP2_ill_35     v154, v21, v107\n" },
    { 0x4934d715U, 0, false, "        VOP2_ill_36     v154, v21, v107\n" },
    { 0x4b34d715U, 0, false, "        v_add_nc_u32    v154, vcc, v21, v107\n" },
    { 0x4d34d715U, 0, false, "        v_sub_nc_u32    v154, vcc, v21, v107\n" },
    { 0x4f34d715U, 0, false, "        v_subrev_nc_u32 v154, vcc, v21, v107\n" },
    { 0x5134d715U, 0, false, "        v_add_co_ci_u32 v154, vcc, v21, v107, vcc\n" },
    { 0x5334d715U, 0, false, "        v_sub_co_ci_u32 v154, vcc, v21, v107, vcc\n" },
    { 0x5534d715U, 0, false, "        v_subrev_co_ci_u32 v154, vcc, v21, v107, vcc\n" },
    { 0x5734d715U, 0, false, "        v_fmac_f32      v154, v21, v107\n" },
    { 0x5934d715U, 0x567d0700U, true, "        v_fmamk_f32     "
            "v154, v21, 0x567d0700 /* 6.9551627e+13f */, v107\n" }, /* check floatLits */
    { 0x5934d715U, 0x11U, true, "        v_fmamk_f32     "
            "v154, v21, 0x11 /* 2.38e-44f */, v107\n" }, /* check floatLits */
    { 0x5934d6ffU, 0x567d0700U, true, "        v_fmamk_f32     "
            "v154, 0x567d0700 /* 6.9551627e+13f */, "
            "0x567d0700 /* 6.9551627e+13f */, v107\n" }, /* check floatLits */
    { 0x5b34d715U, 0x567d0700U, true, "        v_fmaak_f32     "
            "v154, v21, v107, 0x567d0700 /* 6.9551627e+13f */\n" },  /* check floatLits */
    { 0x5b34d715U, 0x11U, true, "        v_fmaak_f32     "
            "v154, v21, v107, 0x11 /* 2.38e-44f */\n" },  /* check floatLits */
    { 0x5b34d6ffU, 0x567d0700U, true, "        v_fmaak_f32     "
            "v154, 0x567d0700 /* 6.9551627e+13f */, "
            "v107, 0x567d0700 /* 6.9551627e+13f */\n" },  /* check floatLits */
    { 0x5d34d715U, 0, false, "        VOP2_ill_46     v154, v21, v107\n" },
    { 0x5f34d715U, 0, false, "        v_cvt_pkrtz_f16_f32 v154, v21, v107\n" },
    { 0x6134d715U, 0, false, "        VOP2_ill_48     v154, v21, v107\n" },
    { 0x6334d715U, 0, false, "        VOP2_ill_49     v154, v21, v107\n" },
    { 0x6534d715U, 0, false, "        v_add_f16       v154, v21, v107\n" },
    { 0x6534d6ffU, 0x3d4c, true,
        "        v_add_f16       v154, 0x3d4c /* 1.3242h */, v107\n" },
    { 0x6734d715U, 0, false, "        v_sub_f16       v154, v21, v107\n" },
    { 0x6734d6ffU, 0x3d4c, true,
        "        v_sub_f16       v154, 0x3d4c /* 1.3242h */, v107\n" },
    { 0x6934d715U, 0, false, "        v_subrev_f16    v154, v21, v107\n" },
    { 0x6934d6ffU, 0x3d4c, true,
        "        v_subrev_f16    v154, 0x3d4c /* 1.3242h */, v107\n" },
    { 0x6b34d715U, 0, false, "        v_mul_f16       v154, v21, v107\n" },
    { 0x6b34d6ffU, 0x3d4c, true,
        "        v_mul_f16       v154, 0x3d4c /* 1.3242h */, v107\n" },
    { 0x6d34d715U, 0, false, "        v_fmac_f16      v154, v21, v107\n" },
    { 0x6d34d6ffU, 0x3d4c, true,
        "        v_fmac_f16      v154, 0x3d4c /* 1.3242h */, v107\n" },
    { 0x6f34d715U, 0x3d4c, true,
        "        v_fmamk_f16     v154, v21, 0x3d4c /* 1.3242h */, v107\n" },
    { 0x6f34d6ffU, 0x3d4c, true, "        v_fmamk_f16     "
        "v154, 0x3d4c /* 1.3242h */, 0x3d4c /* 1.3242h */, v107\n" },
    { 0x7134d715U, 0x3d4c, true,
        "        v_fmaak_f16     v154, v21, v107, 0x3d4c /* 1.3242h */\n" },
    { 0x7134d6ffU, 0x3d4c, true, "        v_fmaak_f16     "
        "v154, 0x3d4c /* 1.3242h */, v107, 0x3d4c /* 1.3242h */\n" },
    { 0x7334d715U, 0, false, "        v_max_f16       v154, v21, v107\n" },
    { 0x7334d6ffU, 0x3d4c, true,
        "        v_max_f16       v154, 0x3d4c /* 1.3242h */, v107\n" },
    { 0x7534d715U, 0, false, "        v_min_f16       v154, v21, v107\n" },
    { 0x7534d6ffU, 0x3d4c, true,
        "        v_min_f16       v154, 0x3d4c /* 1.3242h */, v107\n" },
    { 0x7734d715U, 0, false, "        v_ldexp_f16     v154, v21, v107\n" },
    { 0x7734d6ffU, 0x3d4c, true,
        "        v_ldexp_f16     v154, 0x3d4c /* 1.3242h */, v107\n" },
    { 0x7934d715U, 0, false, "        v_pk_fmac_f16   v154, v21, v107\n" },
    { 0x7934d6ffU, 0x3d4c, true,
        "        v_pk_fmac_f16   v154, 0x3d4c /* 1.3242h */, v107\n" },
    /* VOP1 encoding */
    { 0x7f3c004fU, 0, false, "        v_nop           vdst=0x9e src0=0x4f\n" },
    { 0x7f3c0000U, 0, false, "        v_nop           vdst=0x9e\n" },
    { 0x7e00014fU, 0, false, "        v_nop           src0=0x14f\n" },
    { 0x7e000000U, 0, false, "        v_nop\n" },
    { 0x7f3c024fU, 0, false, "        v_mov_b32       v158, s79\n" },
    { 0x7e3c044fU, 0, false, "        v_readfirstlane_b32 s30, s79\n" },
    { 0x7e3c054fU, 0, false, "        v_readfirstlane_b32 s30, v79\n" },
    { 0x7f3c074fU, 0, false, "        v_cvt_i32_f64   v158, v[79:80]\n" },
    { 0x7f3c094fU, 0, false, "        v_cvt_f64_i32   v[158:159], v79\n" },
    { 0x7f3c0b4fU, 0, false, "        v_cvt_f32_i32   v158, v79\n" },
    { 0x7f3c0affU, 0x4556fd, true, "        v_cvt_f32_i32   v158, 0x4556fd\n" },
    { 0x7f3c0d4fU, 0, false, "        v_cvt_f32_u32   v158, v79\n" },
    { 0x7f3c0cffU, 0x40000000U, true, "        v_cvt_f32_u32   v158, 0x40000000\n" },
    { 0x7f3c0f4fU, 0, false, "        v_cvt_u32_f32   v158, v79\n" },
    { 0x7f3c0effU, 0x40000000U, true, "        v_cvt_u32_f32   v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c114fU, 0, false, "        v_cvt_i32_f32   v158, v79\n" },
    { 0x7f3c10ffU, 0x40000000U, true, "        v_cvt_i32_f32   v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c134fU, 0, false, "        v_mov_fed_b32   v158, v79\n" },
    { 0x7f3c12ffU, 0x40000000U, true, "        v_mov_fed_b32   v158, "
                "0x40000000\n" },
    { 0x7f3c154fU, 0, false, "        v_cvt_f16_f32   v158, v79\n" },
    { 0x7f3c14ffU, 0x40000000U, true, "        v_cvt_f16_f32   v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c174fU, 0, false, "        v_cvt_f32_f16   v158, v79\n" },
    { 0x7f3c16ffU, 0x3d4cU, true, "        v_cvt_f32_f16   v158, 0x3d4c\n" },
    { 0x7f3c194fU, 0, false, "        v_cvt_rpi_i32_f32 v158, v79\n" },
    { 0x7f3c18ffU, 0x40000000U, true, "        v_cvt_rpi_i32_f32 v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c1b4fU, 0, false, "        v_cvt_flr_i32_f32 v158, v79\n" },
    { 0x7f3c1affU, 0x40000000U, true, "        v_cvt_flr_i32_f32 v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c1d4fU, 0, false, "        v_cvt_off_f32_i4 v158, v79\n" },
    { 0x7f3c1cffU, 0x40000000U, true, "        v_cvt_off_f32_i4 v158, 0x40000000\n" },
    { 0x7f3c1f4fU, 0, false, "        v_cvt_f32_f64   v158, v[79:80]\n" },
    { 0x7f3c214fU, 0, false, "        v_cvt_f64_f32   v[158:159], v79\n" },
    { 0x7f3c234fU, 0, false, "        v_cvt_f32_ubyte0 v158, v79\n" },
    { 0x7f3c254fU, 0, false, "        v_cvt_f32_ubyte1 v158, v79\n" },
    { 0x7f3c274fU, 0, false, "        v_cvt_f32_ubyte2 v158, v79\n" },
    { 0x7f3c294fU, 0, false, "        v_cvt_f32_ubyte3 v158, v79\n" },
    { 0x7f3c2b4fU, 0, false, "        v_cvt_u32_f64   v158, v[79:80]\n" },
    { 0x7f3c2d4fU, 0, false, "        v_cvt_f64_u32   v[158:159], v79\n" },
    { 0x7f3c2f4fU, 0, false, "        v_trunc_f64     v[158:159], v[79:80]\n" },
    { 0x7f3c314fU, 0, false, "        v_ceil_f64      v[158:159], v[79:80]\n" },
    { 0x7f3c334fU, 0, false, "        v_rndne_f64     v[158:159], v[79:80]\n" },
    { 0x7f3c354fU, 0, false, "        v_floor_f64     v[158:159], v[79:80]\n" },
    { 0x7f3c374fU, 0, false, "        v_pipeflush     vdst=0x9e src0=0x14f\n" },
    { 0x7e003600U, 0, false, "        v_pipeflush\n" },
    { 0x7f3c394fU, 0, false, "        VOP1_ill_28     v158, v79\n" },
    { 0x7f3c3b4fU, 0, false, "        VOP1_ill_29     v158, v79\n" },
    { 0x7f3c3d4fU, 0, false, "        VOP1_ill_30     v158, v79\n" },
    { 0x7f3c3f4fU, 0, false, "        VOP1_ill_31     v158, v79\n" },
    { 0x7f3c40ffU, 0x40000000U, true, "        v_fract_f32     v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c434fU, 0, false, "        v_trunc_f32     v158, v79\n" },
    { 0x7f3c42ffU, 0x40000000U, true, "        v_trunc_f32     v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c454fU, 0, false, "        v_ceil_f32      v158, v79\n" },
    { 0x7f3c44ffU, 0x40000000U, true, "        v_ceil_f32      v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c474fU, 0, false, "        v_rndne_f32     v158, v79\n" },
    { 0x7f3c46ffU, 0x40000000U, true, "        v_rndne_f32     v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c494fU, 0, false, "        v_floor_f32     v158, v79\n" },
    { 0x7f3c48ffU, 0x40000000U, true, "        v_floor_f32     v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c4b4fU, 0, false, "        v_exp_f32       v158, v79\n" },
    { 0x7f3c4affU, 0x40000000U, true, "        v_exp_f32       v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c4d4fU, 0, false, "        VOP1_ill_38     v158, v79\n" },
    { 0x7f3c4f4fU, 0, false, "        v_log_f32       v158, v79\n" },
    { 0x7f3c4effU, 0x40000000U, true, "        v_log_f32       v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c514fU, 0, false, "        VOP1_ill_40     v158, v79\n" },
    { 0x7f3c534fU, 0, false, "        VOP1_ill_41     v158, v79\n" },
    { 0x7f3c554fU, 0, false, "        v_rcp_f32       v158, v79\n" },
    { 0x7f3c54ffU, 0x40000000U, true, "        v_rcp_f32       v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c574fU, 0, false, "        v_rcp_iflag_f32 v158, v79\n" },
    { 0x7f3c56ffU, 0x40000000U, true, "        v_rcp_iflag_f32 v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c594fU, 0, false, "        VOP1_ill_44     v158, v79\n" },
    { 0x7f3c5b4fU, 0, false, "        VOP1_ill_45     v158, v79\n" },
    { 0x7f3c5d4fU, 0, false, "        v_rsq_f32       v158, v79\n" },
    { 0x7f3c5cffU, 0x40000000U, true, "        v_rsq_f32       v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c5f4fU, 0, false, "        v_rcp_f64       v[158:159], v[79:80]\n" },
    { 0x7f3c5effU, 0x40000000U, true, "        v_rcp_f64       v[158:159], "
                "0x40000000\n" },
    { 0x7f3c614fU, 0, false, "        VOP1_ill_48     v158, v79\n" },
    { 0x7f3c634fU, 0, false, "        v_rsq_f64       v[158:159], v[79:80]\n" },
    { 0x7f3c654fU, 0, false, "        VOP1_ill_50     v158, v79\n" },
    { 0x7f3c674fU, 0, false, "        v_sqrt_f32      v158, v79\n" },
    { 0x7f3c66ffU, 0x40000000U, true, "        v_sqrt_f32      v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c694fU, 0, false, "        v_sqrt_f64      v[158:159], v[79:80]\n" },
    { 0x7f3c6b4fU, 0, false, "        v_sin_f32       v158, v79\n" },
    { 0x7f3c6d4fU, 0, false, "        v_cos_f32       v158, v79\n" },
    { 0x7f3c6f4fU, 0, false, "        v_not_b32       v158, v79\n" },
    { 0x7f3c714fU, 0, false, "        v_bfrev_b32     v158, v79\n" },
    { 0x7f3c734fU, 0, false, "        v_ffbh_u32      v158, v79\n" },
    { 0x7f3c754fU, 0, false, "        v_ffbl_b32      v158, v79\n" },
    { 0x7f3c774fU, 0, false, "        v_ffbh_i32      v158, v79\n" },
    { 0x7f3c794fU, 0, false, "        v_frexp_exp_i32_f64 v158, v[79:80]\n" },
    { 0x7f3c7b4fU, 0, false, "        v_frexp_mant_f64 v[158:159], v[79:80]\n" },
    { 0x7f3c7d4fU, 0, false, "        v_fract_f64     v[158:159], v[79:80]\n" },
    { 0x7f3c7f4fU, 0, false, "        v_frexp_exp_i32_f32 v158, v79\n" },
    { 0x7f3c7effU, 0x40000000U, true, "        v_frexp_exp_i32_f32 v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c814fU, 0, false, "        v_frexp_mant_f32 v158, v79\n" },
    { 0x7f3c80ffU, 0x40000000U, true, "        v_frexp_mant_f32 v158, "
                "0x40000000 /* 2f */\n" },
    { 0x7f3c834fU, 0, false, "        v_clrexcp       vdst=0x9e src0=0x14f\n" },
    { 0x7e008200U, 0, false, "        v_clrexcp\n" },
    { 0x7f3c854fU, 0, false, "        v_movreld_b32   v158, v79\n" },
    { 0x7f3c874fU, 0, false, "        v_movrels_b32   v158, v79\n" },
    { 0x7f3c894fU, 0, false, "        v_movrelsd_b32  v158, v79\n" },
    { 0x7f3c8b4fU, 0, false, "        VOP1_ill_69     v158, v79\n" },
    { 0x7f3c8d4fU, 0, false, "        VOP1_ill_70     v158, v79\n" },
    { 0x7f3c8f4fU, 0, false, "        VOP1_ill_71     v158, v79\n" },
    { 0x7f3c914fU, 0, false, "        v_movrelsd_2_b32 v158, v79\n" },
    { 0x7f3c934fU, 0, false, "        VOP1_ill_73     v158, v79\n" },
    { 0x7f3c954fU, 0, false, "        VOP1_ill_74     v158, v79\n" },
    { 0x7f3c974fU, 0, false, "        VOP1_ill_75     v158, v79\n" },
    { 0x7f3c994fU, 0, false, "        VOP1_ill_76     v158, v79\n" },
    { 0x7f3c9b4fU, 0, false, "        VOP1_ill_77     v158, v79\n" },
    { 0x7f3c9d4fU, 0, false, "        VOP1_ill_78     v158, v79\n" },
    { 0x7f3c9f4fU, 0, false, "        VOP1_ill_79     v158, v79\n" },
    { 0x7f3ca14fU, 0, false, "        v_cvt_f16_u16   v158, v79\n" },
    { 0x7f3ca34fU, 0, false, "        v_cvt_f16_i16   v158, v79\n" },
    { 0x7f3ca54fU, 0, false, "        v_cvt_u16_f16   v158, v79\n" },
    { 0x7f3ca74fU, 0, false, "        v_cvt_i16_f16   v158, v79\n" },
    { 0x7f3ca94fU, 0, false, "        v_rcp_f16       v158, v79\n" },
    { 0x7f3ca8ffU, 0x3d4cU, true, "        v_rcp_f16       v158, 0x3d4c /* 1.3242h */\n" },
    { 0x7f3cab4fU, 0, false, "        v_sqrt_f16      v158, v79\n" },
    { 0x7f3caaffU, 0x3d4cU, true, "        v_sqrt_f16      v158, 0x3d4c /* 1.3242h */\n" },
    { 0x7f3cad4fU, 0, false, "        v_rsq_f16       v158, v79\n" },
    { 0x7f3cacffU, 0x3d4cU, true, "        v_rsq_f16       v158, 0x3d4c /* 1.3242h */\n" },
    { 0x7f3caf4fU, 0, false, "        v_log_f16       v158, v79\n" },
    { 0x7f3caeffU, 0x3d4cU, true, "        v_log_f16       v158, 0x3d4c /* 1.3242h */\n" },
    { 0x7f3cb14fU, 0, false, "        v_exp_f16       v158, v79\n" },
    { 0x7f3cb0ffU, 0x3d4cU, true, "        v_exp_f16       v158, 0x3d4c /* 1.3242h */\n" },
    { 0x7f3cb34fU, 0, false, "        v_frexp_mant_f16 v158, v79\n" },
    { 0x7f3cb2ffU, 0x3d4cU, true, "        v_frexp_mant_f16 v158, 0x3d4c /* 1.3242h */\n" },
    { 0x7f3cb54fU, 0, false, "        v_frexp_exp_i16_f16 v158, v79\n" },
    { 0x7f3cb4ffU, 0x3d4cU, true,
        "        v_frexp_exp_i16_f16 v158, 0x3d4c /* 1.3242h */\n" },
    { 0x7f3cb74fU, 0, false, "        v_floor_f16     v158, v79\n" },
    { 0x7f3cb6ffU, 0x3d4cU, true, "        v_floor_f16     v158, 0x3d4c /* 1.3242h */\n" },
    { 0x7f3cb94fU, 0, false, "        v_ceil_f16      v158, v79\n" },
    { 0x7f3cb8ffU, 0x3d4cU, true, "        v_ceil_f16      v158, 0x3d4c /* 1.3242h */\n" },
    { 0x7f3cbb4fU, 0, false, "        v_trunc_f16     v158, v79\n" },
    { 0x7f3cbaffU, 0x3d4cU, true, "        v_trunc_f16     v158, 0x3d4c /* 1.3242h */\n" },
    { 0x7f3cbd4fU, 0, false, "        v_rndne_f16     v158, v79\n" },
    { 0x7f3cbcffU, 0x3d4cU, true, "        v_rndne_f16     v158, 0x3d4c /* 1.3242h */\n" },
    { 0x7f3cbf4fU, 0, false, "        v_fract_f16     v158, v79\n" },
    { 0x7f3cbeffU, 0x3d4cU, true, "        v_fract_f16     v158, 0x3d4c /* 1.3242h */\n" },
    { 0x7f3cc14fU, 0, false, "        v_sin_f16       v158, v79\n" },
    { 0x7f3cc0ffU, 0x3d4cU, true, "        v_sin_f16       v158, 0x3d4c /* 1.3242h */\n" },
    { 0x7f3cc34fU, 0, false, "        v_cos_f16       v158, v79\n" },
    { 0x7f3cc2ffU, 0x3d4cU, true, "        v_cos_f16       v158, 0x3d4c /* 1.3242h */\n" },
    { 0x7f3cc54fU, 0, false, "        v_sat_pk_u8_i16 v158, v79\n" },
    { 0x7f3cc74fU, 0, false, "        v_cvt_norm_i16_f16 v158, v79\n" },
    { 0x7f3cc94fU, 0, false, "        v_cvt_norm_u16_f16 v158, v79\n" },
    { 0x7f3ccb4fU, 0, false, "        v_swap_b32      v158, v79\n" },
    { 0x7f3ccd4fU, 0, false, "        VOP1_ill_102    v158, v79\n" },
    { 0x7f3ccf4fU, 0, false, "        VOP1_ill_103    v158, v79\n" },
    { 0x7f3cd14fU, 0, false, "        v_swaprel_b32   v158, v79\n" },
    /* VOPC encoding */
    { 0x7c01934fU, 0, false, "        v_cmp_f_f32     vcc, v79, v201\n" },
    { 0x7c0192ffU, 0x40000000U, true, "        v_cmp_f_f32     "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c03934fU, 0, false, "        v_cmp_lt_f32    vcc, v79, v201\n" },
    { 0x7c0392ffU, 0x40000000U, true, "        v_cmp_lt_f32    "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c05934fU, 0, false, "        v_cmp_eq_f32    vcc, v79, v201\n" },
    { 0x7c0592ffU, 0x40000000U, true, "        v_cmp_eq_f32    "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c07934fU, 0, false, "        v_cmp_le_f32    vcc, v79, v201\n" },
    { 0x7c0792ffU, 0x40000000U, true, "        v_cmp_le_f32    "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c09934fU, 0, false, "        v_cmp_gt_f32    vcc, v79, v201\n" },
    { 0x7c0992ffU, 0x40000000U, true, "        v_cmp_gt_f32    "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c0b934fU, 0, false, "        v_cmp_lg_f32    vcc, v79, v201\n" },
    { 0x7c0b92ffU, 0x40000000U, true, "        v_cmp_lg_f32    "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c0d934fU, 0, false, "        v_cmp_ge_f32    vcc, v79, v201\n" },
    { 0x7c0d92ffU, 0x40000000U, true, "        v_cmp_ge_f32    "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c0f934fU, 0, false, "        v_cmp_o_f32     vcc, v79, v201\n" },
    { 0x7c0f92ffU, 0x40000000U, true, "        v_cmp_o_f32     "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c11934fU, 0, false, "        v_cmp_u_f32     vcc, v79, v201\n" },
    { 0x7c1192ffU, 0x40000000U, true, "        v_cmp_u_f32     "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c13934fU, 0, false, "        v_cmp_nge_f32   vcc, v79, v201\n" },
    { 0x7c1392ffU, 0x40000000U, true, "        v_cmp_nge_f32   "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c15934fU, 0, false, "        v_cmp_nlg_f32   vcc, v79, v201\n" },
    { 0x7c1592ffU, 0x40000000U, true, "        v_cmp_nlg_f32   "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c17934fU, 0, false, "        v_cmp_ngt_f32   vcc, v79, v201\n" },
    { 0x7c1792ffU, 0x40000000U, true, "        v_cmp_ngt_f32   "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c19934fU, 0, false, "        v_cmp_nle_f32   vcc, v79, v201\n" },
    { 0x7c1992ffU, 0x40000000U, true, "        v_cmp_nle_f32   "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c1b934fU, 0, false, "        v_cmp_neq_f32   vcc, v79, v201\n" },
    { 0x7c1b92ffU, 0x40000000U, true, "        v_cmp_neq_f32   "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c1d934fU, 0, false, "        v_cmp_nlt_f32   vcc, v79, v201\n" },
    { 0x7c1d92ffU, 0x40000000U, true, "        v_cmp_nlt_f32   "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c1f934fU, 0, false, "        v_cmp_tru_f32   vcc, v79, v201\n" },
    { 0x7c1f92ffU, 0x40000000U, true, "        v_cmp_tru_f32   "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7c21934fU, 0, false, "        v_cmpx_f_f32    v79, v201\n" },
    { 0x7c2192ffU, 0x40000000U, true, "        v_cmpx_f_f32    "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c23934fU, 0, false, "        v_cmpx_lt_f32   v79, v201\n" },
    { 0x7c2392ffU, 0x40000000U, true, "        v_cmpx_lt_f32   "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c25934fU, 0, false, "        v_cmpx_eq_f32   v79, v201\n" },
    { 0x7c2592ffU, 0x40000000U, true, "        v_cmpx_eq_f32   "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c27934fU, 0, false, "        v_cmpx_le_f32   v79, v201\n" },
    { 0x7c2792ffU, 0x40000000U, true, "        v_cmpx_le_f32   "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c29934fU, 0, false, "        v_cmpx_gt_f32   v79, v201\n" },
    { 0x7c2992ffU, 0x40000000U, true, "        v_cmpx_gt_f32   "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c2b934fU, 0, false, "        v_cmpx_lg_f32   v79, v201\n" },
    { 0x7c2b92ffU, 0x40000000U, true, "        v_cmpx_lg_f32   "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c2d934fU, 0, false, "        v_cmpx_ge_f32   v79, v201\n" },
    { 0x7c2d92ffU, 0x40000000U, true, "        v_cmpx_ge_f32   "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c2f934fU, 0, false, "        v_cmpx_o_f32    v79, v201\n" },
    { 0x7c2f92ffU, 0x40000000U, true, "        v_cmpx_o_f32    "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c31934fU, 0, false, "        v_cmpx_u_f32    v79, v201\n" },
    { 0x7c3192ffU, 0x40000000U, true, "        v_cmpx_u_f32    "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c33934fU, 0, false, "        v_cmpx_nge_f32  v79, v201\n" },
    { 0x7c3392ffU, 0x40000000U, true, "        v_cmpx_nge_f32  "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c35934fU, 0, false, "        v_cmpx_nlg_f32  v79, v201\n" },
    { 0x7c3592ffU, 0x40000000U, true, "        v_cmpx_nlg_f32  "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c37934fU, 0, false, "        v_cmpx_ngt_f32  v79, v201\n" },
    { 0x7c3792ffU, 0x40000000U, true, "        v_cmpx_ngt_f32  "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c39934fU, 0, false, "        v_cmpx_nle_f32  v79, v201\n" },
    { 0x7c3992ffU, 0x40000000U, true, "        v_cmpx_nle_f32  "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c3b934fU, 0, false, "        v_cmpx_neq_f32  v79, v201\n" },
    { 0x7c3b92ffU, 0x40000000U, true, "        v_cmpx_neq_f32  "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c3d934fU, 0, false, "        v_cmpx_nlt_f32  v79, v201\n" },
    { 0x7c3d92ffU, 0x40000000U, true, "        v_cmpx_nlt_f32  "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c3f934fU, 0, false, "        v_cmpx_tru_f32  v79, v201\n" },
    { 0x7c3f92ffU, 0x40000000U, true, "        v_cmpx_tru_f32  "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7c41934fU, 0, false, "        v_cmp_f_f64     vcc, v[79:80], v[201:202]\n" },
    { 0x7c4192ffU, 0x40000000U, true, "        v_cmp_f_f64     "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c43934fU, 0, false, "        v_cmp_lt_f64    vcc, v[79:80], v[201:202]\n" },
    { 0x7c4392ffU, 0x40000000U, true, "        v_cmp_lt_f64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c45934fU, 0, false, "        v_cmp_eq_f64    vcc, v[79:80], v[201:202]\n" },
    { 0x7c4592ffU, 0x40000000U, true, "        v_cmp_eq_f64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c47934fU, 0, false, "        v_cmp_le_f64    vcc, v[79:80], v[201:202]\n" },
    { 0x7c4792ffU, 0x40000000U, true, "        v_cmp_le_f64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c49934fU, 0, false, "        v_cmp_gt_f64    vcc, v[79:80], v[201:202]\n" },
    { 0x7c4992ffU, 0x40000000U, true, "        v_cmp_gt_f64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c4b934fU, 0, false, "        v_cmp_lg_f64    vcc, v[79:80], v[201:202]\n" },
    { 0x7c4b92ffU, 0x40000000U, true, "        v_cmp_lg_f64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c4d934fU, 0, false, "        v_cmp_ge_f64    vcc, v[79:80], v[201:202]\n" },
    { 0x7c4d92ffU, 0x40000000U, true, "        v_cmp_ge_f64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c4f934fU, 0, false, "        v_cmp_o_f64     vcc, v[79:80], v[201:202]\n" },
    { 0x7c4f92ffU, 0x40000000U, true, "        v_cmp_o_f64     "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c51934fU, 0, false, "        v_cmp_u_f64     vcc, v[79:80], v[201:202]\n" },
    { 0x7c5192ffU, 0x40000000U, true, "        v_cmp_u_f64     "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c53934fU, 0, false, "        v_cmp_nge_f64   vcc, v[79:80], v[201:202]\n" },
    { 0x7c5392ffU, 0x40000000U, true, "        v_cmp_nge_f64   "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c55934fU, 0, false, "        v_cmp_nlg_f64   vcc, v[79:80], v[201:202]\n" },
    { 0x7c5592ffU, 0x40000000U, true, "        v_cmp_nlg_f64   "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c57934fU, 0, false, "        v_cmp_ngt_f64   vcc, v[79:80], v[201:202]\n" },
    { 0x7c5792ffU, 0x40000000U, true, "        v_cmp_ngt_f64   "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c59934fU, 0, false, "        v_cmp_nle_f64   vcc, v[79:80], v[201:202]\n" },
    { 0x7c5992ffU, 0x40000000U, true, "        v_cmp_nle_f64   "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c5b934fU, 0, false, "        v_cmp_neq_f64   vcc, v[79:80], v[201:202]\n" },
    { 0x7c5b92ffU, 0x40000000U, true, "        v_cmp_neq_f64   "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c5d934fU, 0, false, "        v_cmp_nlt_f64   vcc, v[79:80], v[201:202]\n" },
    { 0x7c5d92ffU, 0x40000000U, true, "        v_cmp_nlt_f64   "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c5f934fU, 0, false, "        v_cmp_tru_f64   vcc, v[79:80], v[201:202]\n" },
    { 0x7c5f92ffU, 0x40000000U, true, "        v_cmp_tru_f64   "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7c61934fU, 0, false, "        v_cmpx_f_f64    v[79:80], v[201:202]\n" },
    { 0x7c6192ffU, 0x40000000U, true, "        v_cmpx_f_f64    "
                "0x40000000, v[201:202]\n" },
    { 0x7c63934fU, 0, false, "        v_cmpx_lt_f64   v[79:80], v[201:202]\n" },
    { 0x7c6392ffU, 0x40000000U, true, "        v_cmpx_lt_f64   "
                "0x40000000, v[201:202]\n" },
    { 0x7c65934fU, 0, false, "        v_cmpx_eq_f64   v[79:80], v[201:202]\n" },
    { 0x7c6592ffU, 0x40000000U, true, "        v_cmpx_eq_f64   "
                "0x40000000, v[201:202]\n" },
    { 0x7c67934fU, 0, false, "        v_cmpx_le_f64   v[79:80], v[201:202]\n" },
    { 0x7c6792ffU, 0x40000000U, true, "        v_cmpx_le_f64   "
                "0x40000000, v[201:202]\n" },
    { 0x7c69934fU, 0, false, "        v_cmpx_gt_f64   v[79:80], v[201:202]\n" },
    { 0x7c6992ffU, 0x40000000U, true, "        v_cmpx_gt_f64   "
                "0x40000000, v[201:202]\n" },
    { 0x7c6b934fU, 0, false, "        v_cmpx_lg_f64   v[79:80], v[201:202]\n" },
    { 0x7c6b92ffU, 0x40000000U, true, "        v_cmpx_lg_f64   "
                "0x40000000, v[201:202]\n" },
    { 0x7c6d934fU, 0, false, "        v_cmpx_ge_f64   v[79:80], v[201:202]\n" },
    { 0x7c6d92ffU, 0x40000000U, true, "        v_cmpx_ge_f64   "
                "0x40000000, v[201:202]\n" },
    { 0x7c6f934fU, 0, false, "        v_cmpx_o_f64    v[79:80], v[201:202]\n" },
    { 0x7c6f92ffU, 0x40000000U, true, "        v_cmpx_o_f64    "
                "0x40000000, v[201:202]\n" },
    { 0x7c71934fU, 0, false, "        v_cmpx_u_f64    v[79:80], v[201:202]\n" },
    { 0x7c7192ffU, 0x40000000U, true, "        v_cmpx_u_f64    "
                "0x40000000, v[201:202]\n" },
    { 0x7c73934fU, 0, false, "        v_cmpx_nge_f64  v[79:80], v[201:202]\n" },
    { 0x7c7392ffU, 0x40000000U, true, "        v_cmpx_nge_f64  "
                "0x40000000, v[201:202]\n" },
    { 0x7c75934fU, 0, false, "        v_cmpx_nlg_f64  v[79:80], v[201:202]\n" },
    { 0x7c7592ffU, 0x40000000U, true, "        v_cmpx_nlg_f64  "
                "0x40000000, v[201:202]\n" },
    { 0x7c77934fU, 0, false, "        v_cmpx_ngt_f64  v[79:80], v[201:202]\n" },
    { 0x7c7792ffU, 0x40000000U, true, "        v_cmpx_ngt_f64  "
                "0x40000000, v[201:202]\n" },
    { 0x7c79934fU, 0, false, "        v_cmpx_nle_f64  v[79:80], v[201:202]\n" },
    { 0x7c7992ffU, 0x40000000U, true, "        v_cmpx_nle_f64  "
                "0x40000000, v[201:202]\n" },
    { 0x7c7b934fU, 0, false, "        v_cmpx_neq_f64  v[79:80], v[201:202]\n" },
    { 0x7c7b92ffU, 0x40000000U, true, "        v_cmpx_neq_f64  "
                "0x40000000, v[201:202]\n" },
    { 0x7c7d934fU, 0, false, "        v_cmpx_nlt_f64  v[79:80], v[201:202]\n" },
    { 0x7c7d92ffU, 0x40000000U, true, "        v_cmpx_nlt_f64  "
                "0x40000000, v[201:202]\n" },
    { 0x7c7f934fU, 0, false, "        v_cmpx_tru_f64  v[79:80], v[201:202]\n" },
    { 0x7c7f92ffU, 0x40000000U, true, "        v_cmpx_tru_f64  "
                "0x40000000, v[201:202]\n" },
    { 0x7d01934fU, 0, false, "        v_cmp_f_i32     vcc, v79, v201\n" },
    { 0x7d0192ffU, 0x40000000U, true, "        v_cmp_f_i32     vcc, 0x40000000, v201\n" },
    { 0x7d03934fU, 0, false, "        v_cmp_lt_i32    vcc, v79, v201\n" },
    { 0x7d0392ffU, 0x40000000U, true, "        v_cmp_lt_i32    vcc, 0x40000000, v201\n" },
    { 0x7d05934fU, 0, false, "        v_cmp_eq_i32    vcc, v79, v201\n" },
    { 0x7d0592ffU, 0x40000000U, true, "        v_cmp_eq_i32    vcc, 0x40000000, v201\n" },
    { 0x7d07934fU, 0, false, "        v_cmp_le_i32    vcc, v79, v201\n" },
    { 0x7d0792ffU, 0x40000000U, true, "        v_cmp_le_i32    vcc, 0x40000000, v201\n" },
    { 0x7d09934fU, 0, false, "        v_cmp_gt_i32    vcc, v79, v201\n" },
    { 0x7d0992ffU, 0x40000000U, true, "        v_cmp_gt_i32    vcc, 0x40000000, v201\n" },
    { 0x7d0b934fU, 0, false, "        v_cmp_lg_i32    vcc, v79, v201\n" },
    { 0x7d0b92ffU, 0x40000000U, true, "        v_cmp_lg_i32    vcc, 0x40000000, v201\n" },
    { 0x7d0d934fU, 0, false, "        v_cmp_ge_i32    vcc, v79, v201\n" },
    { 0x7d0d92ffU, 0x40000000U, true, "        v_cmp_ge_i32    vcc, 0x40000000, v201\n" },
    { 0x7d0f934fU, 0, false, "        v_cmp_tru_i32   vcc, v79, v201\n" },
    { 0x7d0f92ffU, 0x40000000U, true, "        v_cmp_tru_i32   vcc, 0x40000000, v201\n" },
    { 0x7d11934fU, 0, false, "        v_cmp_class_f32 vcc, v79, v201\n" },
    { 0x7d1192ffU, 0x40000000U, true, "        v_cmp_class_f32 "
                "vcc, 0x40000000 /* 2f */, v201\n" },
    { 0x7d13934fU, 0, false, "        v_cmp_lt_i16    vcc, v79, v201\n" },
    { 0x7d1392ffU, 0x40000000U, true, "        v_cmp_lt_i16    vcc, 0x40000000, v201\n" },
    { 0x7d15934fU, 0, false, "        v_cmp_eq_i16    vcc, v79, v201\n" },
    { 0x7d1592ffU, 0x40000000U, true, "        v_cmp_eq_i16    vcc, 0x40000000, v201\n" },
    { 0x7d17934fU, 0, false, "        v_cmp_le_i16    vcc, v79, v201\n" },
    { 0x7d1792ffU, 0x40000000U, true, "        v_cmp_le_i16    vcc, 0x40000000, v201\n" },
    { 0x7d19934fU, 0, false, "        v_cmp_gt_i16    vcc, v79, v201\n" },
    { 0x7d1992ffU, 0x40000000U, true, "        v_cmp_gt_i16    vcc, 0x40000000, v201\n" },
    { 0x7d1b934fU, 0, false, "        v_cmp_lg_i16    vcc, v79, v201\n" },
    { 0x7d1b92ffU, 0x40000000U, true, "        v_cmp_lg_i16    vcc, 0x40000000, v201\n" },
    { 0x7d1d934fU, 0, false, "        v_cmp_ge_i16    vcc, v79, v201\n" },
    { 0x7d1d92ffU, 0x40000000U, true, "        v_cmp_ge_i16    vcc, 0x40000000, v201\n" },
    { 0x7d1f934fU, 0, false, "        v_cmp_class_f16 vcc, v79, v201\n" },
    { 0x7d1f92ffU, 0x3d4cU, true, "        v_cmp_class_f16 "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7d21934fU, 0, false, "        v_cmpx_f_i32    v79, v201\n" },
    { 0x7d2192ffU, 0x40000000U, true, "        v_cmpx_f_i32    0x40000000, v201\n" },
    { 0x7d23934fU, 0, false, "        v_cmpx_lt_i32   v79, v201\n" },
    { 0x7d2392ffU, 0x40000000U, true, "        v_cmpx_lt_i32   0x40000000, v201\n" },
    { 0x7d25934fU, 0, false, "        v_cmpx_eq_i32   v79, v201\n" },
    { 0x7d2592ffU, 0x40000000U, true, "        v_cmpx_eq_i32   0x40000000, v201\n" },
    { 0x7d27934fU, 0, false, "        v_cmpx_le_i32   v79, v201\n" },
    { 0x7d2792ffU, 0x40000000U, true, "        v_cmpx_le_i32   0x40000000, v201\n" },
    { 0x7d29934fU, 0, false, "        v_cmpx_gt_i32   v79, v201\n" },
    { 0x7d2992ffU, 0x40000000U, true, "        v_cmpx_gt_i32   0x40000000, v201\n" },
    { 0x7d2b934fU, 0, false, "        v_cmpx_lg_i32   v79, v201\n" },
    { 0x7d2b92ffU, 0x40000000U, true, "        v_cmpx_lg_i32   0x40000000, v201\n" },
    { 0x7d2d934fU, 0, false, "        v_cmpx_ge_i32   v79, v201\n" },
    { 0x7d2d92ffU, 0x40000000U, true, "        v_cmpx_ge_i32   0x40000000, v201\n" },
    { 0x7d2f934fU, 0, false, "        v_cmpx_tru_i32  v79, v201\n" },
    { 0x7d2f92ffU, 0x40000000U, true, "        v_cmpx_tru_i32  0x40000000, v201\n" },
    { 0x7d31934fU, 0, false, "        v_cmpx_class_f32 v79, v201\n" },
    { 0x7d3192ffU, 0x40000000U, true, "        v_cmpx_class_f32 "
                "0x40000000 /* 2f */, v201\n" },
    { 0x7d33934fU, 0, false, "        v_cmpx_lt_i16   v79, v201\n" },
    { 0x7d3392ffU, 0x40000000U, true, "        v_cmpx_lt_i16   0x40000000, v201\n" },
    { 0x7d35934fU, 0, false, "        v_cmpx_eq_i16   v79, v201\n" },
    { 0x7d3592ffU, 0x40000000U, true, "        v_cmpx_eq_i16   0x40000000, v201\n" },
    { 0x7d37934fU, 0, false, "        v_cmpx_le_i16   v79, v201\n" },
    { 0x7d3792ffU, 0x40000000U, true, "        v_cmpx_le_i16   0x40000000, v201\n" },
    { 0x7d39934fU, 0, false, "        v_cmpx_gt_i16   v79, v201\n" },
    { 0x7d3992ffU, 0x40000000U, true, "        v_cmpx_gt_i16   0x40000000, v201\n" },
    { 0x7d3b934fU, 0, false, "        v_cmpx_lg_i16   v79, v201\n" },
    { 0x7d3b92ffU, 0x40000000U, true, "        v_cmpx_lg_i16   0x40000000, v201\n" },
    { 0x7d3d934fU, 0, false, "        v_cmpx_ge_i16   v79, v201\n" },
    { 0x7d3d92ffU, 0x40000000U, true, "        v_cmpx_ge_i16   0x40000000, v201\n" },
    { 0x7d3f934fU, 0, false, "        v_cmpx_class_f16 v79, v201\n" },
    { 0x7d3f92ffU, 0x3d4cU, true, "        v_cmpx_class_f16 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7d41934fU, 0, false, "        v_cmp_f_i64     vcc, v[79:80], v[201:202]\n" },
    { 0x7d4192ffU, 0x40000000U, true, "        v_cmp_f_i64     "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7d43934fU, 0, false, "        v_cmp_lt_i64    vcc, v[79:80], v[201:202]\n" },
    { 0x7d4392ffU, 0x40000000U, true, "        v_cmp_lt_i64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7d45934fU, 0, false, "        v_cmp_eq_i64    vcc, v[79:80], v[201:202]\n" },
    { 0x7d4592ffU, 0x40000000U, true, "        v_cmp_eq_i64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7d47934fU, 0, false, "        v_cmp_le_i64    vcc, v[79:80], v[201:202]\n" },
    { 0x7d4792ffU, 0x40000000U, true, "        v_cmp_le_i64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7d49934fU, 0, false, "        v_cmp_gt_i64    vcc, v[79:80], v[201:202]\n" },
    { 0x7d4992ffU, 0x40000000U, true, "        v_cmp_gt_i64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7d4b934fU, 0, false, "        v_cmp_lg_i64    vcc, v[79:80], v[201:202]\n" },
    { 0x7d4b92ffU, 0x40000000U, true, "        v_cmp_lg_i64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7d4d934fU, 0, false, "        v_cmp_ge_i64    vcc, v[79:80], v[201:202]\n" },
    { 0x7d4d92ffU, 0x40000000U, true, "        v_cmp_ge_i64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7d4f934fU, 0, false, "        v_cmp_tru_i64   vcc, v[79:80], v[201:202]\n" },
    { 0x7d4f92ffU, 0x40000000U, true, "        v_cmp_tru_i64   "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7d51934fU, 0, false, "        v_cmp_class_f64 vcc, v[79:80], v[201:202]\n" },
    { 0x7d5192ffU, 0x40000000U, true, "        v_cmp_class_f64 "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7d53934fU, 0, false, "        v_cmp_lt_u16    vcc, v79, v201\n" },
    { 0x7d5392ffU, 0x40000000U, true, "        v_cmp_lt_u16    vcc, 0x40000000, v201\n" },
    { 0x7d55934fU, 0, false, "        v_cmp_eq_u16    vcc, v79, v201\n" },
    { 0x7d5592ffU, 0x40000000U, true, "        v_cmp_eq_u16    vcc, 0x40000000, v201\n" },
    { 0x7d57934fU, 0, false, "        v_cmp_le_u16    vcc, v79, v201\n" },
    { 0x7d5792ffU, 0x40000000U, true, "        v_cmp_le_u16    vcc, 0x40000000, v201\n" },
    { 0x7d59934fU, 0, false, "        v_cmp_gt_u16    vcc, v79, v201\n" },
    { 0x7d5992ffU, 0x40000000U, true, "        v_cmp_gt_u16    vcc, 0x40000000, v201\n" },
    { 0x7d5b934fU, 0, false, "        v_cmp_lg_u16    vcc, v79, v201\n" },
    { 0x7d5b92ffU, 0x40000000U, true, "        v_cmp_lg_u16    vcc, 0x40000000, v201\n" },
    { 0x7d5d934fU, 0, false, "        v_cmp_ge_u16    vcc, v79, v201\n" },
    { 0x7d5d92ffU, 0x40000000U, true, "        v_cmp_ge_u16    vcc, 0x40000000, v201\n" },
    { 0x7d5f934fU, 0, false, "        VOPC_ill_175    vcc, v79, v201\n" },
    { 0x7d61934fU, 0, false, "        v_cmpx_f_i64    v[79:80], v[201:202]\n" },
    { 0x7d6192ffU, 0x40000000U, true, "        v_cmpx_f_i64    0x40000000, v[201:202]\n" },
    { 0x7d63934fU, 0, false, "        v_cmpx_lt_i64   v[79:80], v[201:202]\n" },
    { 0x7d6392ffU, 0x40000000U, true, "        v_cmpx_lt_i64   0x40000000, v[201:202]\n" },
    { 0x7d65934fU, 0, false, "        v_cmpx_eq_i64   v[79:80], v[201:202]\n" },
    { 0x7d6592ffU, 0x40000000U, true, "        v_cmpx_eq_i64   0x40000000, v[201:202]\n" },
    { 0x7d67934fU, 0, false, "        v_cmpx_le_i64   v[79:80], v[201:202]\n" },
    { 0x7d6792ffU, 0x40000000U, true, "        v_cmpx_le_i64   0x40000000, v[201:202]\n" },
    { 0x7d69934fU, 0, false, "        v_cmpx_gt_i64   v[79:80], v[201:202]\n" },
    { 0x7d6992ffU, 0x40000000U, true, "        v_cmpx_gt_i64   0x40000000, v[201:202]\n" },
    { 0x7d6b934fU, 0, false, "        v_cmpx_lg_i64   v[79:80], v[201:202]\n" },
    { 0x7d6b92ffU, 0x40000000U, true, "        v_cmpx_lg_i64   0x40000000, v[201:202]\n" },
    { 0x7d6d934fU, 0, false, "        v_cmpx_ge_i64   v[79:80], v[201:202]\n" },
    { 0x7d6d92ffU, 0x40000000U, true, "        v_cmpx_ge_i64   0x40000000, v[201:202]\n" },
    { 0x7d6f934fU, 0, false, "        v_cmpx_tru_i64  v[79:80], v[201:202]\n" },
    { 0x7d6f92ffU, 0x40000000U, true, "        v_cmpx_tru_i64  0x40000000, v[201:202]\n" },
    { 0x7d71934fU, 0, false, "        v_cmpx_class_f64 v[79:80], v[201:202]\n" },
    { 0x7d7192ffU, 0x40000000U, true, "        v_cmpx_class_f64 "
                "0x40000000, v[201:202]\n" },
    { 0x7d73934fU, 0, false, "        v_cmpx_lt_u16   v79, v201\n" },
    { 0x7d7392ffU, 0x40000000U, true, "        v_cmpx_lt_u16   0x40000000, v201\n" },
    { 0x7d75934fU, 0, false, "        v_cmpx_eq_u16   v79, v201\n" },
    { 0x7d7592ffU, 0x40000000U, true, "        v_cmpx_eq_u16   0x40000000, v201\n" },
    { 0x7d77934fU, 0, false, "        v_cmpx_le_u16   v79, v201\n" },
    { 0x7d7792ffU, 0x40000000U, true, "        v_cmpx_le_u16   0x40000000, v201\n" },
    { 0x7d79934fU, 0, false, "        v_cmpx_gt_u16   v79, v201\n" },
    { 0x7d7992ffU, 0x40000000U, true, "        v_cmpx_gt_u16   0x40000000, v201\n" },
    { 0x7d7b934fU, 0, false, "        v_cmpx_lg_u16   v79, v201\n" },
    { 0x7d7b92ffU, 0x40000000U, true, "        v_cmpx_lg_u16   0x40000000, v201\n" },
    { 0x7d7d934fU, 0, false, "        v_cmpx_ge_u16   v79, v201\n" },
    { 0x7d7d92ffU, 0x40000000U, true, "        v_cmpx_ge_u16   0x40000000, v201\n" },
    { 0x7d7f934fU, 0, false, "        VOPC_ill_191    vcc, v79, v201\n" },
    { 0x7d81934fU, 0, false, "        v_cmp_f_u32     vcc, v79, v201\n" },
    { 0x7d8192ffU, 0x40000000U, true, "        v_cmp_f_u32     vcc, 0x40000000, v201\n" },
    { 0x7d83934fU, 0, false, "        v_cmp_lt_u32    vcc, v79, v201\n" },
    { 0x7d8392ffU, 0x40000000U, true, "        v_cmp_lt_u32    vcc, 0x40000000, v201\n" },
    { 0x7d85934fU, 0, false, "        v_cmp_eq_u32    vcc, v79, v201\n" },
    { 0x7d8592ffU, 0x40000000U, true, "        v_cmp_eq_u32    vcc, 0x40000000, v201\n" },
    { 0x7d87934fU, 0, false, "        v_cmp_le_u32    vcc, v79, v201\n" },
    { 0x7d8792ffU, 0x40000000U, true, "        v_cmp_le_u32    vcc, 0x40000000, v201\n" },
    { 0x7d89934fU, 0, false, "        v_cmp_gt_u32    vcc, v79, v201\n" },
    { 0x7d8992ffU, 0x40000000U, true, "        v_cmp_gt_u32    vcc, 0x40000000, v201\n" },
    { 0x7d8b934fU, 0, false, "        v_cmp_lg_u32    vcc, v79, v201\n" },
    { 0x7d8b92ffU, 0x40000000U, true, "        v_cmp_lg_u32    vcc, 0x40000000, v201\n" },
    { 0x7d8d934fU, 0, false, "        v_cmp_ge_u32    vcc, v79, v201\n" },
    { 0x7d8d92ffU, 0x40000000U, true, "        v_cmp_ge_u32    vcc, 0x40000000, v201\n" },
    { 0x7d8f934fU, 0, false, "        v_cmp_tru_u32   vcc, v79, v201\n" },
    { 0x7d8f92ffU, 0x40000000U, true, "        v_cmp_tru_u32   vcc, 0x40000000, v201\n" },
    { 0x7d91934fU, 0, false, "        v_cmp_f_f16     vcc, v79, v201\n" },
    { 0x7d9192ffU, 0x3d4cU, true, "        v_cmp_f_f16     "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7d93934fU, 0, false, "        v_cmp_lt_f16    vcc, v79, v201\n" },
    { 0x7d9392ffU, 0x3d4cU, true, "        v_cmp_lt_f16    "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7d95934fU, 0, false, "        v_cmp_eq_f16    vcc, v79, v201\n" },
    { 0x7d9592ffU, 0x3d4cU, true, "        v_cmp_eq_f16    "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7d97934fU, 0, false, "        v_cmp_le_f16    vcc, v79, v201\n" },
    { 0x7d9792ffU, 0x3d4cU, true, "        v_cmp_le_f16    "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7d99934fU, 0, false, "        v_cmp_gt_f16    vcc, v79, v201\n" },
    { 0x7d9992ffU, 0x3d4cU, true, "        v_cmp_gt_f16    "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7d9b934fU, 0, false, "        v_cmp_lg_f16    vcc, v79, v201\n" },
    { 0x7d9b92ffU, 0x3d4cU, true, "        v_cmp_lg_f16    "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7d9d934fU, 0, false, "        v_cmp_ge_f16    vcc, v79, v201\n" },
    { 0x7d9d92ffU, 0x3d4cU, true, "        v_cmp_ge_f16    "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7d9f934fU, 0, false, "        v_cmp_o_f16     vcc, v79, v201\n" },
    { 0x7d9f92ffU, 0x3d4cU, true, "        v_cmp_o_f16     "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7da1934fU, 0, false, "        v_cmpx_f_u32    v79, v201\n" },
    { 0x7da192ffU, 0x40000000U, true, "        v_cmpx_f_u32    0x40000000, v201\n" },
    { 0x7da3934fU, 0, false, "        v_cmpx_lt_u32   v79, v201\n" },
    { 0x7da392ffU, 0x40000000U, true, "        v_cmpx_lt_u32   0x40000000, v201\n" },
    { 0x7da5934fU, 0, false, "        v_cmpx_eq_u32   v79, v201\n" },
    { 0x7da592ffU, 0x40000000U, true, "        v_cmpx_eq_u32   0x40000000, v201\n" },
    { 0x7da7934fU, 0, false, "        v_cmpx_le_u32   v79, v201\n" },
    { 0x7da792ffU, 0x40000000U, true, "        v_cmpx_le_u32   0x40000000, v201\n" },
    { 0x7da9934fU, 0, false, "        v_cmpx_gt_u32   v79, v201\n" },
    { 0x7da992ffU, 0x40000000U, true, "        v_cmpx_gt_u32   0x40000000, v201\n" },
    { 0x7dab934fU, 0, false, "        v_cmpx_lg_u32   v79, v201\n" },
    { 0x7dab92ffU, 0x40000000U, true, "        v_cmpx_lg_u32   0x40000000, v201\n" },
    { 0x7dad934fU, 0, false, "        v_cmpx_ge_u32   v79, v201\n" },
    { 0x7dad92ffU, 0x40000000U, true, "        v_cmpx_ge_u32   0x40000000, v201\n" },
    { 0x7daf934fU, 0, false, "        v_cmpx_tru_u32  v79, v201\n" },
    { 0x7daf92ffU, 0x40000000U, true, "        v_cmpx_tru_u32  0x40000000, v201\n" },
    { 0x7db1934fU, 0, false, "        v_cmpx_f_f16    v79, v201\n" },
    { 0x7db192ffU, 0x3d4cU, true, "        v_cmpx_f_f16    0x3d4c /* 1.3242h */, v201\n" },
    { 0x7db3934fU, 0, false, "        v_cmpx_lt_f16   v79, v201\n" },
    { 0x7db392ffU, 0x3d4cU, true, "        v_cmpx_lt_f16   0x3d4c /* 1.3242h */, v201\n" },
    { 0x7db5934fU, 0, false, "        v_cmpx_eq_f16   v79, v201\n" },
    { 0x7db592ffU, 0x3d4cU, true, "        v_cmpx_eq_f16   0x3d4c /* 1.3242h */, v201\n" },
    { 0x7db7934fU, 0, false, "        v_cmpx_le_f16   v79, v201\n" },
    { 0x7db792ffU, 0x3d4cU, true, "        v_cmpx_le_f16   0x3d4c /* 1.3242h */, v201\n" },
    { 0x7db9934fU, 0, false, "        v_cmpx_gt_f16   v79, v201\n" },
    { 0x7db992ffU, 0x3d4cU, true, "        v_cmpx_gt_f16   0x3d4c /* 1.3242h */, v201\n" },
    { 0x7dbb934fU, 0, false, "        v_cmpx_lg_f16   v79, v201\n" },
    { 0x7dbb92ffU, 0x3d4cU, true, "        v_cmpx_lg_f16   0x3d4c /* 1.3242h */, v201\n" },
    { 0x7dbd934fU, 0, false, "        v_cmpx_ge_f16   v79, v201\n" },
    { 0x7dbd92ffU, 0x3d4cU, true, "        v_cmpx_ge_f16   0x3d4c /* 1.3242h */, v201\n" },
    { 0x7dbf934fU, 0, false, "        v_cmpx_o_f16    v79, v201\n" },
    { 0x7dbf92ffU, 0x3d4cU, true, "        v_cmpx_o_f16    0x3d4c /* 1.3242h */, v201\n" },
    { 0x7dc1934fU, 0, false, "        v_cmp_f_u64     vcc, v[79:80], v[201:202]\n" },
    { 0x7dc192ffU, 0x40000000U, true, "        v_cmp_f_u64     "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7dc3934fU, 0, false, "        v_cmp_lt_u64    vcc, v[79:80], v[201:202]\n" },
    { 0x7dc392ffU, 0x40000000U, true, "        v_cmp_lt_u64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7dc5934fU, 0, false, "        v_cmp_eq_u64    vcc, v[79:80], v[201:202]\n" },
    { 0x7dc592ffU, 0x40000000U, true, "        v_cmp_eq_u64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7dc7934fU, 0, false, "        v_cmp_le_u64    vcc, v[79:80], v[201:202]\n" },
    { 0x7dc792ffU, 0x40000000U, true, "        v_cmp_le_u64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7dc9934fU, 0, false, "        v_cmp_gt_u64    vcc, v[79:80], v[201:202]\n" },
    { 0x7dc992ffU, 0x40000000U, true, "        v_cmp_gt_u64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7dcb934fU, 0, false, "        v_cmp_lg_u64    vcc, v[79:80], v[201:202]\n" },
    { 0x7dcb92ffU, 0x40000000U, true, "        v_cmp_lg_u64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7dcd934fU, 0, false, "        v_cmp_ge_u64    vcc, v[79:80], v[201:202]\n" },
    { 0x7dcd92ffU, 0x40000000U, true, "        v_cmp_ge_u64    "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7dcf934fU, 0, false, "        v_cmp_tru_u64   vcc, v[79:80], v[201:202]\n" },
    { 0x7dcf92ffU, 0x40000000U, true, "        v_cmp_tru_u64   "
                "vcc, 0x40000000, v[201:202]\n" },
    { 0x7dd1934fU, 0, false, "        v_cmp_u_f16     vcc, v79, v201\n" },
    { 0x7dd192ffU, 0x3d4cU, true, "        v_cmp_u_f16     "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7dd3934fU, 0, false, "        v_cmp_nge_f16   vcc, v79, v201\n" },
    { 0x7dd392ffU, 0x3d4cU, true, "        v_cmp_nge_f16   "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7dd5934fU, 0, false, "        v_cmp_nlg_f16   vcc, v79, v201\n" },
    { 0x7dd592ffU, 0x3d4cU, true, "        v_cmp_nlg_f16   "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7dd7934fU, 0, false, "        v_cmp_ngt_f16   vcc, v79, v201\n" },
    { 0x7dd792ffU, 0x3d4cU, true, "        v_cmp_ngt_f16   "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7dd9934fU, 0, false, "        v_cmp_nle_f16   vcc, v79, v201\n" },
    { 0x7dd992ffU, 0x3d4cU, true, "        v_cmp_nle_f16   "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7ddb934fU, 0, false, "        v_cmp_neq_f16   vcc, v79, v201\n" },
    { 0x7ddb92ffU, 0x3d4cU, true, "        v_cmp_neq_f16   "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7ddd934fU, 0, false, "        v_cmp_nlt_f16   vcc, v79, v201\n" },
    { 0x7ddd92ffU, 0x3d4cU, true, "        v_cmp_nlt_f16   "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7ddf934fU, 0, false, "        v_cmp_tru_f16   vcc, v79, v201\n" },
    { 0x7ddf92ffU, 0x3d4cU, true, "        v_cmp_tru_f16   "
                "vcc, 0x3d4c /* 1.3242h */, v201\n" },
    { 0x7de1934fU, 0, false, "        v_cmpx_f_u64    v[79:80], v[201:202]\n" },
    { 0x7de192ffU, 0x40000000U, true, "        v_cmpx_f_u64    "
                "0x40000000, v[201:202]\n" },
    { 0x7de3934fU, 0, false, "        v_cmpx_lt_u64   v[79:80], v[201:202]\n" },
    { 0x7de392ffU, 0x40000000U, true, "        v_cmpx_lt_u64   "
                "0x40000000, v[201:202]\n" },
    { 0x7de5934fU, 0, false, "        v_cmpx_eq_u64   v[79:80], v[201:202]\n" },
    { 0x7de592ffU, 0x40000000U, true, "        v_cmpx_eq_u64   "
                "0x40000000, v[201:202]\n" },
    { 0x7de7934fU, 0, false, "        v_cmpx_le_u64   v[79:80], v[201:202]\n" },
    { 0x7de792ffU, 0x40000000U, true, "        v_cmpx_le_u64   "
                "0x40000000, v[201:202]\n" },
    { 0x7de9934fU, 0, false, "        v_cmpx_gt_u64   v[79:80], v[201:202]\n" },
    { 0x7de992ffU, 0x40000000U, true, "        v_cmpx_gt_u64   "
                "0x40000000, v[201:202]\n" },
    { 0x7deb934fU, 0, false, "        v_cmpx_lg_u64   v[79:80], v[201:202]\n" },
    { 0x7deb92ffU, 0x40000000U, true, "        v_cmpx_lg_u64   "
                "0x40000000, v[201:202]\n" },
    { 0x7ded934fU, 0, false, "        v_cmpx_ge_u64   v[79:80], v[201:202]\n" },
    { 0x7ded92ffU, 0x40000000U, true, "        v_cmpx_ge_u64   "
                "0x40000000, v[201:202]\n" },
    { 0x7def934fU, 0, false, "        v_cmpx_tru_u64  v[79:80], v[201:202]\n" },
    { 0x7def92ffU, 0x40000000U, true, "        v_cmpx_tru_u64  "
                "0x40000000, v[201:202]\n" },
    { 0x7df1934fU, 0, false, "        v_cmpx_u_f16    v79, v201\n" },
    { 0x7df192ffU, 0x3d4cU, true, "        v_cmpx_u_f16    0x3d4c /* 1.3242h */, v201\n" },
    { 0x7df3934fU, 0, false, "        v_cmpx_nge_f16  v79, v201\n" },
    { 0x7df392ffU, 0x3d4cU, true, "        v_cmpx_nge_f16  0x3d4c /* 1.3242h */, v201\n" },
    { 0x7df5934fU, 0, false, "        v_cmpx_nlg_f16  v79, v201\n" },
    { 0x7df592ffU, 0x3d4cU, true, "        v_cmpx_nlg_f16  0x3d4c /* 1.3242h */, v201\n" },
    { 0x7df7934fU, 0, false, "        v_cmpx_ngt_f16  v79, v201\n" },
    { 0x7df792ffU, 0x3d4cU, true, "        v_cmpx_ngt_f16  0x3d4c /* 1.3242h */, v201\n" },
    { 0x7df9934fU, 0, false, "        v_cmpx_nle_f16  v79, v201\n" },
    { 0x7df992ffU, 0x3d4cU, true, "        v_cmpx_nle_f16  0x3d4c /* 1.3242h */, v201\n" },
    { 0x7dfb934fU, 0, false, "        v_cmpx_neq_f16  v79, v201\n" },
    { 0x7dfb92ffU, 0x3d4cU, true, "        v_cmpx_neq_f16  0x3d4c /* 1.3242h */, v201\n" },
    { 0x7dfd934fU, 0, false, "        v_cmpx_nlt_f16  v79, v201\n" },
    { 0x7dfd92ffU, 0x3d4cU, true, "        v_cmpx_nlt_f16  0x3d4c /* 1.3242h */, v201\n" },
    { 0x7dff934fU, 0, false, "        v_cmpx_tru_f16  v79, v201\n" },
    { 0x7dff92ffU, 0x3d4cU, true, "        v_cmpx_tru_f16  0x3d4c /* 1.3242h */, v201\n" },
    /* VOP_SDWA encoding */
    { 0x0334d6f9U, 0, true, "        v_cndmask_b32   v154, v0, v107, vcc "
        "dst_sel:byte0 src0_sel:byte0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x3d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src0_sel:byte0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x13d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte1 src0_sel:byte0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x23d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte2 src0_sel:byte0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x33d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte3 src0_sel:byte0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x43d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:word0 src0_sel:byte0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x53d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:word1 src0_sel:byte0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x63d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "src0_sel:byte0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x73d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:invalid src0_sel:byte0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x93d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte1 dst_unused:sext src0_sel:byte0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x113d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte1 dst_unused:preserve src0_sel:byte0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x193d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte1 dst_unused:invalid src0_sel:byte0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x393d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "clamp dst_sel:byte1 dst_unused:invalid src0_sel:byte0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x1003d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src0_sel:byte1 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x2003d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src0_sel:byte2 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x3003d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src0_sel:byte3 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x4003d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src0_sel:word0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x5003d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src0_sel:word1 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x6003d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x7003d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src0_sel:invalid src1_sel:byte0\n" },
    { 0x0334d6f9U, 0xd003d, true, "        v_cndmask_b32   v154, sext(v61), v107, vcc "
        "dst_sel:byte0 src0_sel:word1 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x1d003d, true, "        v_cndmask_b32   v154, sext(-v61), v107, vcc "
        "dst_sel:byte0 src0_sel:word1 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x3d003d, true, "        v_cndmask_b32   v154, sext(-abs(v61)), "
        "v107, vcc dst_sel:byte0 src0_sel:word1 src1_sel:byte0\n" },
    { 0x0334d6f9U, 0x100003d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src0_sel:byte0 src1_sel:byte1\n" },
    { 0x0334d6f9U, 0x200003d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src0_sel:byte0 src1_sel:byte2\n" },
    { 0x0334d6f9U, 0x300003d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src0_sel:byte0 src1_sel:byte3\n" },
    { 0x0334d6f9U, 0x400003d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src0_sel:byte0 src1_sel:word0\n" },
    { 0x0334d6f9U, 0x500003d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src0_sel:byte0 src1_sel:word1\n" },
    { 0x0334d6f9U, 0x600003d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src0_sel:byte0\n" },
    { 0x0334d6f9U, 0x700003d, true, "        v_cndmask_b32   v154, v61, v107, vcc "
        "dst_sel:byte0 src0_sel:byte0 src1_sel:invalid\n" },
    { 0x0334d6f9U, 0xf00003d, true, "        v_cndmask_b32   v154, v61, sext(v107), vcc "
        "dst_sel:byte0 src0_sel:byte0 src1_sel:invalid\n" },
    { 0x0334d6f9U, 0x1f00003d, true, "        v_cndmask_b32   v154, v61, sext(-v107), vcc "
        "dst_sel:byte0 src0_sel:byte0 src1_sel:invalid\n" },
    { 0x0334d6f9U, 0x3f00003d, true, "        v_cndmask_b32   v154, v61, "
        "sext(-abs(v107)), vcc dst_sel:byte0 src0_sel:byte0 src1_sel:invalid\n" },
    // SDWA word at end
    { 0x0334d6f9U, 0x06060600, true, "        v_cndmask_b32   v154, v0, v107, vcc sdwa\n" },
    { 0x0334d6f9U, 0x06160600, true,
        "        v_cndmask_b32   v154, -v0, v107, vcc sdwa\n" },
    { 0x0334d6f9U, 0x16160600, true,
        "        v_cndmask_b32   v154, -v0, -v107, vcc sdwa\n" },
    { 0x0334d6f9U, 0x26260600, true,
        "        v_cndmask_b32   v154, abs(v0), abs(v107), vcc sdwa\n" },
    { 0x0334d6f9U, 0x0e0e0600, true,
        "        v_cndmask_b32   v154, sext(v0), sext(v107), vcc\n" },
    // VOP1 SDWA
    { 0x7e0000f9U, 0x3d003d, true, "        v_nop           "
        "src0=0xf9 dst_sel:byte0 sext0 neg0 abs0\n" },
    // VOPC SDWAB
    { 0x7d1192f9U, 0x0404004eU, true, "        v_cmp_class_f32 vcc, v78, v201 "
            "src0_sel:word0 src1_sel:word0\n" },
    { 0x7d1192f9U, 0x0404924eU, true, "        v_cmp_class_f32 s[18:19], v78, v201 "
            "src0_sel:word0 src1_sel:word0\n" },
    { 0x7d1192f9U, 0x0404424eU, true, "        v_cmp_class_f32 vcc, v78, v201 "
            "src0_sel:word0 src1_sel:word0\n" },
    // VOP DPP encoding
    { 0x0334d6faU, 0xbe, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "quad_perm:[0,0,0,0] bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x72be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "quad_perm:[2,0,3,1] bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0xb4be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "quad_perm:[0,1,3,2] bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x100be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x101be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_shl:1 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x102be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_shl:2 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x105be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_shl:5 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x106be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_shl:6 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x10abe, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_shl:10 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x10dbe, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_shl:13 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x10fbe, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_shl:15 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x110be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "dppctrl:0x110 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x11abe, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_shr:10 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x120be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "dppctrl:0x120 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x12abe, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_ror:10 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x12fbe, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_ror:15 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x130be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "wave_shl bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x131be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "dppctrl:0x131 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x134be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "wave_rol bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x136be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "dppctrl:0x136 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x138be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "wave_shr bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x13ebe, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "dppctrl:0x13e bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x13cbe, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "wave_ror bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x140be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_mirror bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x141be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_half_mirror bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x142be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_bcast15 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x143be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_bcast31 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x14dbe, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "dppctrl:0x14d bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x193be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "dppctrl:0x193 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x872be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "quad_perm:[2,0,3,1] bound_ctrl bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x872be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "quad_perm:[2,0,3,1] bound_ctrl bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x1872be, true, "        v_cndmask_b32   v154, -v190, v107, vcc "
        "quad_perm:[2,0,3,1] bound_ctrl bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x2872be, true, "        v_cndmask_b32   v154, abs(v190), v107, vcc "
        "quad_perm:[2,0,3,1] bound_ctrl bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x3872be, true, "        v_cndmask_b32   v154, -abs(v190), v107, vcc "
        "quad_perm:[2,0,3,1] bound_ctrl bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x4872be, true, "        v_cndmask_b32   v154, v190, -v107, vcc "
        "quad_perm:[2,0,3,1] bound_ctrl bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x8872be, true, "        v_cndmask_b32   v154, v190, abs(v107), vcc "
        "quad_perm:[2,0,3,1] bound_ctrl bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0xc872be, true, "        v_cndmask_b32   v154, v190, -abs(v107), vcc "
        "quad_perm:[2,0,3,1] bound_ctrl bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x10072be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "quad_perm:[2,0,3,1] bank_mask:1 row_mask:0\n" },
    { 0x0334d6faU, 0xe0072be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "quad_perm:[2,0,3,1] bank_mask:14 row_mask:0\n" },
    { 0x0334d6faU, 0x100072be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "quad_perm:[2,0,3,1] bank_mask:0 row_mask:1\n" },
    { 0x0334d6faU, 0xd00072be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "quad_perm:[2,0,3,1] bank_mask:0 row_mask:13\n" },
    { 0x0334d6faU, 0x101be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_shl:1 bank_mask:0 row_mask:0\n" },
    { 0x0334d6faU, 0x102be, true, "        v_cndmask_b32   v154, v190, v107, vcc "
        "row_shl:2 bank_mask:0 row_mask:0\n" },
    { 0, 0, false, nullptr }
};
