/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

#include <pthread.h>
typedef struct TY54525 TY54525;
typedef struct TY54551 TY54551;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY46532 TY46532;
typedef struct TY54547 TY54547;
typedef struct TY53011 TY53011;
typedef struct TY54519 TY54519;
typedef struct TY53005 TY53005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY54529 TY54529;
typedef struct TY54527 TY54527;
typedef struct TY54539 TY54539;
typedef struct TY51008 TY51008;
typedef struct TY54543 TY54543;
typedef struct TY54575 TY54575;
typedef struct TY54573 TY54573;
typedef struct TY54571 TY54571;
typedef struct TY10602 TY10602;
typedef struct TY10990 TY10990;
typedef struct TY10618 TY10618;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10988 TY10988;
typedef struct TY54549 TY54549;
typedef struct TY42013 TY42013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TY46532 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY54525 {
TY54551* Typ;
NimStringDesc* Comment;
TY46532 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY54547* Sym;
} S4;
struct {TY53011* Ident;
} S5;
struct {TY54519* Sons;
} S6;
} KindU;
};
typedef NU8 TY54999[16];
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimObject {
TNimType* m_type;
};
struct TY53005 {
  TNimObject Sup;
NI Id;
};
struct TY53011 {
  TY53005 Sup;
NimStringDesc* S;
TY53011* Next;
NI H;
};
struct TY54529 {
TNimType* m_type;
NI Counter;
TY54527* Data;
};
struct TY54539 {
NU8 K;
NU8 S;
NU8 Flags;
TY54551* T;
TY51008* R;
NI A;
};
struct TY54547 {
  TY53005 Sup;
NU8 Kind;
NU8 Magic;
TY54551* Typ;
TY53011* Name;
TY46532 Info;
TY54547* Owner;
NU32 Flags;
TY54529 Tab;
TY54525* Ast;
NU32 Options;
NI Position;
NI Offset;
TY54539 Loc;
TY54543* Annex;
};
struct TY54571 {
NI H;
TY54525* Key;
NI Val;
};
struct TY54575 {
NI Counter;
TY54573* Data;
};
struct TY10602 {
NI Refcount;
TNimType* Typ;
};
struct TY10618 {
NI Len;
NI Cap;
TY10602** D;
};
struct TY10614 {
NI Counter;
NI Max;
TY10610* Head;
TY10610** Data;
};
struct TY10988 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10990 {
TY10618 Zct;
TY10618 Decstack;
TY10614 Cycleroots;
TY10618 Tempstack;
NI Cyclerootslock;
NI Zctlock;
TY10988 Stat;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY54551 {
  TY53005 Sup;
NU8 Kind;
TY54549* Sons;
TY54525* N;
NU8 Flags;
NU8 Callconv;
TY54547* Owner;
TY54547* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY54539 Loc;
};
struct TY51008 {
  TNimObject Sup;
TY51008* Left;
TY51008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY42013 {
  TNimObject Sup;
TY42013* Prev;
TY42013* Next;
};
struct TY54543 {
  TY42013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY51008* Name;
TY54525* Path;
};
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY54519 {
  TGenericSeq Sup;
  TY54525* data[SEQ_DECL_SIZE];
};
struct TY54527 {
  TGenericSeq Sup;
  TY54547* data[SEQ_DECL_SIZE];
};
struct TY54573 {
  TGenericSeq Sup;
  TY54571 data[SEQ_DECL_SIZE];
};
struct TY54549 {
  TGenericSeq Sup;
  TY54551* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, Hashtree_104029)(TY54525* N_104031);
N_NIMCALL(NI, Conchash_43040)(NI H_43042, NI Val_43043);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* F_5275);
N_NIMCALL(NI, Gethashstr_43031)(NimStringDesc* S_43033);
N_NIMCALL(NI, Sonslen_54803)(TY54525* N_54805);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NIMCALL(NIM_BOOL, Treesequivalent_104214)(TY54525* A_104216, TY54525* B_104217);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_17247, NimStringDesc* B_17248);
N_NIMCALL(NIM_BOOL, Sametypeornil_95052)(TY54551* A_95054, TY54551* B_95055);
N_NIMCALL(NI, Nodetablerawget_104425)(TY54575 T_104427, NI K_104428, TY54525* Key_104429);
N_NIMCALL(NI, Nexttry_58213)(NI H_58215, NI Maxhash_58216);
N_NIMCALL(NI, Nodetableget_104013)(TY54575 T_104015, TY54525* Key_104016);
N_NIMCALL(void, Nodetablerawinsert_104454)(TY54573** Data_104457, NI K_104458, TY54525* Key_104459, NI Val_104460);
N_NIMCALL(void, internalAssert)(NCSTRING File_5054, NI Line_5055, NIM_BOOL Cond_5056);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11818, void* Src_11819);
static N_INLINE(TY10602*, Usrtocell_11036)(void* Usr_11038);
static N_INLINE(NI, Atomicinc_2801)(NI* Memloc_2804, NI X_2805);
static N_INLINE(NI, Atomicdec_2806)(NI* Memloc_2809, NI X_2810);
static N_INLINE(void, Rtladdzct_11658)(TY10602* C_11660);
N_NOINLINE(void, Addzct_11025)(TY10618* S_11028, TY10602* C_11029);
N_NIMCALL(void, Nodetableput_104017)(TY54575* T_104020, TY54525* Key_104021, NI Val_104022);
N_NIMCALL(NIM_BOOL, Mustrehash_58209)(NI Length_58211, NI Counter_58212);
N_NIMCALL(NI, mulInt)(NI A_6603, NI B_6604);
N_NIMCALL(void*, newSeq)(TNimType* Typ_12804, NI Len_12805);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_11826, void* Src_11827);
N_NIMCALL(NI, Nodetabletestorset_104023)(TY54575* T_104026, TY54525* Key_104027, NI Val_104028);
static NIM_CONST TY54999 TMP104202 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP104203, "ident", 5);
static NIM_CONST TY54999 TMP104204 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP104205, "sym", 3);
static NIM_CONST TY54999 TMP104206 = {
0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP104207, "intVal", 6);
static NIM_CONST TY54999 TMP104208 = {
0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP104209, "floatVal", 8);
static NIM_CONST TY54999 TMP104210 = {
0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP104211, "strVal", 6);
static NIM_CONST TY54999 TMP104212 = {
0xEC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;STRING_LITERAL(TMP104213, "sons", 4);
extern TY10990 Gch_11010;
extern TNimType* NTI54573; /* TNodePairSeq */
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804) {
NI Result_5805;
NIM_BOOL LOC2;
Result_5805 = 0;
Result_5805 = (NI64)((NU64)(A_5803) - (NU64)(B_5804));
LOC2 = (0 <= (NI64)(Result_5805 ^ A_5803));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI64)(Result_5805 ^ (NI64)((NU64) ~(B_5804))));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5805;
}
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604) {
NI Result_5605;
NIM_BOOL LOC2;
Result_5605 = 0;
Result_5605 = (NI64)((NU64)(A_5603) + (NU64)(B_5604));
LOC2 = (0 <= (NI64)(Result_5605 ^ A_5603));
if (LOC2) goto LA3;
LOC2 = (0 <= (NI64)(Result_5605 ^ B_5604));
LA3: ;
if (!LOC2) goto LA4;
goto BeforeRet;
LA4: ;
raiseOverflow();
BeforeRet: ;
return Result_5605;
}
N_NIMCALL(NI, Hashtree_104029)(TY54525* N_104031) {
NI Result_104032;
NIM_BOOL LOC5;
NIM_BOOL LOC10;
NI LOC14;
NI I_104183;
NI HEX3Atmp_104197;
NI LOC15;
NI Res_104199;
NI LOC17;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "hashTree";
F.prev = framePtr;
F.filename = "rod/treetab.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_104032 = 0;
F.line = 21;F.filename = "treetab.nim";
Result_104032 = 0;
F.line = 22;F.filename = "treetab.nim";
if (!(N_104031 == NIM_NIL)) goto LA2;
F.line = 22;F.filename = "treetab.nim";
goto BeforeRet;
LA2: ;
F.line = 23;F.filename = "treetab.nim";
Result_104032 = (*N_104031).Kind;
F.line = 24;F.filename = "treetab.nim";
switch ((*N_104031).Kind) {
case ((NU8) 1):
case ((NU8) 18):
case ((NU8) 4):
break;
case ((NU8) 2):
F.line = 28;F.filename = "treetab.nim";
if (!(((TMP104202[(*N_104031).Kind/8] &(1<<((*N_104031).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104203));
Result_104032 = Conchash_43040(Result_104032, (*(*N_104031).KindU.S5.Ident).H);
break;
case ((NU8) 3):
F.line = 30;F.filename = "treetab.nim";
if (!(((TMP104204[(*N_104031).Kind/8] &(1<<((*N_104031).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104205));
Result_104032 = Conchash_43040(Result_104032, (*(*(*N_104031).KindU.S4.Sym).Name).H);
break;
case ((NU8) 5) ... ((NU8) 10):
F.line = 32;F.filename = "treetab.nim";
if (!(((TMP104206[(*N_104031).Kind/8] &(1<<((*N_104031).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104207));
LOC5 = ((IL64(-9223372036854775807) - IL64(1)) <= (*N_104031).KindU.S1.Intval);
if (!(LOC5)) goto LA6;
if (!(((TMP104206[(*N_104031).Kind/8] &(1<<((*N_104031).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104207));
LOC5 = ((*N_104031).KindU.S1.Intval <= IL64(9223372036854775807));
LA6: ;
if (!LOC5) goto LA7;
F.line = 33;F.filename = "treetab.nim";
if (!(((TMP104206[(*N_104031).Kind/8] &(1<<((*N_104031).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104207));
Result_104032 = Conchash_43040(Result_104032, ((NI) ((*N_104031).KindU.S1.Intval)));
LA7: ;
break;
case ((NU8) 11) ... ((NU8) 13):
F.line = 35;F.filename = "treetab.nim";
if (!(((TMP104208[(*N_104031).Kind/8] &(1<<((*N_104031).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104209));
LOC10 = (-1.00000e+06 <= ((NF) ((*N_104031).KindU.S2.Floatval)));
if (!(LOC10)) goto LA11;
if (!(((TMP104208[(*N_104031).Kind/8] &(1<<((*N_104031).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104209));
LOC10 = (((NF) ((*N_104031).KindU.S2.Floatval)) <= 1.00000e+06);
LA11: ;
if (!LOC10) goto LA12;
F.line = 36;F.filename = "treetab.nim";
if (!(((TMP104208[(*N_104031).Kind/8] &(1<<((*N_104031).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104209));
Result_104032 = Conchash_43040(Result_104032, float64ToInt32(((NF) ((*N_104031).KindU.S2.Floatval))));
LA12: ;
break;
case ((NU8) 14) ... ((NU8) 16):
F.line = 38;F.filename = "treetab.nim";
if (!(((TMP104210[(*N_104031).Kind/8] &(1<<((*N_104031).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104211));
LOC14 = Gethashstr_43031((*N_104031).KindU.S3.Strval);
Result_104032 = Conchash_43040(Result_104032, LOC14);
break;
default:
I_104183 = 0;
HEX3Atmp_104197 = 0;
F.line = 40;F.filename = "treetab.nim";
LOC15 = Sonslen_54803(N_104031);
HEX3Atmp_104197 = subInt(LOC15, 1);
Res_104199 = 0;
F.line = 1019;F.filename = "system.nim";
Res_104199 = 0;
F.line = 1020;F.filename = "system.nim";
while (1) {
if (!(Res_104199 <= HEX3Atmp_104197)) goto LA16;
F.line = 1019;F.filename = "system.nim";
I_104183 = Res_104199;
F.line = 41;F.filename = "treetab.nim";
if (((TMP104212[(*N_104031).Kind/8] &(1<<((*N_104031).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP104213));
if ((NU)(I_104183) >= (NU)((*N_104031).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC17 = Hashtree_104029((*N_104031).KindU.S6.Sons->data[I_104183]);
Result_104032 = Conchash_43040(Result_104032, LOC17);
F.line = 1022;F.filename = "system.nim";
Res_104199 = addInt(Res_104199, 1);
} LA16: ;
break;
}
BeforeRet: ;
framePtr = framePtr->prev;
return Result_104032;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_17247, NimStringDesc* B_17248) {
NIM_BOOL Result_17249;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
int LOC11;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "eqStrings";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/sysstr.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_17249 = 0;
F.line = 32;F.filename = "sysstr.nim";
if (!(A_17247 == B_17248)) goto LA2;
F.line = 32;F.filename = "sysstr.nim";
F.line = 32;F.filename = "sysstr.nim";
Result_17249 = NIM_TRUE;
goto BeforeRet;
LA2: ;
F.line = 33;F.filename = "sysstr.nim";
LOC5 = (A_17247 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_17248 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
F.line = 33;F.filename = "sysstr.nim";
F.line = 33;F.filename = "sysstr.nim";
Result_17249 = NIM_FALSE;
goto BeforeRet;
LA7: ;
F.line = 34;F.filename = "sysstr.nim";
F.line = 34;F.filename = "sysstr.nim";
LOC9 = ((*A_17247).Sup.len == (*B_17248).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_17247).data)), ((NCSTRING) ((*B_17248).data)), ((int) ((NI64)((*A_17247).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_17249 = LOC9;
goto BeforeRet;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_17249;
}
N_NIMCALL(NIM_BOOL, Treesequivalent_104214)(TY54525* A_104216, TY54525* B_104217) {
NIM_BOOL Result_104218;
NIM_BOOL LOC4;
NIM_BOOL LOC5;
NI LOC11;
NI LOC12;
NI I_104394;
NI HEX3Atmp_104420;
NI LOC15;
NI Res_104422;
NIM_BOOL LOC18;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "TreesEquivalent";
F.prev = framePtr;
F.filename = "rod/treetab.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_104218 = 0;
F.line = 44;F.filename = "treetab.nim";
Result_104218 = NIM_FALSE;
F.line = 45;F.filename = "treetab.nim";
if (!(A_104216 == B_104217)) goto LA2;
F.line = 46;F.filename = "treetab.nim";
Result_104218 = NIM_TRUE;
goto LA1;
LA2: ;
LOC5 = !((A_104216 == NIM_NIL));
if (!(LOC5)) goto LA6;
LOC5 = !((B_104217 == NIM_NIL));
LA6: ;
LOC4 = LOC5;
if (!(LOC4)) goto LA7;
LOC4 = ((*A_104216).Kind == (*B_104217).Kind);
LA7: ;
if (!LOC4) goto LA8;
F.line = 48;F.filename = "treetab.nim";
switch ((*A_104216).Kind) {
case ((NU8) 1):
case ((NU8) 18):
case ((NU8) 4):
F.line = 49;F.filename = "treetab.nim";
Result_104218 = NIM_TRUE;
break;
case ((NU8) 3):
F.line = 50;F.filename = "treetab.nim";
if (!(((TMP104204[(*A_104216).Kind/8] &(1<<((*A_104216).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104205));
if (!(((TMP104204[(*B_104217).Kind/8] &(1<<((*B_104217).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104205));
Result_104218 = ((*(*A_104216).KindU.S4.Sym).Sup.Id == (*(*B_104217).KindU.S4.Sym).Sup.Id);
break;
case ((NU8) 2):
F.line = 51;F.filename = "treetab.nim";
if (!(((TMP104202[(*A_104216).Kind/8] &(1<<((*A_104216).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104203));
if (!(((TMP104202[(*B_104217).Kind/8] &(1<<((*B_104217).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104203));
Result_104218 = ((*(*A_104216).KindU.S5.Ident).Sup.Id == (*(*B_104217).KindU.S5.Ident).Sup.Id);
break;
case ((NU8) 5) ... ((NU8) 10):
F.line = 52;F.filename = "treetab.nim";
if (!(((TMP104206[(*A_104216).Kind/8] &(1<<((*A_104216).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104207));
if (!(((TMP104206[(*B_104217).Kind/8] &(1<<((*B_104217).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104207));
Result_104218 = ((*A_104216).KindU.S1.Intval == (*B_104217).KindU.S1.Intval);
break;
case ((NU8) 11) ... ((NU8) 13):
F.line = 53;F.filename = "treetab.nim";
if (!(((TMP104208[(*A_104216).Kind/8] &(1<<((*A_104216).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104209));
if (!(((TMP104208[(*B_104217).Kind/8] &(1<<((*B_104217).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104209));
Result_104218 = (((NF) ((*A_104216).KindU.S2.Floatval)) == ((NF) ((*B_104217).KindU.S2.Floatval)));
break;
case ((NU8) 14) ... ((NU8) 16):
F.line = 54;F.filename = "treetab.nim";
if (!(((TMP104210[(*A_104216).Kind/8] &(1<<((*A_104216).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104211));
if (!(((TMP104210[(*B_104217).Kind/8] &(1<<((*B_104217).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP104211));
Result_104218 = eqStrings((*A_104216).KindU.S3.Strval, (*B_104217).KindU.S3.Strval);
break;
default:
F.line = 56;F.filename = "treetab.nim";
LOC11 = Sonslen_54803(A_104216);
LOC12 = Sonslen_54803(B_104217);
if (!(LOC11 == LOC12)) goto LA13;
I_104394 = 0;
HEX3Atmp_104420 = 0;
F.line = 57;F.filename = "treetab.nim";
LOC15 = Sonslen_54803(A_104216);
HEX3Atmp_104420 = subInt(LOC15, 1);
Res_104422 = 0;
F.line = 1019;F.filename = "system.nim";
Res_104422 = 0;
F.line = 1020;F.filename = "system.nim";
while (1) {
if (!(Res_104422 <= HEX3Atmp_104420)) goto LA16;
F.line = 1019;F.filename = "system.nim";
I_104394 = Res_104422;
F.line = 58;F.filename = "treetab.nim";
if (((TMP104212[(*A_104216).Kind/8] &(1<<((*A_104216).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP104213));
if ((NU)(I_104394) >= (NU)((*A_104216).KindU.S6.Sons->Sup.len)) raiseIndexError();
if (((TMP104212[(*B_104217).Kind/8] &(1<<((*B_104217).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP104213));
if ((NU)(I_104394) >= (NU)((*B_104217).KindU.S6.Sons->Sup.len)) raiseIndexError();
LOC18 = Treesequivalent_104214((*A_104216).KindU.S6.Sons->data[I_104394], (*B_104217).KindU.S6.Sons->data[I_104394]);
if (!!(LOC18)) goto LA19;
F.line = 58;F.filename = "treetab.nim";
goto BeforeRet;
LA19: ;
F.line = 1022;F.filename = "system.nim";
Res_104422 = addInt(Res_104422, 1);
} LA16: ;
F.line = 59;F.filename = "treetab.nim";
Result_104218 = NIM_TRUE;
LA13: ;
break;
}
F.line = 60;F.filename = "treetab.nim";
if (!Result_104218) goto LA22;
F.line = 60;F.filename = "treetab.nim";
Result_104218 = Sametypeornil_95052((*A_104216).Typ, (*B_104217).Typ);
LA22: ;
goto LA1;
LA8: ;
LA1: ;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_104218;
}
N_NIMCALL(NI, Nodetablerawget_104425)(TY54575 T_104427, NI K_104428, TY54525* Key_104429) {
NI Result_104430;
NI H_104431;
NIM_BOOL LOC3;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "NodeTableRawGet";
F.prev = framePtr;
F.filename = "rod/treetab.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_104430 = 0;
H_104431 = 0;
F.line = 64;F.filename = "treetab.nim";
H_104431 = (NI64)(K_104428 & (T_104427.Data->Sup.len-1));
F.line = 65;F.filename = "treetab.nim";
while (1) {
if ((NU)(H_104431) >= (NU)(T_104427.Data->Sup.len)) raiseIndexError();
if (!!((T_104427.Data->data[H_104431].Key == NIM_NIL))) goto LA1;
F.line = 66;F.filename = "treetab.nim";
if ((NU)(H_104431) >= (NU)(T_104427.Data->Sup.len)) raiseIndexError();
LOC3 = (T_104427.Data->data[H_104431].H == K_104428);
if (!(LOC3)) goto LA4;
if ((NU)(H_104431) >= (NU)(T_104427.Data->Sup.len)) raiseIndexError();
LOC3 = Treesequivalent_104214(T_104427.Data->data[H_104431].Key, Key_104429);
LA4: ;
if (!LOC3) goto LA5;
F.line = 67;F.filename = "treetab.nim";
F.line = 67;F.filename = "treetab.nim";
Result_104430 = H_104431;
goto BeforeRet;
LA5: ;
F.line = 68;F.filename = "treetab.nim";
H_104431 = Nexttry_58213(H_104431, (T_104427.Data->Sup.len-1));
} LA1: ;
F.line = 69;F.filename = "treetab.nim";
Result_104430 = -1;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_104430;
}
N_NIMCALL(NI, Nodetableget_104013)(TY54575 T_104015, TY54525* Key_104016) {
NI Result_104450;
NI Index_104451;
NI LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "NodeTableGet";
F.prev = framePtr;
F.filename = "rod/treetab.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_104450 = 0;
Index_104451 = 0;
F.line = 73;F.filename = "treetab.nim";
LOC1 = Hashtree_104029(Key_104016);
Index_104451 = Nodetablerawget_104425(T_104015, LOC1, Key_104016);
F.line = 74;F.filename = "treetab.nim";
if (!(0 <= Index_104451)) goto LA3;
F.line = 74;F.filename = "treetab.nim";
if ((NU)(Index_104451) >= (NU)(T_104015.Data->Sup.len)) raiseIndexError();
Result_104450 = T_104015.Data->data[Index_104451].Val;
goto LA2;
LA3: ;
F.line = 75;F.filename = "treetab.nim";
Result_104450 = (IL64(-9223372036854775807) - IL64(1));
LA2: ;
framePtr = framePtr->prev;
return Result_104450;
}
static N_INLINE(TY10602*, Usrtocell_11036)(void* Usr_11038) {
TY10602* Result_11039;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "usrToCell";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_11039 = 0;
F.line = 100;F.filename = "gc.nim";
Result_11039 = ((TY10602*) ((NI64)((NU64)(((NI) (Usr_11038))) - (NU64)(((NI) (((NI)sizeof(TY10602))))))));
framePtr = framePtr->prev;
return Result_11039;
}
static N_INLINE(NI, Atomicinc_2801)(NI* Memloc_2804, NI X_2805) {
NI Result_7208;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "atomicInc";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/systhread.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_7208 = 0;
F.line = 29;F.filename = "systhread.nim";
Result_7208 = __sync_add_and_fetch(Memloc_2804, X_2805);
framePtr = framePtr->prev;
return Result_7208;
}
static N_INLINE(NI, Atomicdec_2806)(NI* Memloc_2809, NI X_2810) {
NI Result_7406;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "atomicDec";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/systhread.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_7406 = 0;
F.line = 37;F.filename = "systhread.nim";
Result_7406 = __sync_sub_and_fetch(Memloc_2809, X_2810);
framePtr = framePtr->prev;
return Result_7406;
}
static N_INLINE(void, Rtladdzct_11658)(TY10602* C_11660) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "rtlAddZCT";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 211;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA2;
F.line = 211;F.filename = "gc.nim";
pthread_mutex_lock(&Gch_11010.Zctlock);
LA2: ;
F.line = 212;F.filename = "gc.nim";
Addzct_11025(&Gch_11010.Zct, C_11660);
F.line = 213;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA5;
F.line = 213;F.filename = "gc.nim";
pthread_mutex_unlock(&Gch_11010.Zctlock);
LA5: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11818, void* Src_11819) {
TY10602* C_11820;
NI LOC4;
TY10602* C_11822;
NI LOC9;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "asgnRefNoCycle";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 244;F.filename = "gc.nim";
if (!!((Src_11819 == NIM_NIL))) goto LA2;
C_11820 = 0;
F.line = 245;F.filename = "gc.nim";
C_11820 = Usrtocell_11036(Src_11819);
F.line = 246;F.filename = "gc.nim";
LOC4 = Atomicinc_2801(&(*C_11820).Refcount, 8);
LA2: ;
F.line = 247;F.filename = "gc.nim";
if (!!(((*Dest_11818) == NIM_NIL))) goto LA6;
C_11822 = 0;
F.line = 248;F.filename = "gc.nim";
C_11822 = Usrtocell_11036((*Dest_11818));
F.line = 249;F.filename = "gc.nim";
LOC9 = Atomicdec_2806(&(*C_11822).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
F.line = 250;F.filename = "gc.nim";
Rtladdzct_11658(C_11822);
LA10: ;
LA6: ;
F.line = 251;F.filename = "gc.nim";
(*Dest_11818) = Src_11819;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Nodetablerawinsert_104454)(TY54573** Data_104457, NI K_104458, TY54525* Key_104459, NI Val_104460) {
NI H_104461;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "NodeTableRawInsert";
F.prev = framePtr;
F.filename = "rod/treetab.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
H_104461 = 0;
F.line = 79;F.filename = "treetab.nim";
H_104461 = (NI64)(K_104458 & ((*Data_104457)->Sup.len-1));
F.line = 80;F.filename = "treetab.nim";
while (1) {
if ((NU)(H_104461) >= (NU)((*Data_104457)->Sup.len)) raiseIndexError();
if (!!(((*Data_104457)->data[H_104461].Key == NIM_NIL))) goto LA1;
F.line = 80;F.filename = "treetab.nim";
H_104461 = Nexttry_58213(H_104461, ((*Data_104457)->Sup.len-1));
} LA1: ;
F.line = 81;F.filename = "treetab.nim";
if ((NU)(H_104461) >= (NU)((*Data_104457)->Sup.len)) raiseIndexError();
internalAssert("rod/treetab.nim", 81, ((*Data_104457)->data[H_104461].Key == NIM_NIL));
F.line = 82;F.filename = "treetab.nim";
if ((NU)(H_104461) >= (NU)((*Data_104457)->Sup.len)) raiseIndexError();
(*Data_104457)->data[H_104461].H = K_104458;
F.line = 83;F.filename = "treetab.nim";
if ((NU)(H_104461) >= (NU)((*Data_104457)->Sup.len)) raiseIndexError();
asgnRefNoCycle((void**) &(*Data_104457)->data[H_104461].Key, Key_104459);
F.line = 84;F.filename = "treetab.nim";
if ((NU)(H_104461) >= (NU)((*Data_104457)->Sup.len)) raiseIndexError();
(*Data_104457)->data[H_104461].Val = Val_104460;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Nodetableput_104017)(TY54575* T_104020, TY54525* Key_104021, NI Val_104022) {
NI Index_104491;
TY54573* N_104492;
NI K_104493;
NIM_BOOL LOC5;
NI I_104546;
NI HEX3Atmp_104582;
NI Res_104584;
TY54573* LOC12;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "NodeTablePut";
F.prev = framePtr;
F.filename = "rod/treetab.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Index_104491 = 0;
N_104492 = 0;
K_104493 = 0;
F.line = 91;F.filename = "treetab.nim";
K_104493 = Hashtree_104029(Key_104021);
F.line = 92;F.filename = "treetab.nim";
Index_104491 = Nodetablerawget_104425((*T_104020), K_104493, Key_104021);
F.line = 93;F.filename = "treetab.nim";
if (!(0 <= Index_104491)) goto LA2;
F.line = 94;F.filename = "treetab.nim";
if ((NU)(Index_104491) >= (NU)((*T_104020).Data->Sup.len)) raiseIndexError();
internalAssert("rod/treetab.nim", 94, !(((*T_104020).Data->data[Index_104491].Key == NIM_NIL)));
F.line = 95;F.filename = "treetab.nim";
if ((NU)(Index_104491) >= (NU)((*T_104020).Data->Sup.len)) raiseIndexError();
(*T_104020).Data->data[Index_104491].Val = Val_104022;
goto LA1;
LA2: ;
F.line = 97;F.filename = "treetab.nim";
LOC5 = Mustrehash_58209((*T_104020).Data->Sup.len, (*T_104020).Counter);
if (!LOC5) goto LA6;
F.line = 98;F.filename = "treetab.nim";
N_104492 = (TY54573*) newSeq(NTI54573, mulInt((*T_104020).Data->Sup.len, 2));
I_104546 = 0;
HEX3Atmp_104582 = 0;
F.line = 99;F.filename = "treetab.nim";
HEX3Atmp_104582 = ((*T_104020).Data->Sup.len-1);
Res_104584 = 0;
F.line = 1019;F.filename = "system.nim";
Res_104584 = 0;
F.line = 1020;F.filename = "system.nim";
while (1) {
if (!(Res_104584 <= HEX3Atmp_104582)) goto LA8;
F.line = 1019;F.filename = "system.nim";
I_104546 = Res_104584;
F.line = 100;F.filename = "treetab.nim";
if ((NU)(I_104546) >= (NU)((*T_104020).Data->Sup.len)) raiseIndexError();
if (!!(((*T_104020).Data->data[I_104546].Key == NIM_NIL))) goto LA10;
F.line = 101;F.filename = "treetab.nim";
if ((NU)(I_104546) >= (NU)((*T_104020).Data->Sup.len)) raiseIndexError();
if ((NU)(I_104546) >= (NU)((*T_104020).Data->Sup.len)) raiseIndexError();
if ((NU)(I_104546) >= (NU)((*T_104020).Data->Sup.len)) raiseIndexError();
Nodetablerawinsert_104454(&N_104492, (*T_104020).Data->data[I_104546].H, (*T_104020).Data->data[I_104546].Key, (*T_104020).Data->data[I_104546].Val);
LA10: ;
F.line = 1022;F.filename = "system.nim";
Res_104584 = addInt(Res_104584, 1);
} LA8: ;
F.line = 102;F.filename = "treetab.nim";
LOC12 = 0;
LOC12 = (*T_104020).Data;
unsureAsgnRef((void**) &(*T_104020).Data, N_104492);
N_104492 = LOC12;
LA6: ;
F.line = 103;F.filename = "treetab.nim";
Nodetablerawinsert_104454(&(*T_104020).Data, K_104493, Key_104021, Val_104022);
F.line = 104;F.filename = "treetab.nim";
(*T_104020).Counter = addInt((*T_104020).Counter, 1);
LA1: ;
framePtr = framePtr->prev;
}
N_NIMCALL(NI, Nodetabletestorset_104023)(TY54575* T_104026, TY54525* Key_104027, NI Val_104028) {
NI Result_104593;
NI Index_104594;
TY54573* N_104595;
NI K_104596;
NIM_BOOL LOC5;
NI I_104649;
NI HEX3Atmp_104685;
NI Res_104687;
TY54573* LOC12;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "NodeTableTestOrSet";
F.prev = framePtr;
F.filename = "rod/treetab.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_104593 = 0;
Index_104594 = 0;
N_104595 = 0;
K_104596 = 0;
F.line = 111;F.filename = "treetab.nim";
K_104596 = Hashtree_104029(Key_104027);
F.line = 112;F.filename = "treetab.nim";
Index_104594 = Nodetablerawget_104425((*T_104026), K_104596, Key_104027);
F.line = 113;F.filename = "treetab.nim";
if (!(0 <= Index_104594)) goto LA2;
F.line = 114;F.filename = "treetab.nim";
if ((NU)(Index_104594) >= (NU)((*T_104026).Data->Sup.len)) raiseIndexError();
internalAssert("rod/treetab.nim", 114, !(((*T_104026).Data->data[Index_104594].Key == NIM_NIL)));
F.line = 115;F.filename = "treetab.nim";
if ((NU)(Index_104594) >= (NU)((*T_104026).Data->Sup.len)) raiseIndexError();
Result_104593 = (*T_104026).Data->data[Index_104594].Val;
goto LA1;
LA2: ;
F.line = 117;F.filename = "treetab.nim";
LOC5 = Mustrehash_58209((*T_104026).Data->Sup.len, (*T_104026).Counter);
if (!LOC5) goto LA6;
F.line = 118;F.filename = "treetab.nim";
N_104595 = (TY54573*) newSeq(NTI54573, mulInt((*T_104026).Data->Sup.len, 2));
I_104649 = 0;
HEX3Atmp_104685 = 0;
F.line = 119;F.filename = "treetab.nim";
HEX3Atmp_104685 = ((*T_104026).Data->Sup.len-1);
Res_104687 = 0;
F.line = 1019;F.filename = "system.nim";
Res_104687 = 0;
F.line = 1020;F.filename = "system.nim";
while (1) {
if (!(Res_104687 <= HEX3Atmp_104685)) goto LA8;
F.line = 1019;F.filename = "system.nim";
I_104649 = Res_104687;
F.line = 120;F.filename = "treetab.nim";
if ((NU)(I_104649) >= (NU)((*T_104026).Data->Sup.len)) raiseIndexError();
if (!!(((*T_104026).Data->data[I_104649].Key == NIM_NIL))) goto LA10;
F.line = 121;F.filename = "treetab.nim";
if ((NU)(I_104649) >= (NU)((*T_104026).Data->Sup.len)) raiseIndexError();
if ((NU)(I_104649) >= (NU)((*T_104026).Data->Sup.len)) raiseIndexError();
if ((NU)(I_104649) >= (NU)((*T_104026).Data->Sup.len)) raiseIndexError();
Nodetablerawinsert_104454(&N_104595, (*T_104026).Data->data[I_104649].H, (*T_104026).Data->data[I_104649].Key, (*T_104026).Data->data[I_104649].Val);
LA10: ;
F.line = 1022;F.filename = "system.nim";
Res_104687 = addInt(Res_104687, 1);
} LA8: ;
F.line = 122;F.filename = "treetab.nim";
LOC12 = 0;
LOC12 = (*T_104026).Data;
unsureAsgnRef((void**) &(*T_104026).Data, N_104595);
N_104595 = LOC12;
LA6: ;
F.line = 123;F.filename = "treetab.nim";
Nodetablerawinsert_104454(&(*T_104026).Data, K_104596, Key_104027, Val_104028);
F.line = 124;F.filename = "treetab.nim";
Result_104593 = Val_104028;
F.line = 125;F.filename = "treetab.nim";
(*T_104026).Counter = addInt((*T_104026).Counter, 1);
LA1: ;
framePtr = framePtr->prev;
return Result_104593;
}
N_NOINLINE(void, treetabInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "treetab";
F.prev = framePtr;
F.filename = "rod/treetab.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}
