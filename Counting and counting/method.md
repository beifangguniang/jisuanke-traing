**问题**

“伯爵说”序列如下：1,11,21,1211,111221,…。其1读作one 1或者11。11读作two 1s或者21。21读作one 2, one 1或者1211。多组输入，读到文件结束。每组输入给定一个整数 n(1≤n≤30)，输出第 n 个序列，整数序列以字符串的形式表示。


**思路**

根据题意，此题为找规律题，后个字符串都是前一个字符串的计数。比如：（1）1，后一个字符串11。也就是1个1。（2）11，后一个字符串21,也就是2个1，然后依此类推即可。





