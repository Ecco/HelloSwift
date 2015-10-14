# Running SwiftCode on Android

You should start by reading the blog post where I explain [how to run Swift code on Android](http://romain.goyet.com/articles/running_swift_code_on_android/). All the concepts are explained there.

# Yes but what will it look like?

It will look like this:

![Swift on Android demo](http://romain.goyet.com/articles/running_swift_code_on_android/demo.png)

# How do I build this?

You'll need Xcode, the Android SDK and the Android NDK. Then you'll need to run this :

* Edit the Makefile
* `make clean && make`
* `ant debug install`

And that's it!

# License?

I dedicate all this code to the public domain. Note that part of this come from the "hello-jni" sample code from the AOSP so some restrictions may apply.
