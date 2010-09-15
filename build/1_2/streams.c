/* Generated by Nimrod Compiler v0.8.9 */
/*   (c) 2010 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY420 TY420;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY418 TY418;
typedef struct TY416 TY416;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TY10402 TY10402;
typedef struct TY7804 TY7804;
typedef struct TY10790 TY10790;
typedef struct TY10418 TY10418;
typedef struct TY10414 TY10414;
typedef struct TY10410 TY10410;
typedef struct TY10788 TY10788;
typedef struct TY60027 TY60027;
typedef struct TY60226 TY60226;
typedef struct TY60323 TY60323;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY239[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY239 data;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TNimObject {
TNimType* m_type;
};
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
};
struct TY416 {
  E_Base Sup;
};
struct TY418 {
  TY416 Sup;
};
struct TY420 {
  TY418 Sup;
};
struct TY10402 {
NI Refcount;
TNimType* Typ;
};
typedef N_STDCALL_PTR(void, TY7816) (TY7804* L_7818);
struct TY10418 {
NI Len;
NI Cap;
TY10402** D;
};
struct TY10414 {
NI Counter;
NI Max;
TY10410* Head;
TY10410** Data;
};
struct TY7804 {
void* Debuginfo;
NI32 Lockcount;
NI32 Recursioncount;
NI Owningthread;
NI Locksemaphore;
NI32 Reserved;
};
struct TY10788 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10790 {
TY10418 Zct;
TY10418 Decstack;
TY10414 Cycleroots;
TY10418 Tempstack;
TY7804 Cyclerootslock;
TY7804 Zctlock;
TY10788 Stat;
};
typedef N_STDCALL_PTR(void, TY7820) (TY7804* L_7822);
typedef N_NIMCALL_PTR(void, TY60028) (TY60027* S_60029);
typedef N_NIMCALL_PTR(NIM_BOOL, TY60032) (TY60027* S_60033);
typedef N_NIMCALL_PTR(void, TY60036) (TY60027* S_60037, NI Pos_60038);
typedef N_NIMCALL_PTR(NI, TY60041) (TY60027* S_60042);
typedef N_NIMCALL_PTR(NI, TY60045) (TY60027* S_60046, void* Buffer_60047, NI Buflen_60048);
typedef N_NIMCALL_PTR(void, TY60051) (TY60027* S_60052, void* Buffer_60053, NI Buflen_60054);
struct TY60027 {
  TNimObject Sup;
TY60028 Close;
TY60032 Atend;
TY60036 Setposition;
TY60041 Getposition;
TY60045 Readdata;
TY60051 Writedata;
};
struct TY60226 {
  TY60027 Sup;
NimStringDesc* Data;
NI Pos;
};
struct TY60323 {
  TY60027 Sup;
FILE* F;
};
typedef NI TY8414[8];
struct TY10410 {
TY10410* Next;
NI Key;
TY8414 Bits;
};
N_NIMCALL(TY420*, Neweio_60004)(NimStringDesc* Msg_60006);
N_NIMCALL(void*, newObj)(TNimType* Typ_12107, NI Size_12108);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11618, void* Src_11619);
static N_INLINE(TY10402*, Usrtocell_10836)(void* Usr_10838);
static N_INLINE(NI, Atomicinc_2801)(NI* Memloc_2804, NI X_2805);
static N_INLINE(NI, Atomicdec_2806)(NI* Memloc_2809, NI X_2810);
static N_INLINE(void, Rtladdzct_11458)(TY10402* C_11460);
N_NOINLINE(void, Addzct_10825)(TY10418* S_10828, TY10402* C_10829);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_17108);
N_NIMCALL(void, Write_60064)(TY60027* S_60066, NimStringDesc* X_60067);
N_NIMCALL(NIM_CHAR, Readchar_60077)(TY60027* S_60079);
N_NIMCALL(NIM_BOOL, Readbool_60082)(TY60027* S_60084);
N_NIMCALL(NI8, Readint8_60099)(TY60027* S_60101);
N_NIMCALL(NI16, Readint16_60116)(TY60027* S_60118);
N_NIMCALL(NI32, Readint32_60133)(TY60027* S_60135);
N_NIMCALL(NI64, Readint64_60150)(TY60027* S_60152);
N_NIMCALL(NF32, Readfloat32_60167)(TY60027* S_60169);
N_NIMCALL(NF64, Readfloat64_60184)(TY60027* S_60186);
N_NIMCALL(NimStringDesc*, Readstr_60201)(TY60027* S_60203, NI Length_60204);
N_NIMCALL(NimStringDesc*, mnewString)(NI Len_1349);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_17225, NI Newlen_17226);
N_NIMCALL(NimStringDesc*, Readline_60210)(TY60027* S_60212);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1603, NIM_CHAR C_1604);
N_NIMCALL(NIM_BOOL, Ssatend_60229)(TY60226* S_60231);
N_NIMCALL(void, Sssetposition_60237)(TY60226* S_60239, NI Pos_60240);
static N_INLINE(NI, subInt)(NI A_5803, NI B_5804);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI, Ssgetposition_60245)(TY60226* S_60247);
N_NIMCALL(NI, Ssreaddata_60249)(TY60226* S_60251, void* Buffer_60252, NI Buflen_60253);
static N_INLINE(NI, addInt)(NI A_5603, NI B_5604);
N_NIMCALL(void, Sswritedata_60274)(TY60226* S_60276, void* Buffer_60277, NI Buflen_60278);
N_NIMCALL(void, Ssclose_60296)(TY60226* S_60298);
N_NIMCALL(TY60226*, Newstringstream_60299)(NimStringDesc* S_60301);
N_NIMCALL(void, Fsclose_60325)(TY60323* S_60327);
N_NIMCALL(NIM_BOOL, Fsatend_60328)(TY60323* S_60330);
N_NIMCALL(NIM_BOOL, Endoffile_3438)(FILE* F_3440);
N_NIMCALL(void, Fssetposition_60332)(TY60323* S_60334, NI Pos_60335);
N_NIMCALL(void, Setfilepos_3538)(FILE* F_3540, NI64 Pos_3541);
N_NIMCALL(NI, Fsgetposition_60336)(TY60323* S_60338);
N_NIMCALL(NI64, Getfilepos_3542)(FILE* F_3544);
N_NIMCALL(NI, Fsreaddata_60340)(TY60323* S_60342, void* Buffer_60343, NI Buflen_60344);
N_NIMCALL(NI, Readbuffer_3514)(FILE* F_3516, void* Buffer_3517, NI Len_3518);
N_NIMCALL(void, Fswritedata_60346)(TY60323* S_60348, void* Buffer_60349, NI Buflen_60350);
N_NIMCALL(NI, Writebuffer_3533)(FILE* F_3535, void* Buffer_3536, NI Len_3537);
N_NIMCALL(void, raiseException)(E_Base* E_5004, NCSTRING Ename_5005);
N_NIMCALL(TY60323*, Newfilestream_60354)(FILE* F_60356);
N_NIMCALL(TY60323*, Newfilestream_60373)(NimStringDesc* Filename_60375, NU8 Mode_60376);
N_NIMCALL(NIM_BOOL, Open_3417)(FILE** F_3420, NimStringDesc* Filename_3421, NU8 Mode_3422, NI Bufsize_3423);
N_NIMCALL(void, Read_60089)(TY60027* S_60092, NIM_BOOL* Result_60094);
N_NIMCALL(void, Read_60106)(TY60027* S_60109, NI8* Result_60111);
N_NIMCALL(void, Read_60123)(TY60027* S_60126, NI16* Result_60128);
N_NIMCALL(void, Read_60140)(TY60027* S_60143, NI32* Result_60145);
N_NIMCALL(void, Read_60157)(TY60027* S_60160, NI64* Result_60162);
N_NIMCALL(void, Read_60174)(TY60027* S_60177, NF32* Result_60179);
N_NIMCALL(void, Read_60191)(TY60027* S_60194, NF64* Result_60196);
STRING_LITERAL(TMP60222, "", 0);
STRING_LITERAL(TMP60353, "cannot write to stream", 22);
STRING_LITERAL(TMP60401, "cannot read from stream", 23);
extern TNimType* NTI4062; /* ref EIO */
extern TNimType* NTI420; /* EIO */
extern TY7816 Dl_7815;
extern TY10790 Gch_10810;
extern TY7820 Dl_7819;
extern TNimType* NTI60224; /* PStringStream */
extern TNimType* NTI60226; /* TStringStream */
extern TNimType* NTI60321; /* PFileStream */
extern TNimType* NTI60323; /* TFileStream */
static N_INLINE(TY10402*, Usrtocell_10836)(void* Usr_10838) {
TY10402* Result_10839;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "usrToCell";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/system/gc.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_10839 = 0;
F.line = 100;F.filename = "gc.nim";
Result_10839 = ((TY10402*) ((NI64)((NU64)(((NI) (Usr_10838))) - (NU64)(((NI) (((NI)sizeof(TY10402))))))));
framePtr = framePtr->prev;
return Result_10839;
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
static N_INLINE(void, Rtladdzct_11458)(TY10402* C_11460) {
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
Dl_7815(&Gch_10810.Zctlock);
LA2: ;
F.line = 212;F.filename = "gc.nim";
Addzct_10825(&Gch_10810.Zct, C_11460);
F.line = 213;F.filename = "gc.nim";
if (!NIM_TRUE) goto LA5;
F.line = 213;F.filename = "gc.nim";
Dl_7819(&Gch_10810.Zctlock);
LA5: ;
framePtr = framePtr->prev;
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_11618, void* Src_11619) {
TY10402* C_11620;
NI LOC4;
TY10402* C_11622;
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
if (!!((Src_11619 == NIM_NIL))) goto LA2;
C_11620 = 0;
F.line = 245;F.filename = "gc.nim";
C_11620 = Usrtocell_10836(Src_11619);
F.line = 246;F.filename = "gc.nim";
LOC4 = Atomicinc_2801(&(*C_11620).Refcount, 8);
LA2: ;
F.line = 247;F.filename = "gc.nim";
if (!!(((*Dest_11618) == NIM_NIL))) goto LA6;
C_11622 = 0;
F.line = 248;F.filename = "gc.nim";
C_11622 = Usrtocell_10836((*Dest_11618));
F.line = 249;F.filename = "gc.nim";
LOC9 = Atomicdec_2806(&(*C_11622).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
F.line = 250;F.filename = "gc.nim";
Rtladdzct_11458(C_11622);
LA10: ;
LA6: ;
F.line = 251;F.filename = "gc.nim";
(*Dest_11618) = Src_11619;
framePtr = framePtr->prev;
}
N_NIMCALL(TY420*, Neweio_60004)(NimStringDesc* Msg_60006) {
TY420* Result_60008;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "newEIO";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60008 = 0;
F.line = 16;F.filename = "streams.nim";
Result_60008 = (TY420*) newObj(NTI4062, sizeof(TY420));
(*Result_60008).Sup.Sup.Sup.Sup.m_type = NTI420;
F.line = 17;F.filename = "streams.nim";
asgnRefNoCycle((void**) &(*Result_60008).Sup.Sup.Sup.message, copyString(Msg_60006));
framePtr = framePtr->prev;
return Result_60008;
}
N_NIMCALL(void, Write_60064)(TY60027* S_60066, NimStringDesc* X_60067) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "write";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 42;F.filename = "streams.nim";
(*S_60066).Writedata(S_60066, ((void*) (X_60067->data)), X_60067->Sup.len);
framePtr = framePtr->prev;
}
N_NIMCALL(NIM_CHAR, Readchar_60077)(TY60027* S_60079) {
NIM_CHAR Result_60080;
NI LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "readChar";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60080 = 0;
F.line = 52;F.filename = "streams.nim";
LOC1 = (*S_60079).Readdata(S_60079, ((void*) (&Result_60080)), 1);
framePtr = framePtr->prev;
return Result_60080;
}
N_NIMCALL(NIM_BOOL, Readbool_60082)(TY60027* S_60084) {
NIM_BOOL Result_60085;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "readBool";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60085 = 0;
F.line = 56;F.filename = "streams.nim";
Read_60089(S_60084, &Result_60085);
framePtr = framePtr->prev;
return Result_60085;
}
N_NIMCALL(NI8, Readint8_60099)(TY60027* S_60101) {
NI8 Result_60102;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "readInt8";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60102 = 0;
F.line = 60;F.filename = "streams.nim";
Read_60106(S_60101, &Result_60102);
framePtr = framePtr->prev;
return Result_60102;
}
N_NIMCALL(NI16, Readint16_60116)(TY60027* S_60118) {
NI16 Result_60119;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "readInt16";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60119 = 0;
F.line = 64;F.filename = "streams.nim";
Read_60123(S_60118, &Result_60119);
framePtr = framePtr->prev;
return Result_60119;
}
N_NIMCALL(NI32, Readint32_60133)(TY60027* S_60135) {
NI32 Result_60136;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "readInt32";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60136 = 0;
F.line = 68;F.filename = "streams.nim";
Read_60140(S_60135, &Result_60136);
framePtr = framePtr->prev;
return Result_60136;
}
N_NIMCALL(NI64, Readint64_60150)(TY60027* S_60152) {
NI64 Result_60153;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "readInt64";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60153 = 0;
F.line = 72;F.filename = "streams.nim";
Read_60157(S_60152, &Result_60153);
framePtr = framePtr->prev;
return Result_60153;
}
N_NIMCALL(NF32, Readfloat32_60167)(TY60027* S_60169) {
NF32 Result_60170;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "readFloat32";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60170 = 0;
F.line = 76;F.filename = "streams.nim";
Read_60174(S_60169, &Result_60170);
framePtr = framePtr->prev;
return Result_60170;
}
N_NIMCALL(NF64, Readfloat64_60184)(TY60027* S_60186) {
NF64 Result_60187;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "readFloat64";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60187 = 0;
F.line = 80;F.filename = "streams.nim";
Read_60191(S_60186, &Result_60187);
framePtr = framePtr->prev;
return Result_60187;
}
N_NIMCALL(NimStringDesc*, Readstr_60201)(TY60027* S_60203, NI Length_60204) {
NimStringDesc* Result_60205;
NI L_60207;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "readStr";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60205 = 0;
F.line = 85;F.filename = "streams.nim";
Result_60205 = mnewString(Length_60204);
L_60207 = 0;
F.line = 86;F.filename = "streams.nim";
if ((NU)(0) > (NU)(Result_60205->Sup.len)) raiseIndexError();
L_60207 = (*S_60203).Readdata(S_60203, ((void*) (&Result_60205->data[0])), Length_60204);
F.line = 87;F.filename = "streams.nim";
if (!!((L_60207 == Length_60204))) goto LA2;
F.line = 87;F.filename = "streams.nim";
Result_60205 = setLengthStr(Result_60205, L_60207);
LA2: ;
framePtr = framePtr->prev;
return Result_60205;
}
N_NIMCALL(NimStringDesc*, Readline_60210)(TY60027* S_60212) {
NimStringDesc* Result_60213;
NIM_BOOL LOC2;
NIM_CHAR C_60214;
NIM_BOOL LOC6;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "readLine";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60213 = 0;
F.line = 92;F.filename = "streams.nim";
Result_60213 = copyString(((NimStringDesc*) &TMP60222));
F.line = 93;F.filename = "streams.nim";
while (1) {
LOC2 = (*S_60212).Atend(S_60212);
if (!!(LOC2)) goto LA1;
C_60214 = 0;
F.line = 94;F.filename = "streams.nim";
C_60214 = Readchar_60077(S_60212);
F.line = 95;F.filename = "streams.nim";
if (!((NU8)(C_60214) == (NU8)(13))) goto LA4;
F.line = 96;F.filename = "streams.nim";
C_60214 = Readchar_60077(S_60212);
F.line = 97;F.filename = "streams.nim";
goto LA1;
goto LA3;
LA4: ;
LOC6 = ((NU8)(C_60214) == (NU8)(10));
if (LOC6) goto LA7;
LOC6 = ((NU8)(C_60214) == (NU8)(0));
LA7: ;
if (!LOC6) goto LA8;
F.line = 98;F.filename = "streams.nim";
goto LA1;
goto LA3;
LA8: ;
LA3: ;
F.line = 99;F.filename = "streams.nim";
Result_60213 = addChar(Result_60213, C_60214);
} LA1: ;
framePtr = framePtr->prev;
return Result_60213;
}
N_NIMCALL(NIM_BOOL, Ssatend_60229)(TY60226* S_60231) {
NIM_BOOL Result_60232;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "ssAtEnd";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60232 = 0;
F.line = 108;F.filename = "streams.nim";
F.line = 587;F.filename = "system.nim";
Result_60232 = ((*S_60231).Data->Sup.len <= (*S_60231).Pos);
goto BeforeRet;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_60232;
}
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
N_NIMCALL(void, Sssetposition_60237)(TY60226* S_60239, NI Pos_60240) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "ssSetPosition";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 111;F.filename = "streams.nim";
(*S_60239).Pos = ((Pos_60240 <= subInt((*S_60239).Data->Sup.len, 1)) ? Pos_60240 : subInt((*S_60239).Data->Sup.len, 1));
framePtr = framePtr->prev;
}
N_NIMCALL(NI, Ssgetposition_60245)(TY60226* S_60247) {
NI Result_60248;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "ssGetPosition";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60248 = 0;
F.line = 114;F.filename = "streams.nim";
F.line = 114;F.filename = "streams.nim";
Result_60248 = (*S_60247).Pos;
goto BeforeRet;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_60248;
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
N_NIMCALL(NI, Ssreaddata_60249)(TY60226* S_60251, void* Buffer_60252, NI Buflen_60253) {
NI Result_60254;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "ssReadData";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60254 = 0;
F.line = 117;F.filename = "streams.nim";
Result_60254 = ((Buflen_60253 <= subInt((*S_60251).Data->Sup.len, (*S_60251).Pos)) ? Buflen_60253 : subInt((*S_60251).Data->Sup.len, (*S_60251).Pos));
F.line = 118;F.filename = "streams.nim";
if (!(0 < Result_60254)) goto LA2;
F.line = 119;F.filename = "streams.nim";
if ((NU)((*S_60251).Pos) > (NU)((*S_60251).Data->Sup.len)) raiseIndexError();
memcpy(Buffer_60252, ((void*) (&(*S_60251).Data->data[(*S_60251).Pos])), Result_60254);
F.line = 120;F.filename = "streams.nim";
(*S_60251).Pos = addInt((*S_60251).Pos, Result_60254);
LA2: ;
framePtr = framePtr->prev;
return Result_60254;
}
N_NIMCALL(void, Sswritedata_60274)(TY60226* S_60276, void* Buffer_60277, NI Buflen_60278) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "ssWriteData";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 123;F.filename = "streams.nim";
if (!(0 < Buflen_60278)) goto LA2;
F.line = 124;F.filename = "streams.nim";
(*S_60276).Data = setLengthStr((*S_60276).Data, addInt((*S_60276).Data->Sup.len, Buflen_60278));
F.line = 125;F.filename = "streams.nim";
if ((NU)((*S_60276).Pos) > (NU)((*S_60276).Data->Sup.len)) raiseIndexError();
memcpy(((void*) (&(*S_60276).Data->data[(*S_60276).Pos])), Buffer_60277, Buflen_60278);
F.line = 126;F.filename = "streams.nim";
(*S_60276).Pos = addInt((*S_60276).Pos, Buflen_60278);
LA2: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Ssclose_60296)(TY60226* S_60298) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "ssClose";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 129;F.filename = "streams.nim";
asgnRefNoCycle((void**) &(*S_60298).Data, copyString(NIM_NIL));
framePtr = framePtr->prev;
}
N_NIMCALL(TY60226*, Newstringstream_60299)(NimStringDesc* S_60301) {
TY60226* Result_60302;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "newStringStream";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60302 = 0;
F.line = 133;F.filename = "streams.nim";
Result_60302 = (TY60226*) newObj(NTI60224, sizeof(TY60226));
(*Result_60302).Sup.Sup.m_type = NTI60226;
F.line = 134;F.filename = "streams.nim";
asgnRefNoCycle((void**) &(*Result_60302).Data, copyString(S_60301));
F.line = 135;F.filename = "streams.nim";
(*Result_60302).Pos = 0;
F.line = 136;F.filename = "streams.nim";
(*Result_60302).Sup.Close = ((TY60028) (Ssclose_60296));
F.line = 137;F.filename = "streams.nim";
(*Result_60302).Sup.Atend = ((TY60032) (Ssatend_60229));
F.line = 138;F.filename = "streams.nim";
(*Result_60302).Sup.Setposition = ((TY60036) (Sssetposition_60237));
F.line = 139;F.filename = "streams.nim";
(*Result_60302).Sup.Getposition = ((TY60041) (Ssgetposition_60245));
F.line = 140;F.filename = "streams.nim";
(*Result_60302).Sup.Readdata = ((TY60045) (Ssreaddata_60249));
F.line = 141;F.filename = "streams.nim";
(*Result_60302).Sup.Writedata = ((TY60051) (Sswritedata_60274));
framePtr = framePtr->prev;
return Result_60302;
}
N_NIMCALL(void, Fsclose_60325)(TY60323* S_60327) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "fsClose";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 148;F.filename = "streams.nim";
fclose((*S_60327).F);
framePtr = framePtr->prev;
}
N_NIMCALL(NIM_BOOL, Fsatend_60328)(TY60323* S_60330) {
NIM_BOOL Result_60331;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "fsAtEnd";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60331 = 0;
F.line = 149;F.filename = "streams.nim";
F.line = 149;F.filename = "streams.nim";
Result_60331 = Endoffile_3438((*S_60330).F);
goto BeforeRet;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_60331;
}
N_NIMCALL(void, Fssetposition_60332)(TY60323* S_60334, NI Pos_60335) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "fsSetPosition";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 150;F.filename = "streams.nim";
Setfilepos_3538((*S_60334).F, ((NI64) (Pos_60335)));
framePtr = framePtr->prev;
}
N_NIMCALL(NI, Fsgetposition_60336)(TY60323* S_60338) {
NI Result_60339;
NI64 LOC1;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "fsGetPosition";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60339 = 0;
F.line = 151;F.filename = "streams.nim";
F.line = 151;F.filename = "streams.nim";
LOC1 = Getfilepos_3542((*S_60338).F);
Result_60339 = ((NI) (LOC1));
goto BeforeRet;
BeforeRet: ;
framePtr = framePtr->prev;
return Result_60339;
}
N_NIMCALL(NI, Fsreaddata_60340)(TY60323* S_60342, void* Buffer_60343, NI Buflen_60344) {
NI Result_60345;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "fsReadData";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60345 = 0;
F.line = 154;F.filename = "streams.nim";
Result_60345 = Readbuffer_3514((*S_60342).F, Buffer_60343, Buflen_60344);
framePtr = framePtr->prev;
return Result_60345;
}
N_NIMCALL(void, Fswritedata_60346)(TY60323* S_60348, void* Buffer_60349, NI Buflen_60350) {
NI LOC2;
TY420* LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "fsWriteData";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 157;F.filename = "streams.nim";
LOC2 = Writebuffer_3533((*S_60348).F, Buffer_60349, Buflen_60350);
if (!!((LOC2 == Buflen_60350))) goto LA3;
LOC5 = 0;
LOC5 = Neweio_60004(((NimStringDesc*) &TMP60353));
F.line = 158;F.filename = "streams.nim";
raiseException((E_Base*)LOC5, "EIO");
LA3: ;
framePtr = framePtr->prev;
}
N_NIMCALL(TY60323*, Newfilestream_60354)(FILE* F_60356) {
TY60323* Result_60357;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "newFileStream";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60357 = 0;
F.line = 162;F.filename = "streams.nim";
Result_60357 = (TY60323*) newObj(NTI60321, sizeof(TY60323));
(*Result_60357).Sup.Sup.m_type = NTI60323;
F.line = 163;F.filename = "streams.nim";
(*Result_60357).F = F_60356;
F.line = 164;F.filename = "streams.nim";
(*Result_60357).Sup.Close = ((TY60028) (Fsclose_60325));
F.line = 165;F.filename = "streams.nim";
(*Result_60357).Sup.Atend = ((TY60032) (Fsatend_60328));
F.line = 166;F.filename = "streams.nim";
(*Result_60357).Sup.Setposition = ((TY60036) (Fssetposition_60332));
F.line = 167;F.filename = "streams.nim";
(*Result_60357).Sup.Getposition = ((TY60041) (Fsgetposition_60336));
F.line = 168;F.filename = "streams.nim";
(*Result_60357).Sup.Readdata = ((TY60045) (Fsreaddata_60340));
F.line = 169;F.filename = "streams.nim";
(*Result_60357).Sup.Writedata = ((TY60051) (Fswritedata_60346));
framePtr = framePtr->prev;
return Result_60357;
}
N_NIMCALL(TY60323*, Newfilestream_60373)(NimStringDesc* Filename_60375, NU8 Mode_60376) {
TY60323* Result_60377;
FILE* F_60378;
NIM_BOOL LOC2;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "newFileStream";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
Result_60377 = 0;
F_60378 = 0;
F.line = 175;F.filename = "streams.nim";
LOC2 = Open_3417(&F_60378, Filename_60375, Mode_60376, -1);
if (!LOC2) goto LA3;
F.line = 175;F.filename = "streams.nim";
Result_60377 = Newfilestream_60354(F_60378);
LA3: ;
framePtr = framePtr->prev;
return Result_60377;
}
N_NIMCALL(void, Read_60089)(TY60027* S_60092, NIM_BOOL* Result_60094) {
NI LOC2;
TY420* LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "read";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 46;F.filename = "streams.nim";
LOC2 = (*S_60092).Readdata(S_60092, ((void*) (Result_60094)), 1);
if (!!((LOC2 == 1))) goto LA3;
LOC5 = 0;
LOC5 = Neweio_60004(((NimStringDesc*) &TMP60401));
F.line = 47;F.filename = "streams.nim";
raiseException((E_Base*)LOC5, "EIO");
LA3: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Read_60106)(TY60027* S_60109, NI8* Result_60111) {
NI LOC2;
TY420* LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "read";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 46;F.filename = "streams.nim";
LOC2 = (*S_60109).Readdata(S_60109, ((void*) (Result_60111)), 1);
if (!!((LOC2 == 1))) goto LA3;
LOC5 = 0;
LOC5 = Neweio_60004(((NimStringDesc*) &TMP60401));
F.line = 47;F.filename = "streams.nim";
raiseException((E_Base*)LOC5, "EIO");
LA3: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Read_60123)(TY60027* S_60126, NI16* Result_60128) {
NI LOC2;
TY420* LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "read";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 46;F.filename = "streams.nim";
LOC2 = (*S_60126).Readdata(S_60126, ((void*) (Result_60128)), 2);
if (!!((LOC2 == 2))) goto LA3;
LOC5 = 0;
LOC5 = Neweio_60004(((NimStringDesc*) &TMP60401));
F.line = 47;F.filename = "streams.nim";
raiseException((E_Base*)LOC5, "EIO");
LA3: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Read_60140)(TY60027* S_60143, NI32* Result_60145) {
NI LOC2;
TY420* LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "read";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 46;F.filename = "streams.nim";
LOC2 = (*S_60143).Readdata(S_60143, ((void*) (Result_60145)), 4);
if (!!((LOC2 == 4))) goto LA3;
LOC5 = 0;
LOC5 = Neweio_60004(((NimStringDesc*) &TMP60401));
F.line = 47;F.filename = "streams.nim";
raiseException((E_Base*)LOC5, "EIO");
LA3: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Read_60157)(TY60027* S_60160, NI64* Result_60162) {
NI LOC2;
TY420* LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "read";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 46;F.filename = "streams.nim";
LOC2 = (*S_60160).Readdata(S_60160, ((void*) (Result_60162)), 8);
if (!!((LOC2 == 8))) goto LA3;
LOC5 = 0;
LOC5 = Neweio_60004(((NimStringDesc*) &TMP60401));
F.line = 47;F.filename = "streams.nim";
raiseException((E_Base*)LOC5, "EIO");
LA3: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Read_60174)(TY60027* S_60177, NF32* Result_60179) {
NI LOC2;
TY420* LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "read";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 46;F.filename = "streams.nim";
LOC2 = (*S_60177).Readdata(S_60177, ((void*) (Result_60179)), 4);
if (!!((LOC2 == 4))) goto LA3;
LOC5 = 0;
LOC5 = Neweio_60004(((NimStringDesc*) &TMP60401));
F.line = 47;F.filename = "streams.nim";
raiseException((E_Base*)LOC5, "EIO");
LA3: ;
framePtr = framePtr->prev;
}
N_NIMCALL(void, Read_60191)(TY60027* S_60194, NF64* Result_60196) {
NI LOC2;
TY420* LOC5;
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "read";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
F.line = 46;F.filename = "streams.nim";
LOC2 = (*S_60194).Readdata(S_60194, ((void*) (Result_60196)), 8);
if (!!((LOC2 == 8))) goto LA3;
LOC5 = 0;
LOC5 = Neweio_60004(((NimStringDesc*) &TMP60401));
F.line = 47;F.filename = "streams.nim";
raiseException((E_Base*)LOC5, "EIO");
LA3: ;
framePtr = framePtr->prev;
}
N_NOINLINE(void, streamsInit)(void) {
volatile struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;
} F;
F.procname = "streams";
F.prev = framePtr;
F.filename = "/home/andreas/projects/nimrod/lib/pure/streams.nim";
F.line = 0;
framePtr = (TFrame*)&F;
F.len = 0;
framePtr = framePtr->prev;
}
