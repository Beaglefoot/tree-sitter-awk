@include "somelib"

function do_stuff(a, b) {
  print a + b;
}

BEGIN {
  do_stuff("hi", 42);
  
  arr[1] = "some_value";

  for (i in arr) delete arr[i];

  "cal" | getline line;

  printf("%s", line);
  close("cal");
}

/[a-z]/ {
  # Here goes comment
  split($0, arr, ",");

  next;
}

END {
  for (x = 1; x <= 12; x++) {
    print tolower($x) > "/dev/stderr"

    if (x == 9)
      break;
    else if (x == 5)
      continue;
  }
}
