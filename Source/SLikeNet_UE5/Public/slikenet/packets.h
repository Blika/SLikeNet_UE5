#pragma once

#include "BitStream.h"
#include "string.h"
#include "MessageIdentifiers.h"

//template packet
class Packet{
	public:
		unsigned char typeId = ID_CONNECTED_PING;
		Packet(){
		}
		~Packet(){
		}
		void encode(SLNet::BitStream* stream){
			stream->Write(typeId);
		}
		static Packet decode(SLNet::Packet* packet){
			return Packet();
		}
};