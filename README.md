Project: atlas-printf

Description: Our task was to write a local version of the standard library’s printf function. The original function’s name stands for print formatted, indicating its ability to handle printing text with specific formatting rules applied. Printf produces an output based on a format string. The string can contain both plain text and special formatting codes; initiated by the presence of the special character ‘%’. Following the percent symbol are the type indicators telling the function what datatype format is needed for that point in the string. As follows… 

%c - character
%s - string
%d - decimal integer
%i - integer

While the original printf uses a switch-case, our version calls a function that iterates through an array of structs. This emulates the behavior of a switch-case.
