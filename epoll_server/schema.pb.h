// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: schema.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_schema_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_schema_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_bases.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_schema_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_schema_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_schema_2eproto;
class Request;
struct RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
class Request_GetCount;
struct Request_GetCountDefaultTypeInternal;
extern Request_GetCountDefaultTypeInternal _Request_GetCount_default_instance_;
class Request_PostWords;
struct Request_PostWordsDefaultTypeInternal;
extern Request_PostWordsDefaultTypeInternal _Request_PostWords_default_instance_;
class Response;
struct ResponseDefaultTypeInternal;
extern ResponseDefaultTypeInternal _Response_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Request* Arena::CreateMaybeMessage<::Request>(Arena*);
template<> ::Request_GetCount* Arena::CreateMaybeMessage<::Request_GetCount>(Arena*);
template<> ::Request_PostWords* Arena::CreateMaybeMessage<::Request_PostWords>(Arena*);
template<> ::Response* Arena::CreateMaybeMessage<::Response>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum Response_Status : int {
  Response_Status_OK = 0,
  Response_Status_ERROR = 1,
  Response_Status_Response_Status_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  Response_Status_Response_Status_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool Response_Status_IsValid(int value);
constexpr Response_Status Response_Status_Status_MIN = Response_Status_OK;
constexpr Response_Status Response_Status_Status_MAX = Response_Status_ERROR;
constexpr int Response_Status_Status_ARRAYSIZE = Response_Status_Status_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Response_Status_descriptor();
template<typename T>
inline const std::string& Response_Status_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Response_Status>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Response_Status_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Response_Status_descriptor(), enum_t_value);
}
inline bool Response_Status_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Response_Status* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Response_Status>(
    Response_Status_descriptor(), name, value);
}
// ===================================================================

class Request_GetCount final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:Request.GetCount) */ {
 public:
  inline Request_GetCount() : Request_GetCount(nullptr) {}
  explicit PROTOBUF_CONSTEXPR Request_GetCount(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Request_GetCount(const Request_GetCount& from);
  Request_GetCount(Request_GetCount&& from) noexcept
    : Request_GetCount() {
    *this = ::std::move(from);
  }

  inline Request_GetCount& operator=(const Request_GetCount& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request_GetCount& operator=(Request_GetCount&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Request_GetCount& default_instance() {
    return *internal_default_instance();
  }
  static inline const Request_GetCount* internal_default_instance() {
    return reinterpret_cast<const Request_GetCount*>(
               &_Request_GetCount_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Request_GetCount& a, Request_GetCount& b) {
    a.Swap(&b);
  }
  inline void Swap(Request_GetCount* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Request_GetCount* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Request_GetCount* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Request_GetCount>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const Request_GetCount& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const Request_GetCount& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Request.GetCount";
  }
  protected:
  explicit Request_GetCount(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:Request.GetCount)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_schema_2eproto;
};
// -------------------------------------------------------------------

class Request_PostWords final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Request.PostWords) */ {
 public:
  inline Request_PostWords() : Request_PostWords(nullptr) {}
  ~Request_PostWords() override;
  explicit PROTOBUF_CONSTEXPR Request_PostWords(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Request_PostWords(const Request_PostWords& from);
  Request_PostWords(Request_PostWords&& from) noexcept
    : Request_PostWords() {
    *this = ::std::move(from);
  }

  inline Request_PostWords& operator=(const Request_PostWords& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request_PostWords& operator=(Request_PostWords&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Request_PostWords& default_instance() {
    return *internal_default_instance();
  }
  static inline const Request_PostWords* internal_default_instance() {
    return reinterpret_cast<const Request_PostWords*>(
               &_Request_PostWords_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Request_PostWords& a, Request_PostWords& b) {
    a.Swap(&b);
  }
  inline void Swap(Request_PostWords* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Request_PostWords* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Request_PostWords* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Request_PostWords>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Request_PostWords& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Request_PostWords& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Request_PostWords* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Request.PostWords";
  }
  protected:
  explicit Request_PostWords(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDataFieldNumber = 1,
  };
  // bytes data = 1;
  void clear_data();
  const std::string& data() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_data(ArgT0&& arg0, ArgT... args);
  std::string* mutable_data();
  PROTOBUF_NODISCARD std::string* release_data();
  void set_allocated_data(std::string* data);
  private:
  const std::string& _internal_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_data(const std::string& value);
  std::string* _internal_mutable_data();
  public:

  // @@protoc_insertion_point(class_scope:Request.PostWords)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_schema_2eproto;
};
// -------------------------------------------------------------------

class Request final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Request) */ {
 public:
  inline Request() : Request(nullptr) {}
  ~Request() override;
  explicit PROTOBUF_CONSTEXPR Request(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Request(const Request& from);
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request& operator=(Request&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Request& default_instance() {
    return *internal_default_instance();
  }
  enum MsgCase {
    kGetCount = 1,
    kPostWords = 2,
    MSG_NOT_SET = 0,
  };

  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }
  inline void Swap(Request* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Request* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Request>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Request& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Request& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Request* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Request";
  }
  protected:
  explicit Request(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Request_GetCount GetCount;
  typedef Request_PostWords PostWords;

  // accessors -------------------------------------------------------

  enum : int {
    kGetCountFieldNumber = 1,
    kPostWordsFieldNumber = 2,
  };
  // .Request.GetCount getCount = 1;
  bool has_getcount() const;
  private:
  bool _internal_has_getcount() const;
  public:
  void clear_getcount();
  const ::Request_GetCount& getcount() const;
  PROTOBUF_NODISCARD ::Request_GetCount* release_getcount();
  ::Request_GetCount* mutable_getcount();
  void set_allocated_getcount(::Request_GetCount* getcount);
  private:
  const ::Request_GetCount& _internal_getcount() const;
  ::Request_GetCount* _internal_mutable_getcount();
  public:
  void unsafe_arena_set_allocated_getcount(
      ::Request_GetCount* getcount);
  ::Request_GetCount* unsafe_arena_release_getcount();

  // .Request.PostWords postWords = 2;
  bool has_postwords() const;
  private:
  bool _internal_has_postwords() const;
  public:
  void clear_postwords();
  const ::Request_PostWords& postwords() const;
  PROTOBUF_NODISCARD ::Request_PostWords* release_postwords();
  ::Request_PostWords* mutable_postwords();
  void set_allocated_postwords(::Request_PostWords* postwords);
  private:
  const ::Request_PostWords& _internal_postwords() const;
  ::Request_PostWords* _internal_mutable_postwords();
  public:
  void unsafe_arena_set_allocated_postwords(
      ::Request_PostWords* postwords);
  ::Request_PostWords* unsafe_arena_release_postwords();

  void clear_msg();
  MsgCase msg_case() const;
  // @@protoc_insertion_point(class_scope:Request)
 private:
  class _Internal;
  void set_has_getcount();
  void set_has_postwords();

  inline bool has_msg() const;
  inline void clear_has_msg();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    union MsgUnion {
      constexpr MsgUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      ::Request_GetCount* getcount_;
      ::Request_PostWords* postwords_;
    } msg_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    uint32_t _oneof_case_[1];

  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_schema_2eproto;
};
// -------------------------------------------------------------------

class Response final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Response) */ {
 public:
  inline Response() : Response(nullptr) {}
  ~Response() override;
  explicit PROTOBUF_CONSTEXPR Response(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Response(const Response& from);
  Response(Response&& from) noexcept
    : Response() {
    *this = ::std::move(from);
  }

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }
  inline Response& operator=(Response&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Response& default_instance() {
    return *internal_default_instance();
  }
  static inline const Response* internal_default_instance() {
    return reinterpret_cast<const Response*>(
               &_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(Response& a, Response& b) {
    a.Swap(&b);
  }
  inline void Swap(Response* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Response* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Response* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Response>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Response& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Response& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Response* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Response";
  }
  protected:
  explicit Response(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Response_Status Status;
  static constexpr Status OK =
    Response_Status_OK;
  static constexpr Status ERROR =
    Response_Status_ERROR;
  static inline bool Status_IsValid(int value) {
    return Response_Status_IsValid(value);
  }
  static constexpr Status Status_MIN =
    Response_Status_Status_MIN;
  static constexpr Status Status_MAX =
    Response_Status_Status_MAX;
  static constexpr int Status_ARRAYSIZE =
    Response_Status_Status_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Status_descriptor() {
    return Response_Status_descriptor();
  }
  template<typename T>
  static inline const std::string& Status_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Status>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Status_Name.");
    return Response_Status_Name(enum_t_value);
  }
  static inline bool Status_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Status* value) {
    return Response_Status_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kErrMsgFieldNumber = 3,
    kStatusFieldNumber = 1,
    kCounterFieldNumber = 2,
  };
  // string errMsg = 3;
  void clear_errmsg();
  const std::string& errmsg() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_errmsg(ArgT0&& arg0, ArgT... args);
  std::string* mutable_errmsg();
  PROTOBUF_NODISCARD std::string* release_errmsg();
  void set_allocated_errmsg(std::string* errmsg);
  private:
  const std::string& _internal_errmsg() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_errmsg(const std::string& value);
  std::string* _internal_mutable_errmsg();
  public:

  // .Response.Status status = 1;
  void clear_status();
  ::Response_Status status() const;
  void set_status(::Response_Status value);
  private:
  ::Response_Status _internal_status() const;
  void _internal_set_status(::Response_Status value);
  public:

  // int32 counter = 2;
  void clear_counter();
  int32_t counter() const;
  void set_counter(int32_t value);
  private:
  int32_t _internal_counter() const;
  void _internal_set_counter(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Response)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr errmsg_;
    int status_;
    int32_t counter_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_schema_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Request_GetCount

// -------------------------------------------------------------------

// Request_PostWords

// bytes data = 1;
inline void Request_PostWords::clear_data() {
  _impl_.data_.ClearToEmpty();
}
inline const std::string& Request_PostWords::data() const {
  // @@protoc_insertion_point(field_get:Request.PostWords.data)
  return _internal_data();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Request_PostWords::set_data(ArgT0&& arg0, ArgT... args) {
 
 _impl_.data_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Request.PostWords.data)
}
inline std::string* Request_PostWords::mutable_data() {
  std::string* _s = _internal_mutable_data();
  // @@protoc_insertion_point(field_mutable:Request.PostWords.data)
  return _s;
}
inline const std::string& Request_PostWords::_internal_data() const {
  return _impl_.data_.Get();
}
inline void Request_PostWords::_internal_set_data(const std::string& value) {
  
  _impl_.data_.Set(value, GetArenaForAllocation());
}
inline std::string* Request_PostWords::_internal_mutable_data() {
  
  return _impl_.data_.Mutable(GetArenaForAllocation());
}
inline std::string* Request_PostWords::release_data() {
  // @@protoc_insertion_point(field_release:Request.PostWords.data)
  return _impl_.data_.Release();
}
inline void Request_PostWords::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    
  } else {
    
  }
  _impl_.data_.SetAllocated(data, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.data_.IsDefault()) {
    _impl_.data_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Request.PostWords.data)
}

// -------------------------------------------------------------------

// Request

// .Request.GetCount getCount = 1;
inline bool Request::_internal_has_getcount() const {
  return msg_case() == kGetCount;
}
inline bool Request::has_getcount() const {
  return _internal_has_getcount();
}
inline void Request::set_has_getcount() {
  _impl_._oneof_case_[0] = kGetCount;
}
inline void Request::clear_getcount() {
  if (_internal_has_getcount()) {
    if (GetArenaForAllocation() == nullptr) {
      delete _impl_.msg_.getcount_;
    }
    clear_has_msg();
  }
}
inline ::Request_GetCount* Request::release_getcount() {
  // @@protoc_insertion_point(field_release:Request.getCount)
  if (_internal_has_getcount()) {
    clear_has_msg();
    ::Request_GetCount* temp = _impl_.msg_.getcount_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    _impl_.msg_.getcount_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::Request_GetCount& Request::_internal_getcount() const {
  return _internal_has_getcount()
      ? *_impl_.msg_.getcount_
      : reinterpret_cast< ::Request_GetCount&>(::_Request_GetCount_default_instance_);
}
inline const ::Request_GetCount& Request::getcount() const {
  // @@protoc_insertion_point(field_get:Request.getCount)
  return _internal_getcount();
}
inline ::Request_GetCount* Request::unsafe_arena_release_getcount() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Request.getCount)
  if (_internal_has_getcount()) {
    clear_has_msg();
    ::Request_GetCount* temp = _impl_.msg_.getcount_;
    _impl_.msg_.getcount_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Request::unsafe_arena_set_allocated_getcount(::Request_GetCount* getcount) {
  clear_msg();
  if (getcount) {
    set_has_getcount();
    _impl_.msg_.getcount_ = getcount;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Request.getCount)
}
inline ::Request_GetCount* Request::_internal_mutable_getcount() {
  if (!_internal_has_getcount()) {
    clear_msg();
    set_has_getcount();
    _impl_.msg_.getcount_ = CreateMaybeMessage< ::Request_GetCount >(GetArenaForAllocation());
  }
  return _impl_.msg_.getcount_;
}
inline ::Request_GetCount* Request::mutable_getcount() {
  ::Request_GetCount* _msg = _internal_mutable_getcount();
  // @@protoc_insertion_point(field_mutable:Request.getCount)
  return _msg;
}

// .Request.PostWords postWords = 2;
inline bool Request::_internal_has_postwords() const {
  return msg_case() == kPostWords;
}
inline bool Request::has_postwords() const {
  return _internal_has_postwords();
}
inline void Request::set_has_postwords() {
  _impl_._oneof_case_[0] = kPostWords;
}
inline void Request::clear_postwords() {
  if (_internal_has_postwords()) {
    if (GetArenaForAllocation() == nullptr) {
      delete _impl_.msg_.postwords_;
    }
    clear_has_msg();
  }
}
inline ::Request_PostWords* Request::release_postwords() {
  // @@protoc_insertion_point(field_release:Request.postWords)
  if (_internal_has_postwords()) {
    clear_has_msg();
    ::Request_PostWords* temp = _impl_.msg_.postwords_;
    if (GetArenaForAllocation() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    _impl_.msg_.postwords_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::Request_PostWords& Request::_internal_postwords() const {
  return _internal_has_postwords()
      ? *_impl_.msg_.postwords_
      : reinterpret_cast< ::Request_PostWords&>(::_Request_PostWords_default_instance_);
}
inline const ::Request_PostWords& Request::postwords() const {
  // @@protoc_insertion_point(field_get:Request.postWords)
  return _internal_postwords();
}
inline ::Request_PostWords* Request::unsafe_arena_release_postwords() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Request.postWords)
  if (_internal_has_postwords()) {
    clear_has_msg();
    ::Request_PostWords* temp = _impl_.msg_.postwords_;
    _impl_.msg_.postwords_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Request::unsafe_arena_set_allocated_postwords(::Request_PostWords* postwords) {
  clear_msg();
  if (postwords) {
    set_has_postwords();
    _impl_.msg_.postwords_ = postwords;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Request.postWords)
}
inline ::Request_PostWords* Request::_internal_mutable_postwords() {
  if (!_internal_has_postwords()) {
    clear_msg();
    set_has_postwords();
    _impl_.msg_.postwords_ = CreateMaybeMessage< ::Request_PostWords >(GetArenaForAllocation());
  }
  return _impl_.msg_.postwords_;
}
inline ::Request_PostWords* Request::mutable_postwords() {
  ::Request_PostWords* _msg = _internal_mutable_postwords();
  // @@protoc_insertion_point(field_mutable:Request.postWords)
  return _msg;
}

inline bool Request::has_msg() const {
  return msg_case() != MSG_NOT_SET;
}
inline void Request::clear_has_msg() {
  _impl_._oneof_case_[0] = MSG_NOT_SET;
}
inline Request::MsgCase Request::msg_case() const {
  return Request::MsgCase(_impl_._oneof_case_[0]);
}
// -------------------------------------------------------------------

// Response

// .Response.Status status = 1;
inline void Response::clear_status() {
  _impl_.status_ = 0;
}
inline ::Response_Status Response::_internal_status() const {
  return static_cast< ::Response_Status >(_impl_.status_);
}
inline ::Response_Status Response::status() const {
  // @@protoc_insertion_point(field_get:Response.status)
  return _internal_status();
}
inline void Response::_internal_set_status(::Response_Status value) {
  
  _impl_.status_ = value;
}
inline void Response::set_status(::Response_Status value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:Response.status)
}

// int32 counter = 2;
inline void Response::clear_counter() {
  _impl_.counter_ = 0;
}
inline int32_t Response::_internal_counter() const {
  return _impl_.counter_;
}
inline int32_t Response::counter() const {
  // @@protoc_insertion_point(field_get:Response.counter)
  return _internal_counter();
}
inline void Response::_internal_set_counter(int32_t value) {
  
  _impl_.counter_ = value;
}
inline void Response::set_counter(int32_t value) {
  _internal_set_counter(value);
  // @@protoc_insertion_point(field_set:Response.counter)
}

// string errMsg = 3;
inline void Response::clear_errmsg() {
  _impl_.errmsg_.ClearToEmpty();
}
inline const std::string& Response::errmsg() const {
  // @@protoc_insertion_point(field_get:Response.errMsg)
  return _internal_errmsg();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Response::set_errmsg(ArgT0&& arg0, ArgT... args) {
 
 _impl_.errmsg_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Response.errMsg)
}
inline std::string* Response::mutable_errmsg() {
  std::string* _s = _internal_mutable_errmsg();
  // @@protoc_insertion_point(field_mutable:Response.errMsg)
  return _s;
}
inline const std::string& Response::_internal_errmsg() const {
  return _impl_.errmsg_.Get();
}
inline void Response::_internal_set_errmsg(const std::string& value) {
  
  _impl_.errmsg_.Set(value, GetArenaForAllocation());
}
inline std::string* Response::_internal_mutable_errmsg() {
  
  return _impl_.errmsg_.Mutable(GetArenaForAllocation());
}
inline std::string* Response::release_errmsg() {
  // @@protoc_insertion_point(field_release:Response.errMsg)
  return _impl_.errmsg_.Release();
}
inline void Response::set_allocated_errmsg(std::string* errmsg) {
  if (errmsg != nullptr) {
    
  } else {
    
  }
  _impl_.errmsg_.SetAllocated(errmsg, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.errmsg_.IsDefault()) {
    _impl_.errmsg_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Response.errMsg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Response_Status> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Response_Status>() {
  return ::Response_Status_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_schema_2eproto
