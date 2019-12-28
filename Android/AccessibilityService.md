# Android: AccessibilityService

- An accessibility service is an application that provides user interface enhancements to assist users with disabilities, or who may temporarily be unable to fully interact with a device.

```xml
<application>
    <service android:name=".MyAccessibilityService"
        android:permission="android.permission.BIND_ACCESSIBILITY_SERVICE"
        android:label="@string/accessibility_service_label">
      <intent-filter>
        <action android:name="android.accessibilityservice.AccessibilityService" />
      </intent-filter>
    </service>
  </application>
```

```java
@Override
public void onServiceConnected() {
    // Set the type of events that this service wants to listen to. Others
    // won't be passed to this service.
    info.eventTypes = AccessibilityEvent.TYPE_VIEW_CLICKED |
            AccessibilityEvent.TYPE_VIEW_FOCUSED;

    // If you only want this service to work with specific applications, set their
    // package names here. Otherwise, when the service is activated, it will listen
    // to events from all applications.
    info.packageNames = new String[]
            {"com.example.android.myFirstApp", "com.example.android.mySecondApp"};

    // Set the type of feedback your service will provide.
    info.feedbackType = AccessibilityServiceInfo.FEEDBACK_SPOKEN;

    // Default services are invoked only if no package-specific ones are present
    // for the type of AccessibilityEvent generated. This service *is*
    // application-specific, so the flag isn't necessary. If this was a
    // general-purpose service, it would be worth considering setting the
    // DEFAULT flag.

    // info.flags = AccessibilityServiceInfo.DEFAULT;

    info.notificationTimeout = 100;

    this.setServiceInfo(info);

}
```

```xml
<accessibility-service
     android:accessibilityEventTypes="typeViewClicked|typeViewFocused"
     android:packageNames="com.example.android.myFirstApp, com.example.android.mySecondApp"
     android:accessibilityFeedbackType="feedbackSpoken"
     android:notificationTimeout="100"
     android:settingsActivity="com.example.android.apis.accessibility.TestBackActivity"
     android:canRetrieveWindowContent="true"
/>
```

```xml
<service android:name=".MyAccessibilityService">
     <intent-filter>
         <action android:name="android.accessibilityservice.AccessibilityService" />
     </intent-filter>
     <meta-data android:name="android.accessibilityservice"
     android:resource="@xml/serviceconfig" />
</service>
```

- `onServiceConnected()` - (optional) This system calls this method when it successfully connects to your accessibility service. Use this method to do any one-time setup steps for your service, including connecting to user feedback system services, such as the audio manager or device vibrator. If you want to set the configuration of your service at runtime or make one-time adjustments, this is a convenient location from which to call setServiceInfo().
- `onAccessibilityEvent()` - (required) This method is called back by the system when it detects an `AccessibilityEvent` that matches the event filtering parameters specified by your accessibility service. For example, when the user clicks a button or focuses on a user interface control in an application for which your accessibility service is providing feedback. When this happens, the system calls this method, passing the associated `AccessibilityEvent`, which the service can then interpret and use to provide feedback to the user. This method may be called many times over the lifecycle of your service.
- `onInterrupt()` - (required) This method is called when the system wants to interrupt the feedback your service is providing, usually in response to a user action such as moving focus to a different control. This method may be called many times over the lifecycle of your service.
- `onUnbind()` - (optional) This method is called when the system is about to shutdown the accessibility service. Use this method to do any one-time shutdown procedures, including de-allocating user feedback system services, such as the audio manager or device vibrator.

- https://developer.android.com/reference/android/accessibilityservice/AccessibilityService
- https://developer.android.com/guide/topics/ui/accessibility/service

