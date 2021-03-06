// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlatformWindowsSeriallizer.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PlatformWindowsSeriallizer_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PlatformWindowsSeriallizer_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_PlatformWindowsSeriallizer_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PlatformWindowsSeriallizer_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PlatformWindowsSeriallizer_2eproto;
namespace PlatformWindowsSeriallizer {
class WinResources;
class WinResourcesDefaultTypeInternal;
extern WinResourcesDefaultTypeInternal _WinResources_default_instance_;
class WinResources_ResEntry_DoNotUse;
class WinResources_ResEntry_DoNotUseDefaultTypeInternal;
extern WinResources_ResEntry_DoNotUseDefaultTypeInternal _WinResources_ResEntry_DoNotUse_default_instance_;
}  // namespace PlatformWindowsSeriallizer
PROTOBUF_NAMESPACE_OPEN
template<> ::PlatformWindowsSeriallizer::WinResources* Arena::CreateMaybeMessage<::PlatformWindowsSeriallizer::WinResources>(Arena*);
template<> ::PlatformWindowsSeriallizer::WinResources_ResEntry_DoNotUse* Arena::CreateMaybeMessage<::PlatformWindowsSeriallizer::WinResources_ResEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace PlatformWindowsSeriallizer {

// ===================================================================

class WinResources_ResEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<WinResources_ResEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BYTES,
    0 > {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<WinResources_ResEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BYTES,
    0 > SuperType;
  WinResources_ResEntry_DoNotUse();
  explicit WinResources_ResEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const WinResources_ResEntry_DoNotUse& other);
  static const WinResources_ResEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const WinResources_ResEntry_DoNotUse*>(&_WinResources_ResEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "PlatformWindowsSeriallizer.WinResources.ResEntry.key");
 }
  static bool ValidateValue(void*) { return true; }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_PlatformWindowsSeriallizer_2eproto);
    return ::descriptor_table_PlatformWindowsSeriallizer_2eproto.file_level_metadata[0];
  }

  public:
};

// -------------------------------------------------------------------

class WinResources PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PlatformWindowsSeriallizer.WinResources) */ {
 public:
  inline WinResources() : WinResources(nullptr) {}
  virtual ~WinResources();

  WinResources(const WinResources& from);
  WinResources(WinResources&& from) noexcept
    : WinResources() {
    *this = ::std::move(from);
  }

  inline WinResources& operator=(const WinResources& from) {
    CopyFrom(from);
    return *this;
  }
  inline WinResources& operator=(WinResources&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const WinResources& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WinResources* internal_default_instance() {
    return reinterpret_cast<const WinResources*>(
               &_WinResources_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(WinResources& a, WinResources& b) {
    a.Swap(&b);
  }
  inline void Swap(WinResources* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(WinResources* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WinResources* New() const final {
    return CreateMaybeMessage<WinResources>(nullptr);
  }

  WinResources* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WinResources>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WinResources& from);
  void MergeFrom(const WinResources& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(WinResources* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PlatformWindowsSeriallizer.WinResources";
  }
  protected:
  explicit WinResources(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_PlatformWindowsSeriallizer_2eproto);
    return ::descriptor_table_PlatformWindowsSeriallizer_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kResFieldNumber = 1,
  };
  // map<string, bytes> res = 1;
  int res_size() const;
  private:
  int _internal_res_size() const;
  public:
  void clear_res();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      _internal_res() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      _internal_mutable_res();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      res() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      mutable_res();

  // @@protoc_insertion_point(class_scope:PlatformWindowsSeriallizer.WinResources)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      WinResources_ResEntry_DoNotUse,
      std::string, std::string,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BYTES,
      0 > res_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_PlatformWindowsSeriallizer_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// WinResources

// map<string, bytes> res = 1;
inline int WinResources::_internal_res_size() const {
  return res_.size();
}
inline int WinResources::res_size() const {
  return _internal_res_size();
}
inline void WinResources::clear_res() {
  res_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
WinResources::_internal_res() const {
  return res_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
WinResources::res() const {
  // @@protoc_insertion_point(field_map:PlatformWindowsSeriallizer.WinResources.res)
  return _internal_res();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
WinResources::_internal_mutable_res() {
  return res_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
WinResources::mutable_res() {
  // @@protoc_insertion_point(field_mutable_map:PlatformWindowsSeriallizer.WinResources.res)
  return _internal_mutable_res();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace PlatformWindowsSeriallizer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PlatformWindowsSeriallizer_2eproto
