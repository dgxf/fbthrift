/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/refs/gen-cpp2/module_types.h"

#include "thrift/compiler/test/fixtures/refs/gen-cpp2/module_types.tcc"

#include <algorithm>

#include <folly/Indestructible.h>

#include "thrift/compiler/test/fixtures/refs/gen-cpp2/module_data.h"



namespace cpp2 {

const _TypedEnum_EnumMapFactory::ValuesToNamesMapType _TypedEnum_VALUES_TO_NAMES = _TypedEnum_EnumMapFactory::makeValuesToNamesMap();
const _TypedEnum_EnumMapFactory::NamesToValuesMapType _TypedEnum_NAMES_TO_VALUES = _TypedEnum_EnumMapFactory::makeNamesToValuesMap();

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

template <> const std::size_t TEnumTraitsBase< ::cpp2::TypedEnum>::size = 2;
template <> const folly::Range<const  ::cpp2::TypedEnum*> TEnumTraitsBase< ::cpp2::TypedEnum>::values = folly::range( ::cpp2::_TypedEnumEnumDataStorage::values);
template <> const folly::Range<const folly::StringPiece*> TEnumTraitsBase< ::cpp2::TypedEnum>::names = folly::range( ::cpp2::_TypedEnumEnumDataStorage::names);
template <> const char* TEnumTraitsBase< ::cpp2::TypedEnum>::findName( ::cpp2::TypedEnum value) {
  static auto const map = folly::Indestructible< ::cpp2::_TypedEnum_EnumMapFactory::ValuesToNamesMapType>{ ::cpp2::_TypedEnum_EnumMapFactory::makeValuesToNamesMap()};
  return findName(*map, value);
}

template <> bool TEnumTraitsBase< ::cpp2::TypedEnum>::findValue(const char* name,  ::cpp2::TypedEnum* outValue) {
  static auto const map = folly::Indestructible< ::cpp2::_TypedEnum_EnumMapFactory::NamesToValuesMapType>{ ::cpp2::_TypedEnum_EnumMapFactory::makeNamesToValuesMap()};
  return findValue(*map, name, outValue);
}

}} // apache::thrift
namespace cpp2 {

void MyUnion::__clear() {
  // clear all fields
  if (type_ == Type::__EMPTY__) { return; }
  switch(type_) {
    case Type::anInteger:
    {
      destruct(value_.anInteger);
      break;
    }
    case Type::aString:
    {
      destruct(value_.aString);
      break;
    }
    default:
    {
      assert(false);
      break;
    }
  }
  type_ = Type::__EMPTY__;
}

bool MyUnion::operator==(const MyUnion& rhs) const {
  if (type_ != rhs.type_) { return false; }
  switch(type_) {
    case Type::anInteger:
    {
      return value_.anInteger == rhs.value_.anInteger;
      break;
    }
    case Type::aString:
    {
      return value_.aString == rhs.value_.aString;
      break;
    }
    default:
    {
      return true;
      break;
    }
  }
}

void swap(MyUnion& a, MyUnion& b) {
  MyUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template uint32_t MyUnion::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyUnion::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

void MyField::__clear() {
  // clear all fields
  opt_value = 0;
  value = 0;
  req_value = 0;
  __isset.__clear();
}

bool MyField::operator==(const MyField& rhs) const {
  if (__isset.opt_value != rhs.__isset.opt_value) {
    return false;
  }
  else if (__isset.opt_value && !((opt_value == rhs.opt_value))) {
    return false;
  }
  if (!((value == rhs.value))) {
    return false;
  }
  if (!((req_value == rhs.req_value))) {
    return false;
  }
  return true;
}

void swap(MyField& a, MyField& b) {
  using ::std::swap;
  swap(a.opt_value, b.opt_value);
  swap(a.value, b.value);
  swap(a.req_value, b.req_value);
  swap(a.__isset, b.__isset);
}

template uint32_t MyField::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyField::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyField::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyField::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyField::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyField::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyField::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyField::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

MyStruct::MyStruct(const MyStruct& src) {
  if (src.opt_ref) opt_ref.reset(new  ::cpp2::MyField(*src.opt_ref));
  if (src.ref) ref.reset(new  ::cpp2::MyField(*src.ref));
  if (src.req_ref) req_ref.reset(new  ::cpp2::MyField(*src.req_ref));
}

MyStruct& MyStruct::operator=(const MyStruct& src) {
  MyStruct tmp(src);
  swap(*this, tmp);
  return *this;
}

void MyStruct::__clear() {
  // clear all fields
  if (opt_ref) ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::clear(opt_ref.get());
  if (ref) ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::clear(ref.get());
  if (req_ref) ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::clear(req_ref.get());
  __isset.__clear();
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  if (!(((opt_ref && rhs.opt_ref && *opt_ref == *rhs.opt_ref) ||(!opt_ref && !rhs.opt_ref)))) {
    return false;
  }
  if (!(((ref && rhs.ref && *ref == *rhs.ref) ||(!ref && !rhs.ref)))) {
    return false;
  }
  if (!(((req_ref && rhs.req_ref && *req_ref == *rhs.req_ref) ||(!req_ref && !rhs.req_ref)))) {
    return false;
  }
  return true;
}

void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.opt_ref, b.opt_ref);
  swap(a.ref, b.ref);
  swap(a.req_ref, b.req_ref);
  swap(a.__isset, b.__isset);
}

template uint32_t MyStruct::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

StructWithUnion::StructWithUnion(const StructWithUnion& src) {
  if (src.u) u.reset(new  ::cpp2::MyUnion(*src.u));
  aDouble = src.aDouble;
  __isset.aDouble = src.__isset.aDouble;
  f = src.f;
  __isset.f = src.__isset.f;
}

StructWithUnion& StructWithUnion::operator=(const StructWithUnion& src) {
  StructWithUnion tmp(src);
  swap(*this, tmp);
  return *this;
}

void StructWithUnion::__clear() {
  // clear all fields
  if (u) ::apache::thrift::Cpp2Ops<  ::cpp2::MyUnion>::clear(u.get());
  aDouble = 0;
  ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::clear(&f);
  __isset.__clear();
}

bool StructWithUnion::operator==(const StructWithUnion& rhs) const {
  if (!(((u && rhs.u && *u == *rhs.u) ||(!u && !rhs.u)))) {
    return false;
  }
  if (!((aDouble == rhs.aDouble))) {
    return false;
  }
  if (!((f == rhs.f))) {
    return false;
  }
  return true;
}

const  ::cpp2::MyField& StructWithUnion::get_f() const& {
  return f;
}

 ::cpp2::MyField StructWithUnion::get_f() && {
  return std::move(f);
}

void swap(StructWithUnion& a, StructWithUnion& b) {
  using ::std::swap;
  swap(a.u, b.u);
  swap(a.aDouble, b.aDouble);
  swap(a.f, b.f);
  swap(a.__isset, b.__isset);
}

template uint32_t StructWithUnion::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t StructWithUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t StructWithUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithUnion::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t StructWithUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t StructWithUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t StructWithUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

void RecursiveStruct::__clear() {
  // clear all fields
  mes.clear();
  __isset.__clear();
}

bool RecursiveStruct::operator==(const RecursiveStruct& rhs) const {
  if (__isset.mes != rhs.__isset.mes) {
    return false;
  }
  else if (__isset.mes && !((mes == rhs.mes))) {
    return false;
  }
  return true;
}

const std::vector< ::cpp2::RecursiveStruct>* RecursiveStruct::get_mes() const& {
  return __isset.mes ? std::addressof(mes) : nullptr;
}

std::vector< ::cpp2::RecursiveStruct>* RecursiveStruct::get_mes() & {
  return __isset.mes ? std::addressof(mes) : nullptr;
}

void swap(RecursiveStruct& a, RecursiveStruct& b) {
  using ::std::swap;
  swap(a.mes, b.mes);
  swap(a.__isset, b.__isset);
}

template uint32_t RecursiveStruct::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t RecursiveStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t RecursiveStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t RecursiveStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t RecursiveStruct::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t RecursiveStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t RecursiveStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t RecursiveStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

StructWithContainers::StructWithContainers(const StructWithContainers& src) {
  if (src.list_ref) list_ref.reset(new std::vector<int32_t>(*src.list_ref));
  if (src.set_ref) set_ref.reset(new std::set<int32_t>(*src.set_ref));
  if (src.map_ref) map_ref.reset(new std::map<int32_t, int32_t>(*src.map_ref));
  if (src.list_ref_unique) list_ref_unique.reset(new std::vector<int32_t>(*src.list_ref_unique));
  set_ref_shared = src.set_ref_shared;
  list_ref_shared_const = src.list_ref_shared_const;
  if (src.set_custom_ref) set_custom_ref.reset(new std::set<int32_t>(*src.set_custom_ref));
}

StructWithContainers& StructWithContainers::operator=(const StructWithContainers& src) {
  StructWithContainers tmp(src);
  swap(*this, tmp);
  return *this;
}

void StructWithContainers::__clear() {
  // clear all fields
  list_ref.reset(new typename decltype(list_ref)::element_type());
  set_ref.reset(new typename decltype(set_ref)::element_type());
  map_ref.reset(new typename decltype(map_ref)::element_type());
  list_ref_unique.reset(new typename decltype(list_ref_unique)::element_type());
  set_ref_shared.reset(new typename decltype(set_ref_shared)::element_type());
  list_ref_shared_const.reset(new typename decltype(list_ref_shared_const)::element_type());
  set_custom_ref.reset(new typename decltype(set_custom_ref)::element_type());
  __isset.__clear();
}

bool StructWithContainers::operator==(const StructWithContainers& rhs) const {
  if (!(((list_ref && rhs.list_ref && *list_ref == *rhs.list_ref) ||(!list_ref && !rhs.list_ref)))) {
    return false;
  }
  if (!(((set_ref && rhs.set_ref && *set_ref == *rhs.set_ref) ||(!set_ref && !rhs.set_ref)))) {
    return false;
  }
  if (!(((map_ref && rhs.map_ref && *map_ref == *rhs.map_ref) ||(!map_ref && !rhs.map_ref)))) {
    return false;
  }
  if (!(((list_ref_unique && rhs.list_ref_unique && *list_ref_unique == *rhs.list_ref_unique) ||(!list_ref_unique && !rhs.list_ref_unique)))) {
    return false;
  }
  if (!(((set_ref_shared && rhs.set_ref_shared && *set_ref_shared == *rhs.set_ref_shared) ||(!set_ref_shared && !rhs.set_ref_shared)))) {
    return false;
  }
  if (!(((list_ref_shared_const && rhs.list_ref_shared_const && *list_ref_shared_const == *rhs.list_ref_shared_const) ||(!list_ref_shared_const && !rhs.list_ref_shared_const)))) {
    return false;
  }
  if (!(((set_custom_ref && rhs.set_custom_ref && *set_custom_ref == *rhs.set_custom_ref) ||(!set_custom_ref && !rhs.set_custom_ref)))) {
    return false;
  }
  return true;
}

void swap(StructWithContainers& a, StructWithContainers& b) {
  using ::std::swap;
  swap(a.list_ref, b.list_ref);
  swap(a.set_ref, b.set_ref);
  swap(a.map_ref, b.map_ref);
  swap(a.list_ref_unique, b.list_ref_unique);
  swap(a.set_ref_shared, b.set_ref_shared);
  swap(a.list_ref_shared_const, b.list_ref_shared_const);
  swap(a.set_custom_ref, b.set_custom_ref);
  swap(a.__isset, b.__isset);
}

template uint32_t StructWithContainers::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t StructWithContainers::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t StructWithContainers::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithContainers::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithContainers::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t StructWithContainers::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t StructWithContainers::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t StructWithContainers::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

void StructWithSharedConst::__clear() {
  // clear all fields
  opt_shared_const.reset();
  shared_const.reset();
  req_shared_const.reset();
  __isset.__clear();
}

bool StructWithSharedConst::operator==(const StructWithSharedConst& rhs) const {
  if (!(((opt_shared_const && rhs.opt_shared_const && *opt_shared_const == *rhs.opt_shared_const) ||(!opt_shared_const && !rhs.opt_shared_const)))) {
    return false;
  }
  if (!(((shared_const && rhs.shared_const && *shared_const == *rhs.shared_const) ||(!shared_const && !rhs.shared_const)))) {
    return false;
  }
  if (!(((req_shared_const && rhs.req_shared_const && *req_shared_const == *rhs.req_shared_const) ||(!req_shared_const && !rhs.req_shared_const)))) {
    return false;
  }
  return true;
}

void swap(StructWithSharedConst& a, StructWithSharedConst& b) {
  using ::std::swap;
  swap(a.opt_shared_const, b.opt_shared_const);
  swap(a.shared_const, b.shared_const);
  swap(a.req_shared_const, b.req_shared_const);
  swap(a.__isset, b.__isset);
}

template uint32_t StructWithSharedConst::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t StructWithSharedConst::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t StructWithSharedConst::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithSharedConst::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithSharedConst::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t StructWithSharedConst::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t StructWithSharedConst::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t StructWithSharedConst::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

void Empty::__clear() {
  // clear all fields
}

bool Empty::operator==(const Empty& /* rhs */) const {
  return true;
}

void swap(Empty& a, Empty& b) {
  using ::std::swap;
  (void)a;
  (void)b;
}

template uint32_t Empty::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Empty::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Empty::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Empty::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Empty::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t Empty::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Empty::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Empty::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

StructWithRef::StructWithRef(const StructWithRef& src) {
  if (src.def_field) def_field.reset(new  ::cpp2::Empty(*src.def_field));
  if (src.opt_field) opt_field.reset(new  ::cpp2::Empty(*src.opt_field));
  if (src.req_field) req_field.reset(new  ::cpp2::Empty(*src.req_field));
}

StructWithRef& StructWithRef::operator=(const StructWithRef& src) {
  StructWithRef tmp(src);
  swap(*this, tmp);
  return *this;
}

void StructWithRef::__clear() {
  // clear all fields
  __isset.__clear();
}

bool StructWithRef::operator==(const StructWithRef& rhs) const {
  if (!(((def_field && rhs.def_field && *def_field == *rhs.def_field) ||(!def_field && !rhs.def_field)))) {
    return false;
  }
  if (!(((opt_field && rhs.opt_field && *opt_field == *rhs.opt_field) ||(!opt_field && !rhs.opt_field)))) {
    return false;
  }
  if (!(((req_field && rhs.req_field && *req_field == *rhs.req_field) ||(!req_field && !rhs.req_field)))) {
    return false;
  }
  return true;
}

void swap(StructWithRef& a, StructWithRef& b) {
  using ::std::swap;
  swap(a.def_field, b.def_field);
  swap(a.opt_field, b.opt_field);
  swap(a.req_field, b.req_field);
  swap(a.__isset, b.__isset);
}

template uint32_t StructWithRef::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t StructWithRef::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t StructWithRef::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithRef::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithRef::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t StructWithRef::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t StructWithRef::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t StructWithRef::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

StructWithRefTypeUnique::StructWithRefTypeUnique(const StructWithRefTypeUnique& src) {
  if (src.def_field) def_field.reset(new  ::cpp2::Empty(*src.def_field));
  if (src.opt_field) opt_field.reset(new  ::cpp2::Empty(*src.opt_field));
  if (src.req_field) req_field.reset(new  ::cpp2::Empty(*src.req_field));
}

StructWithRefTypeUnique& StructWithRefTypeUnique::operator=(const StructWithRefTypeUnique& src) {
  StructWithRefTypeUnique tmp(src);
  swap(*this, tmp);
  return *this;
}

void StructWithRefTypeUnique::__clear() {
  // clear all fields
  __isset.__clear();
}

bool StructWithRefTypeUnique::operator==(const StructWithRefTypeUnique& rhs) const {
  if (!(((def_field && rhs.def_field && *def_field == *rhs.def_field) ||(!def_field && !rhs.def_field)))) {
    return false;
  }
  if (!(((opt_field && rhs.opt_field && *opt_field == *rhs.opt_field) ||(!opt_field && !rhs.opt_field)))) {
    return false;
  }
  if (!(((req_field && rhs.req_field && *req_field == *rhs.req_field) ||(!req_field && !rhs.req_field)))) {
    return false;
  }
  return true;
}

void swap(StructWithRefTypeUnique& a, StructWithRefTypeUnique& b) {
  using ::std::swap;
  swap(a.def_field, b.def_field);
  swap(a.opt_field, b.opt_field);
  swap(a.req_field, b.req_field);
  swap(a.__isset, b.__isset);
}

template uint32_t StructWithRefTypeUnique::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t StructWithRefTypeUnique::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t StructWithRefTypeUnique::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithRefTypeUnique::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithRefTypeUnique::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t StructWithRefTypeUnique::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t StructWithRefTypeUnique::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t StructWithRefTypeUnique::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

void StructWithRefTypeShared::__clear() {
  // clear all fields
  __isset.__clear();
}

bool StructWithRefTypeShared::operator==(const StructWithRefTypeShared& rhs) const {
  if (!(((def_field && rhs.def_field && *def_field == *rhs.def_field) ||(!def_field && !rhs.def_field)))) {
    return false;
  }
  if (!(((opt_field && rhs.opt_field && *opt_field == *rhs.opt_field) ||(!opt_field && !rhs.opt_field)))) {
    return false;
  }
  if (!(((req_field && rhs.req_field && *req_field == *rhs.req_field) ||(!req_field && !rhs.req_field)))) {
    return false;
  }
  return true;
}

void swap(StructWithRefTypeShared& a, StructWithRefTypeShared& b) {
  using ::std::swap;
  swap(a.def_field, b.def_field);
  swap(a.opt_field, b.opt_field);
  swap(a.req_field, b.req_field);
  swap(a.__isset, b.__isset);
}

template uint32_t StructWithRefTypeShared::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t StructWithRefTypeShared::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t StructWithRefTypeShared::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithRefTypeShared::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithRefTypeShared::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t StructWithRefTypeShared::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t StructWithRefTypeShared::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t StructWithRefTypeShared::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

void StructWithRefTypeSharedConst::__clear() {
  // clear all fields
  __isset.__clear();
}

bool StructWithRefTypeSharedConst::operator==(const StructWithRefTypeSharedConst& rhs) const {
  if (!(((def_field && rhs.def_field && *def_field == *rhs.def_field) ||(!def_field && !rhs.def_field)))) {
    return false;
  }
  if (!(((opt_field && rhs.opt_field && *opt_field == *rhs.opt_field) ||(!opt_field && !rhs.opt_field)))) {
    return false;
  }
  if (!(((req_field && rhs.req_field && *req_field == *rhs.req_field) ||(!req_field && !rhs.req_field)))) {
    return false;
  }
  return true;
}

void swap(StructWithRefTypeSharedConst& a, StructWithRefTypeSharedConst& b) {
  using ::std::swap;
  swap(a.def_field, b.def_field);
  swap(a.opt_field, b.opt_field);
  swap(a.req_field, b.req_field);
  swap(a.__isset, b.__isset);
}

template uint32_t StructWithRefTypeSharedConst::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t StructWithRefTypeSharedConst::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t StructWithRefTypeSharedConst::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithRefTypeSharedConst::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithRefTypeSharedConst::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t StructWithRefTypeSharedConst::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t StructWithRefTypeSharedConst::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t StructWithRefTypeSharedConst::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

StructWithRefTypeCustom::StructWithRefTypeCustom(const StructWithRefTypeCustom& src) {
  if (src.def_field) def_field.reset(new  ::cpp2::Empty(*src.def_field));
  if (src.opt_field) opt_field.reset(new  ::cpp2::Empty(*src.opt_field));
  if (src.req_field) req_field.reset(new  ::cpp2::Empty(*src.req_field));
}

StructWithRefTypeCustom& StructWithRefTypeCustom::operator=(const StructWithRefTypeCustom& src) {
  StructWithRefTypeCustom tmp(src);
  swap(*this, tmp);
  return *this;
}

void StructWithRefTypeCustom::__clear() {
  // clear all fields
  __isset.__clear();
}

bool StructWithRefTypeCustom::operator==(const StructWithRefTypeCustom& rhs) const {
  if (!(((def_field && rhs.def_field && *def_field == *rhs.def_field) ||(!def_field && !rhs.def_field)))) {
    return false;
  }
  if (!(((opt_field && rhs.opt_field && *opt_field == *rhs.opt_field) ||(!opt_field && !rhs.opt_field)))) {
    return false;
  }
  if (!(((req_field && rhs.req_field && *req_field == *rhs.req_field) ||(!req_field && !rhs.req_field)))) {
    return false;
  }
  return true;
}

void swap(StructWithRefTypeCustom& a, StructWithRefTypeCustom& b) {
  using ::std::swap;
  swap(a.def_field, b.def_field);
  swap(a.opt_field, b.opt_field);
  swap(a.req_field, b.req_field);
  swap(a.__isset, b.__isset);
}

template uint32_t StructWithRefTypeCustom::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t StructWithRefTypeCustom::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t StructWithRefTypeCustom::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithRefTypeCustom::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithRefTypeCustom::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t StructWithRefTypeCustom::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t StructWithRefTypeCustom::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t StructWithRefTypeCustom::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2
