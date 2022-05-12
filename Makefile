CC = g++

LDFLAGS = -lhiredis -lpthread

GRPC_CPP_PLUGIN_PATH ?= `which grpc_cpp_plugin`

all: main grpcProto/grpcProto.pb.cc grpcProto/grpcProto.grpc.pb.cc 

main: main.o server.o rediscon.o
	$(CC) $^ $(LDFLAGS) -o $@ 

%.pb.cc: %.proto
	protoc -I. --cpp_out=. $<

%.grpc.pb.cc: %.proto
	protoc -I. --grpc_out=. --plugin=protoc-gen-grpc=$(GRPC_CPP_PLUGIN_PATH) $<

clean:
	rm -f *.o #grpcProto/*.cc grpcProto/*.h 
