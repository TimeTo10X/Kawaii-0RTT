/*
    Extras

    Your js logic in1 file ^_^
*/

/*
    Provides context for "Kawaii_loader"

    Basicly pathes to your desired Qml View used when calling
    Kawai_loader.change_view(const QString& view);
*/
export function provide_loader_context() {
  return {
    Auth: "Front/Auth.qml",
    Menu: "Front/Menu.qml",
  };
}
