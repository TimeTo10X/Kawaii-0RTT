# Themes

```mermaid
graph LR;
    App-->Auth;
    Auth-->SignIn[Sign In];
    Auth-->SignUp[Sign Up];
    SignIn-->MainView
    SignUp-->MainView
    MainView-->Settings
    MainView-->CustomView1[Custom View 1]
    MainView-->CustomView2[Custom View 2]
    MainView-->CustomView3[Custom View 3]
    MainView-->CustomViewN[Custom View N]
```
