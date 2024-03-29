// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpcProto.proto
#ifndef GRPC_grpcProto_2eproto__INCLUDED
#define GRPC_grpcProto_2eproto__INCLUDED

#include "grpcProto.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpcProto {

class gRPC final {
 public:
  static constexpr char const* service_full_name() {
    return "grpcProto.gRPC";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Account(::grpc::ClientContext* context, const ::grpcProto::accRequest& request, ::grpcProto::accReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcProto::accReply>> AsyncAccount(::grpc::ClientContext* context, const ::grpcProto::accRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcProto::accReply>>(AsyncAccountRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcProto::accReply>> PrepareAsyncAccount(::grpc::ClientContext* context, const ::grpcProto::accRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpcProto::accReply>>(PrepareAsyncAccountRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Account(::grpc::ClientContext* context, const ::grpcProto::accRequest* request, ::grpcProto::accReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Account(::grpc::ClientContext* context, const ::grpcProto::accRequest* request, ::grpcProto::accReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcProto::accReply>* AsyncAccountRaw(::grpc::ClientContext* context, const ::grpcProto::accRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpcProto::accReply>* PrepareAsyncAccountRaw(::grpc::ClientContext* context, const ::grpcProto::accRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Account(::grpc::ClientContext* context, const ::grpcProto::accRequest& request, ::grpcProto::accReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcProto::accReply>> AsyncAccount(::grpc::ClientContext* context, const ::grpcProto::accRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcProto::accReply>>(AsyncAccountRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcProto::accReply>> PrepareAsyncAccount(::grpc::ClientContext* context, const ::grpcProto::accRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpcProto::accReply>>(PrepareAsyncAccountRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Account(::grpc::ClientContext* context, const ::grpcProto::accRequest* request, ::grpcProto::accReply* response, std::function<void(::grpc::Status)>) override;
      void Account(::grpc::ClientContext* context, const ::grpcProto::accRequest* request, ::grpcProto::accReply* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::grpcProto::accReply>* AsyncAccountRaw(::grpc::ClientContext* context, const ::grpcProto::accRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpcProto::accReply>* PrepareAsyncAccountRaw(::grpc::ClientContext* context, const ::grpcProto::accRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Account_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Account(::grpc::ServerContext* context, const ::grpcProto::accRequest* request, ::grpcProto::accReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Account : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Account() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Account() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Account(::grpc::ServerContext* /*context*/, const ::grpcProto::accRequest* /*request*/, ::grpcProto::accReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAccount(::grpc::ServerContext* context, ::grpcProto::accRequest* request, ::grpc::ServerAsyncResponseWriter< ::grpcProto::accReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Account<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Account : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Account() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpcProto::accRequest, ::grpcProto::accReply>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpcProto::accRequest* request, ::grpcProto::accReply* response) { return this->Account(context, request, response); }));}
    void SetMessageAllocatorFor_Account(
        ::grpc::MessageAllocator< ::grpcProto::accRequest, ::grpcProto::accReply>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::grpcProto::accRequest, ::grpcProto::accReply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Account() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Account(::grpc::ServerContext* /*context*/, const ::grpcProto::accRequest* /*request*/, ::grpcProto::accReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Account(
      ::grpc::CallbackServerContext* /*context*/, const ::grpcProto::accRequest* /*request*/, ::grpcProto::accReply* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Account<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Account : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Account() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Account() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Account(::grpc::ServerContext* /*context*/, const ::grpcProto::accRequest* /*request*/, ::grpcProto::accReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Account : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Account() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Account() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Account(::grpc::ServerContext* /*context*/, const ::grpcProto::accRequest* /*request*/, ::grpcProto::accReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAccount(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Account : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Account() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Account(context, request, response); }));
    }
    ~WithRawCallbackMethod_Account() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Account(::grpc::ServerContext* /*context*/, const ::grpcProto::accRequest* /*request*/, ::grpcProto::accReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Account(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Account : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Account() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::grpcProto::accRequest, ::grpcProto::accReply>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::grpcProto::accRequest, ::grpcProto::accReply>* streamer) {
                       return this->StreamedAccount(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Account() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Account(::grpc::ServerContext* /*context*/, const ::grpcProto::accRequest* /*request*/, ::grpcProto::accReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAccount(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpcProto::accRequest,::grpcProto::accReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Account<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Account<Service > StreamedService;
};

}  // namespace grpcProto


#endif  // GRPC_grpcProto_2eproto__INCLUDED
