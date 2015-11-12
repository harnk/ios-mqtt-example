ios-mqtt-example

* to switch __on__ the subscribed LED, from terminal do this:

<!-- -->
    curl -X PUT --data-binary "1"  http://eclipse.mqttbridge.com/%2FMQTTExample%2FLED


* switch __off__ the subscribed LED:

<!-- -->
    curl -X PUT --data-binary "0"  http://eclipse.mqttbridge.com/%2FMQTTExample%2FLED


* send __text__ to the subscribed text label:

<!-- -->
    curl -X PUT --data "put some text here that you want to see in the app"  http://eclipse.mqttbridge.com/%2FMQTTExample%2FLED


