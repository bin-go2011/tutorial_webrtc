#include "api/peerconnectioninterface.h"
#include "api/audio_codecs/builtin_audio_decoder_factory.h"
#include "api/audio_codecs/builtin_audio_encoder_factory.h"
int main(int argc, char** argv) {

  rtc::scoped_refptr<webrtc::PeerConnectionFactoryInterface>
  peer_connection_factory = webrtc::CreatePeerConnectionFactory( 
  		webrtc::CreateBuiltinAudioEncoderFactory(),
    	webrtc::CreateBuiltinAudioDecoderFactory());

  return 0;
}
