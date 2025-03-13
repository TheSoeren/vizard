qt_add_executable(_qt_test
    mainwidget.cpp
    main.cpp
)

target_link_libraries(_qt_test PRIVATE Qt6::Widgets)
