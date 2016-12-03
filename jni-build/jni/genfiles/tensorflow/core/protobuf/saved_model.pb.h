// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/saved_model.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/protobuf/meta_graph.pb.h"
// @@protoc_insertion_point(includes)

namespace tensorflow {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto();
void protobuf_AssignDesc_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto();
void protobuf_ShutdownFile_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto();

class SavedModel;

// ===================================================================

class SavedModel : public ::google::protobuf::Message {
 public:
  SavedModel();
  virtual ~SavedModel();

  SavedModel(const SavedModel& from);

  inline SavedModel& operator=(const SavedModel& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const SavedModel& default_instance();

  void UnsafeArenaSwap(SavedModel* other);
  void Swap(SavedModel* other);

  // implements Message ----------------------------------------------

  inline SavedModel* New() const { return New(NULL); }

  SavedModel* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SavedModel& from);
  void MergeFrom(const SavedModel& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SavedModel* other);
  protected:
  explicit SavedModel(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 saved_model_schema_version = 1;
  void clear_saved_model_schema_version();
  static const int kSavedModelSchemaVersionFieldNumber = 1;
  ::google::protobuf::int64 saved_model_schema_version() const;
  void set_saved_model_schema_version(::google::protobuf::int64 value);

  // repeated .tensorflow.MetaGraphDef meta_graphs = 2;
  int meta_graphs_size() const;
  void clear_meta_graphs();
  static const int kMetaGraphsFieldNumber = 2;
  const ::tensorflow::MetaGraphDef& meta_graphs(int index) const;
  ::tensorflow::MetaGraphDef* mutable_meta_graphs(int index);
  ::tensorflow::MetaGraphDef* add_meta_graphs();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::MetaGraphDef >*
      mutable_meta_graphs();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::MetaGraphDef >&
      meta_graphs() const;

  // @@protoc_insertion_point(class_scope:tensorflow.SavedModel)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool _is_default_instance_;
  ::google::protobuf::int64 saved_model_schema_version_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::MetaGraphDef > meta_graphs_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto();

  void InitAsDefaultInstance();
  static SavedModel* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SavedModel

// optional int64 saved_model_schema_version = 1;
inline void SavedModel::clear_saved_model_schema_version() {
  saved_model_schema_version_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 SavedModel::saved_model_schema_version() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedModel.saved_model_schema_version)
  return saved_model_schema_version_;
}
inline void SavedModel::set_saved_model_schema_version(::google::protobuf::int64 value) {
  
  saved_model_schema_version_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.SavedModel.saved_model_schema_version)
}

// repeated .tensorflow.MetaGraphDef meta_graphs = 2;
inline int SavedModel::meta_graphs_size() const {
  return meta_graphs_.size();
}
inline void SavedModel::clear_meta_graphs() {
  meta_graphs_.Clear();
}
inline const ::tensorflow::MetaGraphDef& SavedModel::meta_graphs(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedModel.meta_graphs)
  return meta_graphs_.Get(index);
}
inline ::tensorflow::MetaGraphDef* SavedModel::mutable_meta_graphs(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedModel.meta_graphs)
  return meta_graphs_.Mutable(index);
}
inline ::tensorflow::MetaGraphDef* SavedModel::add_meta_graphs() {
  // @@protoc_insertion_point(field_add:tensorflow.SavedModel.meta_graphs)
  return meta_graphs_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::MetaGraphDef >*
SavedModel::mutable_meta_graphs() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.SavedModel.meta_graphs)
  return &meta_graphs_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::MetaGraphDef >&
SavedModel::meta_graphs() const {
  // @@protoc_insertion_point(field_list:tensorflow.SavedModel.meta_graphs)
  return meta_graphs_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fprotobuf_2fsaved_5fmodel_2eproto__INCLUDED