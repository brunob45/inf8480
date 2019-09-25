// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: operation.proto

#include "operation.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace operation {
class OperationRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<OperationRequest> _instance;
} _OperationRequest_default_instance_;
class OperationReplyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<OperationReply> _instance;
} _OperationReply_default_instance_;
}  // namespace operation
static void InitDefaultsOperationRequest_operation_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::operation::_OperationRequest_default_instance_;
    new (ptr) ::operation::OperationRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::operation::OperationRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_OperationRequest_operation_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsOperationRequest_operation_2eproto}, {}};

static void InitDefaultsOperationReply_operation_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::operation::_OperationReply_default_instance_;
    new (ptr) ::operation::OperationReply();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::operation::OperationReply::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_OperationReply_operation_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsOperationReply_operation_2eproto}, {}};

void InitDefaults_operation_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_OperationRequest_operation_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_OperationReply_operation_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_operation_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_operation_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_operation_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_operation_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::operation::OperationRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::operation::OperationRequest, task_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::operation::OperationReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::operation::OperationReply, message_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::operation::OperationRequest)},
  { 6, -1, sizeof(::operation::OperationReply)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::operation::_OperationRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::operation::_OperationReply_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_operation_2eproto = {
  {}, AddDescriptors_operation_2eproto, "operation.proto", schemas,
  file_default_instances, TableStruct_operation_2eproto::offsets,
  file_level_metadata_operation_2eproto, 2, file_level_enum_descriptors_operation_2eproto, file_level_service_descriptors_operation_2eproto,
};

const char descriptor_table_protodef_operation_2eproto[] =
  "\n\017operation.proto\022\toperation\" \n\020Operatio"
  "nRequest\022\014\n\004task\030\001 \001(\t\"!\n\016OperationReply"
  "\022\017\n\007message\030\001 \001(\t2O\n\tOperation\022B\n\010SayHel"
  "lo\022\033.operation.OperationRequest\032\031.operat"
  "ion.OperationReplyB\t\n\007ex.grpcb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_operation_2eproto = {
  false, InitDefaults_operation_2eproto, 
  descriptor_table_protodef_operation_2eproto,
  "operation.proto", &assign_descriptors_table_operation_2eproto, 197,
};

void AddDescriptors_operation_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_operation_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_operation_2eproto = []() { AddDescriptors_operation_2eproto(); return true; }();
namespace operation {

// ===================================================================

void OperationRequest::InitAsDefaultInstance() {
}
class OperationRequest::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationRequest::kTaskFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationRequest::OperationRequest()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:operation.OperationRequest)
}
OperationRequest::OperationRequest(const OperationRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  task_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.task().size() > 0) {
    task_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.task_);
  }
  // @@protoc_insertion_point(copy_constructor:operation.OperationRequest)
}

void OperationRequest::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_OperationRequest_operation_2eproto.base);
  task_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

OperationRequest::~OperationRequest() {
  // @@protoc_insertion_point(destructor:operation.OperationRequest)
  SharedDtor();
}

void OperationRequest::SharedDtor() {
  task_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void OperationRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const OperationRequest& OperationRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_OperationRequest_operation_2eproto.base);
  return *internal_default_instance();
}


void OperationRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:operation.OperationRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  task_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* OperationRequest::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<OperationRequest*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string task = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("operation.OperationRequest.task");
        object = msg->mutable_task();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool OperationRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:operation.OperationRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string task = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_task()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->task().data(), static_cast<int>(this->task().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "operation.OperationRequest.task"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:operation.OperationRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:operation.OperationRequest)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void OperationRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:operation.OperationRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string task = 1;
  if (this->task().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->task().data(), static_cast<int>(this->task().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "operation.OperationRequest.task");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->task(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:operation.OperationRequest)
}

::google::protobuf::uint8* OperationRequest::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:operation.OperationRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string task = 1;
  if (this->task().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->task().data(), static_cast<int>(this->task().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "operation.OperationRequest.task");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->task(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:operation.OperationRequest)
  return target;
}

size_t OperationRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:operation.OperationRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string task = 1;
  if (this->task().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->task());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void OperationRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:operation.OperationRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const OperationRequest* source =
      ::google::protobuf::DynamicCastToGenerated<OperationRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:operation.OperationRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:operation.OperationRequest)
    MergeFrom(*source);
  }
}

void OperationRequest::MergeFrom(const OperationRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:operation.OperationRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.task().size() > 0) {

    task_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.task_);
  }
}

void OperationRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:operation.OperationRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationRequest::CopyFrom(const OperationRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:operation.OperationRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationRequest::IsInitialized() const {
  return true;
}

void OperationRequest::Swap(OperationRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationRequest::InternalSwap(OperationRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  task_.Swap(&other->task_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata OperationRequest::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_operation_2eproto);
  return ::file_level_metadata_operation_2eproto[kIndexInFileMessages];
}


// ===================================================================

void OperationReply::InitAsDefaultInstance() {
}
class OperationReply::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OperationReply::kMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OperationReply::OperationReply()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:operation.OperationReply)
}
OperationReply::OperationReply(const OperationReply& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.message().size() > 0) {
    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
  // @@protoc_insertion_point(copy_constructor:operation.OperationReply)
}

void OperationReply::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_OperationReply_operation_2eproto.base);
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

OperationReply::~OperationReply() {
  // @@protoc_insertion_point(destructor:operation.OperationReply)
  SharedDtor();
}

void OperationReply::SharedDtor() {
  message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void OperationReply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const OperationReply& OperationReply::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_OperationReply_operation_2eproto.base);
  return *internal_default_instance();
}


void OperationReply::Clear() {
// @@protoc_insertion_point(message_clear_start:operation.OperationReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* OperationReply::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<OperationReply*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string message = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("operation.OperationReply.message");
        object = msg->mutable_message();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool OperationReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:operation.OperationReply)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string message = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->message().data(), static_cast<int>(this->message().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "operation.OperationReply.message"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:operation.OperationReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:operation.OperationReply)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void OperationReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:operation.OperationReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string message = 1;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), static_cast<int>(this->message().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "operation.OperationReply.message");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->message(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:operation.OperationReply)
}

::google::protobuf::uint8* OperationReply::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:operation.OperationReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string message = 1;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), static_cast<int>(this->message().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "operation.OperationReply.message");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->message(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:operation.OperationReply)
  return target;
}

size_t OperationReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:operation.OperationReply)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string message = 1;
  if (this->message().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->message());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void OperationReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:operation.OperationReply)
  GOOGLE_DCHECK_NE(&from, this);
  const OperationReply* source =
      ::google::protobuf::DynamicCastToGenerated<OperationReply>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:operation.OperationReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:operation.OperationReply)
    MergeFrom(*source);
  }
}

void OperationReply::MergeFrom(const OperationReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:operation.OperationReply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.message().size() > 0) {

    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
}

void OperationReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:operation.OperationReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OperationReply::CopyFrom(const OperationReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:operation.OperationReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OperationReply::IsInitialized() const {
  return true;
}

void OperationReply::Swap(OperationReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OperationReply::InternalSwap(OperationReply* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  message_.Swap(&other->message_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata OperationReply::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_operation_2eproto);
  return ::file_level_metadata_operation_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace operation
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::operation::OperationRequest* Arena::CreateMaybeMessage< ::operation::OperationRequest >(Arena* arena) {
  return Arena::CreateInternal< ::operation::OperationRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::operation::OperationReply* Arena::CreateMaybeMessage< ::operation::OperationReply >(Arena* arena) {
  return Arena::CreateInternal< ::operation::OperationReply >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
