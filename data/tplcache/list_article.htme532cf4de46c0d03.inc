<?php
$z[0]=Array("field","",183,202);
$z[0][4]['name']="title";
$z[1]=Array("global","",203,229);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",254,283);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",320,378);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",619,654);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",815,844);
$z[5][4]['name']="position";
$z[6]=Array("pagelist","",888,966);
$z[6][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[6][4]['listsize']="5";
$z[7]=Array("list","\r\n				<dl>\r\n					<dt>\r\n					<a class=\"img\" href=\"[field:arcurl/]\" target=\"_blank\">\r\n					<img alt=\"[field:title/]\" border=\"0\" height=\"150\" src=\"[field:litpic/]\" width=\"120\"></a></dt>\r\n					<dd><strong><a href=\"[field:arcurl/]\">[field:title/]</a></strong><p>\r\n					[field:description/]...</p>\r\n					<span>更新时间：[field:pubdate function=\"GetDateMK(@me)\"/]&nbsp;&nbsp;\r\n					<a href=\"[field:arcurl/]\">点击下载</a></span></dd>\r\n				</dl>\r\n			 ",1007,1500);
$z[7][4]['pagesize']="14";
$z[7][4]['titlelen']="24";
$z[8]=Array("pagelist","",1579,1657);
$z[8][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[8][4]['listsize']="5";
$z[9]=Array("field","",1733,1752);
$z[9][4]['name']="title";
$z[10]=Array("arclist","\r\n       				   <li><span>[field:global name=autoindex/] </span><a href=\"[field:arcurl/]\"><font color=\"#0000FF\">[field:title/]</font></a>（[field:typename/]）</li>\r\n        			 ",1780,2021);
$z[10][4]['row']="24";
$z[10][4]['orderby']="click";
$z[10][4]['titlelen']="35";
$z[11]=Array("include","",2188,2225);
$z[11][4]['filename']="footer.htm";

?>