{dede:sppage sptype='full' srul='1' erul='5'}{/dede:sppage}
{dede:previewurl}http://www.piaohua.com/html/lianxuju/2012/0522/24424.html{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<title>[内容]</title>{/dede:match}
   {dede:trim replace=""}_迅雷下载_免费下载_飘花电影网{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='writer' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='source' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='pubdate' value='' isunit='' isdown=''}
   {dede:match}发布时间：[内容]<br/>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='body' value='' isunit='1' isdown=''}
   {dede:match}<div id="showinfo">[内容]</div><ul class="mmlist">{/dede:match}
   {dede:trim replace=""}<font([^>]*)>{/dede:trim}
{dede:trim replace=""}</font>{/dede:trim}
{dede:trim replace=""}<strong([^>]*)>{/dede:trim}
{dede:trim replace=""}</strong>{/dede:trim}
{dede:trim replace=""}<span([^>]*)>{/dede:trim}
{dede:trim replace=""}</span>{/dede:trim}
   {dede:function}$rpstr = "www.piaohua.com";
$mystr = "www.xiaozhizhu.net";
@me = str_replace($rpstr,$mystr,@me);










{/dede:function}
{/dede:item}