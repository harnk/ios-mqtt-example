//
//  MQTTViewController.h
//  MQTTExample
//
//  Created by Jeff Mesnil on 15/02/2014.
//  Copyright (c) 2014 jmesnil.net. All rights reserved.
//
// To see this work, run it, then do the following commands in terminal
//
// to switch on the subscribed LED:
//   curl -X PUT --data-binary "1"  http://eclipse.mqttbridge.com/%2FMQTTExample%2FLED
// to switch off the subscribed LED:
//   curl -X PUT --data-binary "0"  http://eclipse.mqttbridge.com/%2FMQTTExample%2FLED
// to put some text in the Subscribed Text box:
//   curl -X PUT --data "put any message you want to show here" http://eclipse.mqttbridge.com/%2FMQTTExample%2FLED

#import <UIKit/UIKit.h>

@interface MQTTViewController : UIViewController

@end
