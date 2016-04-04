#include "KonSensDataSplDcps.h"
#include "ccpp_KonSensData.h"
#include "dds_type_aliases.h"

const char *
__KonSensData_Msg__name(void)
{
    return (const char*)"KonSensData::Msg";
}

const char *
__KonSensData_Msg__keys(void)
{
    return (const char*)"devID";
}

const char *
__KonSensData_WifiSeq__name(void)
{
    return (const char*)"KonSensData::WifiSeq";
}

const char *
__KonSensData_WifiSeq__keys(void)
{
    return (const char*)"userID";
}

const char *
__KonSensData_BtSeq__name(void)
{
    return (const char*)"KonSensData::BtSeq";
}

const char *
__KonSensData_BtSeq__keys(void)
{
    return (const char*)"userID";
}

const char *
__KonSensData_ServerReq__name(void)
{
    return (const char*)"KonSensData::ServerReq";
}

const char *
__KonSensData_ServerReq__keys(void)
{
    return (const char*)"requestID";
}

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

c_bool
__KonSensData_Msg__copyIn(
    c_base base,
    struct ::KonSensData::Msg *from,
    struct _KonSensData_Msg *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if(from->devID){
        to->devID = c_stringNew(base, from->devID);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'KonSensData::Msg.devID' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->devID = c_stringNew(base, from->devID);
#endif
#ifdef OSPL_BOUNDS_CHECK
    if(from->hostName){
        to->hostName = c_stringNew(base, from->hostName);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'KonSensData::Msg.hostName' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->hostName = c_stringNew(base, from->hostName);
#endif
    to->dbm = (c_long)from->dbm;
    return result;
}

c_bool
__KonSensData_MesSeq__copyIn(
    c_base base,
    ::KonSensData::MesSeq *from,
    _KonSensData_MesSeq *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

/* Code generated by /home/dds/OvernightTests/tmp.Zi75hUiMaK/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2411 */

    static c_type type0 = NULL;
    c_type subtype0 = NULL;
    c_long length0;
    struct _KonSensData_Msg *dest0;

    if (type0 == NULL) {
        subtype0 = c_type(c_metaResolve (c_metaObject(base), "KonSensData::Msg"));
        type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<KonSensData::Msg>",subtype0,0);
        c_free(subtype0);
    }
    length0 = (c_long)(*from).length();
#ifdef OSPL_BOUNDS_CHECK
    dest0 = (struct _KonSensData_Msg *)c_newSequence(c_collectionType(type0), length0);
    {
    /* Code generated by /home/dds/OvernightTests/tmp.Zi75hUiMaK/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1928 */
        unsigned int i0;
        for (i0 = 0; (i0 < (unsigned int)length0) && result; i0++) {
            extern c_bool __KonSensData_Msg__copyIn(c_base base,
                KonSensData::Msg *From,
                struct _KonSensData_Msg *To);

            result = __KonSensData_Msg__copyIn(base, &(*from)[i0], (struct _KonSensData_Msg *)&dest0[i0]);
        }
    }
    *to = (_KonSensData_MesSeq)dest0;
#else
    dest0 = (struct _KonSensData_Msg *)c_newSequence(c_collectionType(type0), length0);
    {
    /* Code generated by /home/dds/OvernightTests/tmp.Zi75hUiMaK/build/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 1928 */
        unsigned int i0;
        for (i0 = 0; (i0 < (unsigned int)length0) && result; i0++) {
            extern c_bool __KonSensData_Msg__copyIn(c_base base,
                KonSensData::Msg *From,
                struct _KonSensData_Msg *To);

            result = __KonSensData_Msg__copyIn(base, &(*from)[i0], (struct _KonSensData_Msg *)&dest0[i0]);
        }
    }
    *to = (_KonSensData_MesSeq)dest0;
#endif
    return result;
}

c_bool
__KonSensData_WifiSeq__copyIn(
    c_base base,
    struct ::KonSensData::WifiSeq *from,
    struct _KonSensData_WifiSeq *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    {
        typedef c_long _DestType[2][2];
        _DestType *dest = &to->timestamp;
        memcpy (dest, from->timestamp, sizeof (*dest));
    }
    to->userID = (c_long)from->userID;
    to->messageID = (c_long)from->messageID;
    if(result){
        extern c_bool __KonSensData_MesSeq__copyIn(c_base, ::KonSensData::MesSeq *, _KonSensData_MesSeq *);
        result = __KonSensData_MesSeq__copyIn(base, &from->messages, &to->messages);
    }
    return result;
}

c_bool
__KonSensData_BtSeq__copyIn(
    c_base base,
    struct ::KonSensData::BtSeq *from,
    struct _KonSensData_BtSeq *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

    {
        typedef c_long _DestType[2][2];
        _DestType *dest = &to->timestamp;
        memcpy (dest, from->timestamp, sizeof (*dest));
    }
    to->userID = (c_long)from->userID;
    to->messageID = (c_long)from->messageID;
    if(result){
        extern c_bool __KonSensData_MesSeq__copyIn(c_base, ::KonSensData::MesSeq *, _KonSensData_MesSeq *);
        result = __KonSensData_MesSeq__copyIn(base, &from->messages, &to->messages);
    }
    return result;
}

c_bool
__KonSensData_ServerReq__copyIn(
    c_base base,
    struct ::KonSensData::ServerReq *from,
    struct _KonSensData_ServerReq *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
    if(from->request){
        to->request = c_stringNew(base, from->request);
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'KonSensData::ServerReq.request' of type 'c_string' is NULL.");
        result = OS_C_FALSE;
    }
#else
    to->request = c_stringNew(base, from->request);
#endif
    to->requestID = (c_long)from->requestID;
    return result;
}

void
__KonSensData_Msg__copyOut(
    void *_from,
    void *_to)
{
    struct _KonSensData_Msg *from = (struct _KonSensData_Msg *)_from;
    struct ::KonSensData::Msg *to = (struct ::KonSensData::Msg *)_to;
    to->devID = DDS::string_dup(from->devID ? from->devID : "");
    to->hostName = DDS::string_dup(from->hostName ? from->hostName : "");
    to->dbm = (::DDS::Long)from->dbm;
}

void
__KonSensData_MesSeq__copyOut(
    void *_from,
    void *_to)
{
    _KonSensData_MesSeq *from = (_KonSensData_MesSeq *)_from;
    ::KonSensData::MesSeq *to = (::KonSensData::MesSeq *)_to;
    long size0;
    struct _KonSensData_Msg *src0 = (struct _KonSensData_Msg *)(*from);

    size0 = c_arraySize(c_sequence(src0));
    (*to).length(size0);
    {
        long i0;
        for (i0 = 0; i0 < size0; i0++) {
            extern void __KonSensData_Msg__copyOut(void *from, void *to);
            __KonSensData_Msg__copyOut((void *)&src0[i0], (void *)&(*to)[i0]);
        }
    }
}

void
__KonSensData_WifiSeq__copyOut(
    void *_from,
    void *_to)
{
    struct _KonSensData_WifiSeq *from = (struct _KonSensData_WifiSeq *)_from;
    struct ::KonSensData::WifiSeq *to = (struct ::KonSensData::WifiSeq *)_to;
    {
        typedef c_long _DestType[2][2];
        _DestType *src = &from->timestamp;

        memcpy (to->timestamp, src, sizeof (*src));
    }
    to->userID = (::DDS::Long)from->userID;
    to->messageID = (::DDS::Long)from->messageID;
    {
        extern void __KonSensData_MesSeq__copyOut(void *, void *);
        __KonSensData_MesSeq__copyOut((void *)&from->messages, (void *)&to->messages);
    }
}

void
__KonSensData_BtSeq__copyOut(
    void *_from,
    void *_to)
{
    struct _KonSensData_BtSeq *from = (struct _KonSensData_BtSeq *)_from;
    struct ::KonSensData::BtSeq *to = (struct ::KonSensData::BtSeq *)_to;
    {
        typedef c_long _DestType[2][2];
        _DestType *src = &from->timestamp;

        memcpy (to->timestamp, src, sizeof (*src));
    }
    to->userID = (::DDS::Long)from->userID;
    to->messageID = (::DDS::Long)from->messageID;
    {
        extern void __KonSensData_MesSeq__copyOut(void *, void *);
        __KonSensData_MesSeq__copyOut((void *)&from->messages, (void *)&to->messages);
    }
}

void
__KonSensData_ServerReq__copyOut(
    void *_from,
    void *_to)
{
    struct _KonSensData_ServerReq *from = (struct _KonSensData_ServerReq *)_from;
    struct ::KonSensData::ServerReq *to = (struct ::KonSensData::ServerReq *)_to;
    to->request = DDS::string_dup(from->request ? from->request : "");
    to->requestID = (::DDS::Long)from->requestID;
}
