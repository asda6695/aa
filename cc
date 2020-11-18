<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE root [
        <!ENTITY % param1 "Hello">
        <!ENTITY % param2 " ">
        <!ENTITY % param3 "World">
        <!ENTITY content "%param1;%param2;%param3;">
        ]>
<root><foo>&content</foo></root>
