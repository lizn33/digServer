// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grpcProto.proto

#include "grpcProto.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace grpcProto {
constexpr accRequest::accRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : user_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , passwd_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct accRequestDefaultTypeInternal {
  constexpr accRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~accRequestDefaultTypeInternal() {}
  union {
    accRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT accRequestDefaultTypeInternal _accRequest_default_instance_;
constexpr accReply::accReply(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : error_num_(0u){}
struct accReplyDefaultTypeInternal {
  constexpr accReplyDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~accReplyDefaultTypeInternal() {}
  union {
    accReply _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT accReplyDefaultTypeInternal _accReply_default_instance_;
}  // namespace grpcProto
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grpcProto_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grpcProto_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grpcProto_2eproto = nullptr;

const uint32_t TableStruct_grpcProto_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcProto::accRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpcProto::accRequest, user_),
  PROTOBUF_FIELD_OFFSET(::grpcProto::accRequest, passwd_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::grpcProto::accReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::grpcProto::accReply, error_num_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::grpcProto::accRequest)},
  { 8, -1, -1, sizeof(::grpcProto::accReply)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcProto::_accRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::grpcProto::_accReply_default_instance_),
};

const char descriptor_table_protodef_grpcProto_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017grpcProto.proto\022\tgrpcProto\"*\n\naccReque"
  "st\022\014\n\004user\030\001 \001(\t\022\016\n\006passwd\030\002 \001(\t\"\035\n\010accR"
  "eply\022\021\n\terror_num\030\001 \001(\r2\?\n\004gRPC\0227\n\007Accou"
  "nt\022\025.grpcProto.accRequest\032\023.grpcProto.ac"
  "cReply\"\000b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grpcProto_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grpcProto_2eproto = {
  false, false, 176, descriptor_table_protodef_grpcProto_2eproto, "grpcProto.proto", 
  &descriptor_table_grpcProto_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_grpcProto_2eproto::offsets,
  file_level_metadata_grpcProto_2eproto, file_level_enum_descriptors_grpcProto_2eproto, file_level_service_descriptors_grpcProto_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_grpcProto_2eproto_getter() {
  return &descriptor_table_grpcProto_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_grpcProto_2eproto(&descriptor_table_grpcProto_2eproto);
namespace grpcProto {

// ===================================================================

class accRequest::_Internal {
 public:
};

accRequest::accRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcProto.accRequest)
}
accRequest::accRequest(const accRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  user_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    user_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_user().empty()) {
    user_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_user(), 
      GetArenaForAllocation());
  }
  passwd_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    passwd_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_passwd().empty()) {
    passwd_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_passwd(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:grpcProto.accRequest)
}

inline void accRequest::SharedCtor() {
user_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  user_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
passwd_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  passwd_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

accRequest::~accRequest() {
  // @@protoc_insertion_point(destructor:grpcProto.accRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void accRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  user_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  passwd_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void accRequest::ArenaDtor(void* object) {
  accRequest* _this = reinterpret_cast< accRequest* >(object);
  (void)_this;
}
void accRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void accRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void accRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcProto.accRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  user_.ClearToEmpty();
  passwd_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* accRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string user = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_user();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "grpcProto.accRequest.user"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string passwd = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_passwd();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "grpcProto.accRequest.passwd"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* accRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcProto.accRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string user = 1;
  if (!this->_internal_user().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_user().data(), static_cast<int>(this->_internal_user().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "grpcProto.accRequest.user");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_user(), target);
  }

  // string passwd = 2;
  if (!this->_internal_passwd().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_passwd().data(), static_cast<int>(this->_internal_passwd().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "grpcProto.accRequest.passwd");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_passwd(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcProto.accRequest)
  return target;
}

size_t accRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcProto.accRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string user = 1;
  if (!this->_internal_user().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_user());
  }

  // string passwd = 2;
  if (!this->_internal_passwd().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_passwd());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData accRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    accRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*accRequest::GetClassData() const { return &_class_data_; }

void accRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<accRequest *>(to)->MergeFrom(
      static_cast<const accRequest &>(from));
}


void accRequest::MergeFrom(const accRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcProto.accRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_user().empty()) {
    _internal_set_user(from._internal_user());
  }
  if (!from._internal_passwd().empty()) {
    _internal_set_passwd(from._internal_passwd());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void accRequest::CopyFrom(const accRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcProto.accRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool accRequest::IsInitialized() const {
  return true;
}

void accRequest::InternalSwap(accRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &user_, lhs_arena,
      &other->user_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &passwd_, lhs_arena,
      &other->passwd_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata accRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcProto_2eproto_getter, &descriptor_table_grpcProto_2eproto_once,
      file_level_metadata_grpcProto_2eproto[0]);
}

// ===================================================================

class accReply::_Internal {
 public:
};

accReply::accReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:grpcProto.accReply)
}
accReply::accReply(const accReply& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  error_num_ = from.error_num_;
  // @@protoc_insertion_point(copy_constructor:grpcProto.accReply)
}

inline void accReply::SharedCtor() {
error_num_ = 0u;
}

accReply::~accReply() {
  // @@protoc_insertion_point(destructor:grpcProto.accReply)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void accReply::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void accReply::ArenaDtor(void* object) {
  accReply* _this = reinterpret_cast< accReply* >(object);
  (void)_this;
}
void accReply::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void accReply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void accReply::Clear() {
// @@protoc_insertion_point(message_clear_start:grpcProto.accReply)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  error_num_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* accReply::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 error_num = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          error_num_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* accReply::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grpcProto.accReply)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 error_num = 1;
  if (this->_internal_error_num() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_error_num(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grpcProto.accReply)
  return target;
}

size_t accReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grpcProto.accReply)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 error_num = 1;
  if (this->_internal_error_num() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_error_num());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData accReply::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    accReply::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*accReply::GetClassData() const { return &_class_data_; }

void accReply::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<accReply *>(to)->MergeFrom(
      static_cast<const accReply &>(from));
}


void accReply::MergeFrom(const accReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grpcProto.accReply)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_error_num() != 0) {
    _internal_set_error_num(from._internal_error_num());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void accReply::CopyFrom(const accReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grpcProto.accReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool accReply::IsInitialized() const {
  return true;
}

void accReply::InternalSwap(accReply* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(error_num_, other->error_num_);
}

::PROTOBUF_NAMESPACE_ID::Metadata accReply::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_grpcProto_2eproto_getter, &descriptor_table_grpcProto_2eproto_once,
      file_level_metadata_grpcProto_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace grpcProto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grpcProto::accRequest* Arena::CreateMaybeMessage< ::grpcProto::accRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcProto::accRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::grpcProto::accReply* Arena::CreateMaybeMessage< ::grpcProto::accReply >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grpcProto::accReply >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
