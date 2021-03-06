#import <Flutter/Flutter.h>
#import <AVFoundation/AVFoundation.h>

@interface AudioPlayer : NSObject<FlutterStreamHandler>

@property (readonly, nonatomic) AVQueuePlayer *player;
@property (readonly, nonatomic) float speed;

- (instancetype)initWithRegistrar:(NSObject<FlutterPluginRegistrar> *)registrar playerId:(NSString*)idParam;
- (void)dispose;

@end

enum ProcessingState {
	none,
	loading,
	buffering,
	ready,
	completed
};

enum LoopMode {
	loopOff,
	loopOne,
	loopAll
};
