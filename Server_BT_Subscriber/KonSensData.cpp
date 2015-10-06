//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: KonSensData.cpp
//  Source: KonSensData.idl
//  Generated: Thu Sep 17 15:12:46 2015
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "KonSensData.h"


#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_MArray_var< KonSensData::BtSeq::_timestamp, KonSensData::BtSeq::_timestamp_slice, struct KonSensData::BtSeq::_timestamp_uniq_>;
template class DDS_DCPS_MArray_forany< KonSensData::BtSeq::_timestamp, KonSensData::BtSeq::_timestamp_slice, struct KonSensData::BtSeq::_timestamp_uniq_>;
#endif

template <>
KonSensData::BtSeq::_timestamp_slice* DDS_DCPS_ArrayHelper < KonSensData::BtSeq::_timestamp, KonSensData::BtSeq::_timestamp_slice, KonSensData::BtSeq::_timestamp_uniq_>::alloc ()
{
   return KonSensData::BtSeq::_timestamp_alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < KonSensData::BtSeq::_timestamp, KonSensData::BtSeq::_timestamp_slice, KonSensData::BtSeq::_timestamp_uniq_>::copy (KonSensData::BtSeq::_timestamp_slice *to, const KonSensData::BtSeq::_timestamp_slice* from)
{
   KonSensData::BtSeq::_timestamp_copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < KonSensData::BtSeq::_timestamp, KonSensData::BtSeq::_timestamp_slice, KonSensData::BtSeq::_timestamp_uniq_>::free (KonSensData::BtSeq::_timestamp_slice *ptr)
{
   KonSensData::BtSeq::_timestamp_free (ptr);
}

KonSensData::BtSeq::_timestamp_slice * KonSensData::BtSeq::_timestamp_alloc ()
{
   DDS::Long * ret = (DDS::Long*) new DDS::Long [4];
   return (_timestamp_slice *) ret;
}

void KonSensData::BtSeq::_timestamp_free (_timestamp_slice * s)
{
   delete [] s;
}

void KonSensData::BtSeq::_timestamp_copy
(
   _timestamp_slice * to,
   const _timestamp_slice * from
)
{
   const DDS::Long* sv = ( const DDS::Long*) from;
   DDS::Long* tv = (DDS::Long*) to;
   for (DDS::ULong i = 0; i < 4; i++) tv[i] = sv[i];
}

KonSensData::BtSeq::_timestamp_slice * KonSensData::BtSeq::_timestamp_dup
   (const _timestamp_slice * from)
{
   _timestamp_slice * to = _timestamp_alloc ();
   _timestamp_copy (to, from);
   return to;
}


#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPS_MArray_var< KonSensData::WifiSeq::_timestamp, KonSensData::WifiSeq::_timestamp_slice, struct KonSensData::WifiSeq::_timestamp_uniq_>;
template class DDS_DCPS_MArray_forany< KonSensData::WifiSeq::_timestamp, KonSensData::WifiSeq::_timestamp_slice, struct KonSensData::WifiSeq::_timestamp_uniq_>;
#endif

template <>
KonSensData::WifiSeq::_timestamp_slice* DDS_DCPS_ArrayHelper < KonSensData::WifiSeq::_timestamp, KonSensData::WifiSeq::_timestamp_slice, KonSensData::WifiSeq::_timestamp_uniq_>::alloc ()
{
   return KonSensData::WifiSeq::_timestamp_alloc ();
}

template <>
void DDS_DCPS_ArrayHelper < KonSensData::WifiSeq::_timestamp, KonSensData::WifiSeq::_timestamp_slice, KonSensData::WifiSeq::_timestamp_uniq_>::copy (KonSensData::WifiSeq::_timestamp_slice *to, const KonSensData::WifiSeq::_timestamp_slice* from)
{
   KonSensData::WifiSeq::_timestamp_copy (to, from);
}

template <>
void DDS_DCPS_ArrayHelper < KonSensData::WifiSeq::_timestamp, KonSensData::WifiSeq::_timestamp_slice, KonSensData::WifiSeq::_timestamp_uniq_>::free (KonSensData::WifiSeq::_timestamp_slice *ptr)
{
   KonSensData::WifiSeq::_timestamp_free (ptr);
}

KonSensData::WifiSeq::_timestamp_slice * KonSensData::WifiSeq::_timestamp_alloc ()
{
   DDS::Long * ret = (DDS::Long*) new DDS::Long [4];
   return (_timestamp_slice *) ret;
}

void KonSensData::WifiSeq::_timestamp_free (_timestamp_slice * s)
{
   delete [] s;
}

void KonSensData::WifiSeq::_timestamp_copy
(
   _timestamp_slice * to,
   const _timestamp_slice * from
)
{
   const DDS::Long* sv = ( const DDS::Long*) from;
   DDS::Long* tv = (DDS::Long*) to;
   for (DDS::ULong i = 0; i < 4; i++) tv[i] = sv[i];
}

KonSensData::WifiSeq::_timestamp_slice * KonSensData::WifiSeq::_timestamp_dup
   (const _timestamp_slice * from)
{
   _timestamp_slice * to = _timestamp_alloc ();
   _timestamp_copy (to, from);
   return to;
}

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < KonSensData::Msg, struct MesSeq_uniq_>;
#endif



