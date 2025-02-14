/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ai_serenade_treesitter_TreeSitter */

#ifndef _Included_ai_serenade_treesitter_TreeSitter
#define _Included_ai_serenade_treesitter_TreeSitter
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeChild
 * Signature: (Lai/serenade/treesitter/Node;I)Lai/serenade/treesitter/Node;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeChild
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeChildCount
 * Signature: (Lai/serenade/treesitter/Node;)I
 */
JNIEXPORT jint JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeChildCount
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeHasError
 * Signature: (Lai/serenade/treesitter/Node;)Z
 */
JNIEXPORT jboolean JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeHasError
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeEndByte
 * Signature: (Lai/serenade/treesitter/Node;)I
 */
JNIEXPORT jint JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeEndByte
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeStartByte
 * Signature: (Lai/serenade/treesitter/Node;)I
 */
JNIEXPORT jint JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeStartByte
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeStartPoint
 * Signature: (Lai/serenade/treesitter/Node;)Lai/serenade/treesitter/Point;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeStartPoint
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeEndPoint
 * Signature: (Lai/serenade/treesitter/Node;)Lai/serenade/treesitter/Point;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeEndPoint
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeString
 * Signature: (Lai/serenade/treesitter/Node;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeString
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeType
 * Signature: (Lai/serenade/treesitter/Node;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeType
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeIsNull
 * Signature: (Lai/serenade/treesitter/Node;)Z
 */
JNIEXPORT jboolean JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeIsNull
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeIsNamed
 * Signature: (Lai/serenade/treesitter/Node;)Z
 */
JNIEXPORT jboolean JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeIsNamed
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodePrevSibling
 * Signature: (Lai/serenade/treesitter/Node;)Lai/serenade/treesitter/Node;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_nodePrevSibling
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeNextSibling
 * Signature: (Lai/serenade/treesitter/Node;)Lai/serenade/treesitter/Node;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeNextSibling
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeParent
 * Signature: (Lai/serenade/treesitter/Node;)Lai/serenade/treesitter/Node;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeParent
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeHasParent
 * Signature: (Lai/serenade/treesitter/Node;)Z
 */
JNIEXPORT jboolean JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeHasParent
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeHasPrevSibling
 * Signature: (Lai/serenade/treesitter/Node;)Z
 */
JNIEXPORT jboolean JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeHasPrevSibling
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeHasNextSibling
 * Signature: (Lai/serenade/treesitter/Node;)Z
 */
JNIEXPORT jboolean JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeHasNextSibling
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeGetFieldName
 * Signature: (Lai/serenade/treesitter/Node;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeGetFieldName
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    parserNew
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_ai_serenade_treesitter_TreeSitter_parserNew
  (JNIEnv *, jclass);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    parserDelete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_ai_serenade_treesitter_TreeSitter_parserDelete
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    parserSetLanguage
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_ai_serenade_treesitter_TreeSitter_parserSetLanguage
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    parserParseBytes
 * Signature: (J[BI)J
 */
JNIEXPORT jlong JNICALL Java_ai_serenade_treesitter_TreeSitter_parserParseBytes
  (JNIEnv *, jclass, jlong, jbyteArray, jint);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorNew
 * Signature: (Lai/serenade/treesitter/Node;)J
 */
JNIEXPORT jlong JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorNew
  (JNIEnv *, jclass, jobject);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorCurrentTreeCursorNode
 * Signature: (J)Lai/serenade/treesitter/TreeCursorNode;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorCurrentTreeCursorNode
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorCurrentFieldName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorCurrentFieldName
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorCurrentNode
 * Signature: (J)Lai/serenade/treesitter/Node;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorCurrentNode
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorDelete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorDelete
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorGotoFirstChild
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorGotoFirstChild
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorGotoNextSibling
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorGotoNextSibling
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeCursorGotoParent
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_ai_serenade_treesitter_TreeSitter_treeCursorGotoParent
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeDelete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_ai_serenade_treesitter_TreeSitter_treeDelete
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    treeRootNode
 * Signature: (J)Lai/serenade/treesitter/Node;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_treeRootNode
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_serenade_treesitter_TreeSitter
 * Method:    nodeGetChildByFieldName
 * Signature: (Lai/serenade/treesitter/Node;Ljava/lang/String;)Lai/serenade/treesitter/Node;
 */
JNIEXPORT jobject JNICALL Java_ai_serenade_treesitter_TreeSitter_nodeGetChildByFieldName
  (JNIEnv *, jclass, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
